#include "GUIMyFrame.h"
#include <vector>
#include <fstream>
#include <cmath>
#include "vecmat.h"
#include "LissajousCurve.h"

std::vector<Segment> data;
LissajousCurve curve;

GUIMyFrame::GUIMyFrame(wxWindow* parent) : MyFrame(parent){

	m_staticText25->SetLabel(_("Obr\u00F3t X:"));
	m_staticText27->SetLabel(_("Obr\u00F3t Y:"));
	m_staticText29->SetLabel(_("Obr\u00F3t Z:"));

	WxSB_RotateX->SetRange(0, 360); WxSB_RotateX->SetValue(0);
	WxSB_RotateY->SetRange(0, 360); WxSB_RotateY->SetValue(0);
	WxSB_RotateZ->SetRange(0, 360); WxSB_RotateZ->SetValue(0);

	//test

	curve.set_A(.5);
	curve.set_B(.5);
	curve.set_C(.5);
	curve.set_alpha(10);
	curve.set_beta(20);
	curve.set_gamma(30);

	data = curve.get_curve(2., .01);

}

void GUIMyFrame::WxPanel_Repaint(wxUpdateUIEvent& event){

	Repaint();

}

void GUIMyFrame::Scrolls_Updated(wxScrollEvent& event){

	WxST_RotateX->SetLabel(wxString::Format(wxT("%d"), WxSB_RotateX->GetValue()));
	WxST_RotateY->SetLabel(wxString::Format(wxT("%d"), WxSB_RotateY->GetValue()));
	WxST_RotateZ->SetLabel(wxString::Format(wxT("%d"), WxSB_RotateZ->GetValue()));

	Repaint();
}

Matrix4 RotateX(float x){

	Matrix4 temp;
	float a = x * M_PI / 180.;
	temp.data[1][1] = cos(a);
	temp.data[2][2] = cos(a);
	temp.data[1][2] = sin(a);
	temp.data[2][1] = -sin(a);
	temp.data[0][0] = 1.;

	return temp;

}

Matrix4 RotateY(float y) {

	Matrix4 temp;
	float a = y * M_PI / 180.;
	temp.data[0][0] = cos(a);
	temp.data[2][2] = cos(a);
	temp.data[2][0] = sin(a);
	temp.data[0][2] = -sin(a);
	temp.data[1][1] = 1.;

	return temp;

}

Matrix4 RotateZ(float z) {

	Matrix4 temp;
	float a = z * M_PI / 180.;
	temp.data[0][0] = cos(a);
	temp.data[1][1] = cos(a);
	temp.data[0][1] = sin(a);
	temp.data[1][0] = -sin(a);
	temp.data[2][2] = 1.;

	return temp;

}

Matrix4 Projection(float w, float h) {

	Matrix4 temp1;
	Matrix4 temp2;

	temp1.data[0][0] = 1.;
	temp1.data[1][1] = 1.;

	temp1.data[3][2] = .5;

	temp2.data[0][0] = w / 2.;
	temp2.data[1][1] = -h / 2.;

	temp2.data[0][3] = w / 2.;
	temp2.data[1][3] = h / 2.;

	return temp2 * temp1;

}

Vector4 Normalization(Vector4 v) {

	Vector4 temp = v;
	temp.data[0] /= v.data[3];
	temp.data[1] /= v.data[3];
	temp.data[2] /= v.data[3];

	return temp;

}

void GUIMyFrame::Repaint() {

	Matrix4 M1 = RotateZ(WxSB_RotateZ->GetValue());
	Matrix4 M2 = RotateY(WxSB_RotateY->GetValue());
	Matrix4 M3 = RotateX(WxSB_RotateX->GetValue());

	Matrix4 M = M3 * M2 * M1;

	wxSize panelSize = WxPanel->GetSize();
	Matrix4 MP = Projection(panelSize.GetWidth(), panelSize.GetHeight());

	wxClientDC  DC = WxPanel;
	wxBufferedDC bDC = &DC;

	bDC.Clear();

	for (unsigned int i = 0; i < data.size(); i++) {

		bDC.SetPen(wxPen(wxColour(data[i].color.R, data[i].color.G, data[i].color.B)));

		Vector4 v1;
		Vector4 v2;

		v1.Set(data[i].begin.x, data[i].begin.y, data[i].begin.z);
		v2.Set(data[i].end.x, data[i].end.y, data[i].end.z);

		v1 = Normalization(M * v1);
		v2 = Normalization(M * v2);

		if (v1.GetZ() <= -2. && v2.GetZ() <= -2.) continue;

		else if ((v1.GetZ() > -2. && v2.GetZ() <= -2.) || (v2.GetZ() > -2. && v1.GetZ() <= -2.)) {

			Vector4 temp1;
			Vector4 temp2;

			if (v2.GetZ() <= -2.) temp1 = v2;
			else temp1 = v1;

			if (v2.GetZ() <= -2.) temp1 = v1;
			else temp1 = v2;

			temp1.data[0] += (temp2.data[0] - temp1.data[0]) * abs((-2. - temp1.data[2]) / (temp2.data[2] - temp1.data[2]));
			temp1.data[1] += (temp2.data[1] - temp1.data[1]) * abs((-2. - temp1.data[2]) / (temp2.data[2] - temp1.data[2]));
			temp1.data[2] = -2.;

			v1 = Normalization(MP * temp1);
			v2 = Normalization(MP * temp2);

		}

		else {

			v1 = Normalization(MP * v1);
			v2 = Normalization(MP * v2);

		}

		bDC.DrawLine(v1.GetX(), v1.GetY(), v2.GetX(), v2.GetY());

	}

}