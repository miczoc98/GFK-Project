#include "GUIMyFrame1.h"
#include "vecmat.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
	curve = LissajousCurve();
	data = curve.get_curve(len, step, m_uklad_kart);
}

Vector4 rotation;


void GUIMyFrame1::m_button_kart_click( wxCommandEvent& event )
{
	m_uklad_kart = true;
	data = curve.get_curve(len, step, true);
	Repaint();
}

void GUIMyFrame1::m_button_biegun_click( wxCommandEvent& event )
{
	m_uklad_kart = false;
	data = curve.get_curve(len, step, false);
	Repaint();
}

void GUIMyFrame1::m_slider_a_scroll(wxScrollEvent& event)
{
	curve.set_A((float)m_slider_a->GetValue()/100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_b_scroll(wxScrollEvent& event)
{
	curve.set_B((float)m_slider_b->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_c_scroll(wxScrollEvent& event)
{
	curve.set_C((float)m_slider_c->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_phi_scroll(wxScrollEvent& event)
{
	curve.set_alpha((float)m_slider_phi->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_psi_scroll(wxScrollEvent& event)
{
	curve.set_beta((float)m_slider_psi->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}
void GUIMyFrame1::m_slider_teta_scroll(wxScrollEvent& event)
{
	curve.set_gamma((float)m_slider_teta->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_n_scroll(wxScrollEvent& event)
{
	curve.set_f((float)m_slider_n->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_m_scroll(wxScrollEvent& event)
{
	curve.set_g((float)m_slider_m->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_k_scroll(wxScrollEvent& event)
{
	curve.set_h((float)m_slider_k->GetValue() / 100);
	data = curve.get_curve(len, step, m_uklad_kart);
	Repaint();
}

void GUIMyFrame1::m_slider_x_scroll(wxScrollEvent& event)
{
	rotation.data[0] = (m_slider_x->GetValue());
	Repaint();
}

void GUIMyFrame1::m_slider_y_scroll(wxScrollEvent& event)
{
	rotation.data[1] = (m_slider_y->GetValue());
	Repaint();
}

void GUIMyFrame1::m_slider_z_scroll(wxScrollEvent& event)
{
	rotation.data[2] = (m_slider_z->GetValue());
	Repaint();
}

void GUIMyFrame1::m_checkBoxDot_check( wxCommandEvent& event )
{
	m_checkBoxLine->SetValue(false);
	Repaint();
}

void GUIMyFrame1::m_checkBoxLine_check( wxCommandEvent& event )
{
	m_checkBoxDot->SetValue(false);
	Repaint();
}

void GUIMyFrame1::m_checkBoxAnimuj_clicked( wxCommandEvent& event )
{
	
}

Matrix4 RotateX(float x) {

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

void GUIMyFrame1::Repaint() {

	Matrix4 M1 = RotateZ(rotation.GetX());
	Matrix4 M2 = RotateY(rotation.GetY());
	Matrix4 M3 = RotateX(rotation.GetZ());

	Matrix4 M = M3 * M2 * M1;

	wxSize panelSize = m_panel1->GetSize();
	Matrix4 MP = Projection(panelSize.GetWidth(), panelSize.GetHeight());

	wxClientDC  DC = m_panel1;
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

		if (m_checkBoxLine->IsChecked()) bDC.DrawLine(v1.GetX(), v1.GetY(), v2.GetX(), v2.GetY());
		else if (m_checkBoxDot->IsChecked()) {

			bDC.DrawPoint(v1.GetX(), v1.GetY());
			bDC.DrawPoint(v2.GetX(), v2.GetY());

		}

	}


}