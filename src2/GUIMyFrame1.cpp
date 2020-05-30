#include "GUIMyFrame1.h"


GUIMyFrame1::GUIMyFrame1(wxWindow* parent)
	:
	MyFrame1(parent), generator(CurveGenerator(len, step))
{
	data = generator.get_next();
}

void GUIMyFrame1::m_button_kart_click(wxCommandEvent& event)
{
	generator.set_cartesian(true);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_button_biegun_click(wxCommandEvent& event)
{
	generator.set_cartesian(false);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_a_scroll(wxScrollEvent& event)
{

	m_staticText_a->SetLabel(wxString::Format(wxT("%i"), m_slider_a->GetValue()));
	generator.set_A((float)m_slider_a->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_b_scroll(wxScrollEvent& event)
{
	m_staticText_b->SetLabel(wxString::Format(wxT("%i"), m_slider_b->GetValue()));
	generator.set_B((float)m_slider_b->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_c_scroll(wxScrollEvent& event)
{
	m_staticText_c->SetLabel(wxString::Format(wxT("%i"), m_slider_c->GetValue()));
	generator.set_C((float)m_slider_c->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_phi_scroll(wxScrollEvent& event)
{
	m_staticText_phi->SetLabel(wxString::Format(wxT("%i"), m_slider_phi->GetValue()));
	generator.set_alpha((float)m_slider_phi->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_psi_scroll(wxScrollEvent& event)
{
	m_staticText_psi->SetLabel(wxString::Format(wxT("%i"), m_slider_psi->GetValue()));
	generator.set_beta((float)m_slider_psi->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}
void GUIMyFrame1::m_slider_teta_scroll(wxScrollEvent& event)
{
	m_staticText_teta->SetLabel(wxString::Format(wxT("%i"), m_slider_teta->GetValue()));
	generator.set_gamma((float)m_slider_teta->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_n_scroll(wxScrollEvent& event)
{
	m_staticText_n->SetLabel(wxString::Format(wxT("%i"), m_slider_n->GetValue()));
	generator.set_f((float)m_slider_n->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_m_scroll(wxScrollEvent& event)
{
	m_staticText_m->SetLabel(wxString::Format(wxT("%i"), m_slider_m->GetValue()));
	generator.set_g((float)m_slider_m->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_k_scroll(wxScrollEvent& event)
{
	m_staticText_k->SetLabel(wxString::Format(wxT("%i"), m_slider_k->GetValue()));
	generator.set_h((float)m_slider_k->GetValue() / 100);
	data = generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_x_scroll(wxScrollEvent& event)
{
	m_staticText_x->SetLabel(wxString::Format(wxT("%i"), m_slider_x->GetValue()));
	rotation.data[0] = (m_slider_x->GetValue());
	Repaint();
}

void GUIMyFrame1::m_slider_y_scroll(wxScrollEvent& event)
{
	m_staticText_y->SetLabel(wxString::Format(wxT("%i"), m_slider_y->GetValue()));
	rotation.data[1] = (m_slider_y->GetValue());
	Repaint();
}

void GUIMyFrame1::m_slider_z_scroll(wxScrollEvent& event)
{
	m_staticText_z->SetLabel(wxString::Format(wxT("%i"), m_slider_z->GetValue()));
	rotation.data[2] = (m_slider_z->GetValue());
	Repaint();
}

void GUIMyFrame1::m_checkBoxDot_check(wxCommandEvent& event)
{
	m_checkBoxLine->SetValue(false);
	generator.set_animate(m_checkBoxAnimuj->IsChecked());
	Repaint();
}

void GUIMyFrame1::m_checkBoxLine_check(wxCommandEvent& event)
{
	m_checkBoxDot->SetValue(false);
	Repaint();
}

void GUIMyFrame1::m_checkBoxAnimuj_clicked(wxCommandEvent& event)
{
	
	generator.set_animate(m_checkBoxAnimuj->IsChecked());
	data = generator.get_next();
	Repaint();
}



void GUIMyFrame1::Repaint() {
	if (m_checkBoxAnimuj->IsChecked()) 
		m_timer1.Stop();

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

		else if ((v1.GetZ() > -2. && v2.GetZ() <= -2.) || (v2.GetZ() > -2. && v1.GetZ() <= -2.))
		{

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

		else 
		{

			v1 = Normalization(MP * v1);
			v2 = Normalization(MP * v2);

		}

			if (m_checkBoxLine->IsChecked()) bDC.DrawLine(v1.GetX(), v1.GetY(), v2.GetX(), v2.GetY());
			else if (m_checkBoxDot->IsChecked()) {

				bDC.DrawPoint(v1.GetX(), v1.GetY());
				bDC.DrawPoint(v2.GetX(), v2.GetY());

			}
	}

	if (m_checkBoxAnimuj->IsChecked()) 
		m_timer1.Start();
		
}

void GUIMyFrame1::m_onTimer(wxTimerEvent& event)
{
	data = generator.get_next();
	Repaint();
}



	
