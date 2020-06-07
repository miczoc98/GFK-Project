#include "GUIMyFrame1.h"


GUIMyFrame1::GUIMyFrame1(wxWindow* parent)
	:
	MyFrame1(parent)
{
	m_generator = CurveGenerator(m_curve_segment_count, m_curve_segment_length);

	m_generator.set_A((float)m_slider_a->GetValue()/100);
	m_generator.set_B((float)m_slider_b->GetValue()/100);
	m_generator.set_C((float)m_slider_c->GetValue()/100);

	m_generator.set_phi((float)m_slider_phi->GetValue() * (M_PI /180));
	m_generator.set_psi((float)m_slider_psi->GetValue() * (M_PI / 180));
	m_generator.set_theta((float)m_slider_teta->GetValue() * (M_PI / 180));

	m_generator.set_m((float)m_slider_m->GetValue() / 10);
	m_generator.set_n((float)m_slider_n->GetValue() / 10);
	m_generator.set_k((float)m_slider_k->GetValue() / 10);

	m_data = m_generator.get_next();

	m_checkBoxLine->SetValue(true);

	Repaint();
}

void GUIMyFrame1::m_button_kart_click(wxCommandEvent& event)
{
	m_generator.set_cartesian(true);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_button_biegun_click(wxCommandEvent& event)
{
	m_generator.set_cartesian(false);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_a_scroll(wxScrollEvent& event)
{
	m_staticText_a->SetLabel(wxString::Format(wxT("%.2f"), (float)m_slider_a->GetValue()/100));
	m_generator.set_A((float)m_slider_a->GetValue()/100);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_b_scroll(wxScrollEvent& event)
{
	m_staticText_b->SetLabel(wxString::Format(wxT("%.2f"), (float)m_slider_b->GetValue() / 100));
	m_generator.set_B((float)m_slider_b->GetValue()/100);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_c_scroll(wxScrollEvent& event)
{
	m_staticText_c->SetLabel(wxString::Format(wxT("%.2f"), (float)m_slider_c->GetValue() / 100));
	m_generator.set_C((float)m_slider_c->GetValue()/100);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_phi_scroll(wxScrollEvent& event)
{
	m_staticText_phi->SetLabel(wxString::Format(wxT("%i"), m_slider_phi->GetValue()));
	m_generator.set_phi((float)m_slider_phi->GetValue() * (M_PI/180));
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_psi_scroll(wxScrollEvent& event)
{
	m_staticText_psi->SetLabel(wxString::Format(wxT("%i"), m_slider_psi->GetValue()));
	m_generator.set_psi((float)m_slider_psi->GetValue() * (M_PI / 180));
	m_data = m_generator.get_next();
	Repaint();
}
void GUIMyFrame1::m_slider_teta_scroll(wxScrollEvent& event)
{
	m_staticText_teta->SetLabel(wxString::Format(wxT("%i"), m_slider_teta->GetValue()));
	m_generator.set_theta((float)m_slider_teta->GetValue() * (M_PI / 180));
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_n_scroll(wxScrollEvent& event)
{
	m_staticText_n->SetLabel(wxString::Format(wxT("%.1f"), (float)m_slider_n->GetValue()/10));
	m_generator.set_n((float)m_slider_n->GetValue()/10);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_m_scroll(wxScrollEvent& event)
{
	m_staticText_m->SetLabel(wxString::Format(wxT("%.1f"), (float)m_slider_m->GetValue() / 10));
	m_generator.set_m((float)m_slider_m->GetValue()/10);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_k_scroll(wxScrollEvent& event)
{
	m_staticText_k->SetLabel(wxString::Format(wxT("%.1f"), (float)m_slider_k->GetValue() / 10));
	m_generator.set_k((float)m_slider_k->GetValue()/10);
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::m_slider_x_scroll(wxScrollEvent& event)
{
	m_staticText_x->SetLabel(wxString::Format(wxT("%i"), m_slider_x->GetValue()));
	m_rotation.data[0] = (m_slider_x->GetValue());
	Repaint();
}

void GUIMyFrame1::m_slider_y_scroll(wxScrollEvent& event)
{
	m_staticText_y->SetLabel(wxString::Format(wxT("%i"), m_slider_y->GetValue()));
	m_rotation.data[1] = (m_slider_y->GetValue());
	Repaint();
}

void GUIMyFrame1::m_slider_z_scroll(wxScrollEvent& event)
{
	m_staticText_z->SetLabel(wxString::Format(wxT("%i"), m_slider_z->GetValue()));
	m_rotation.data[2] = (m_slider_z->GetValue());
	Repaint();
}

void GUIMyFrame1::m_checkBoxDot_check(wxCommandEvent& event)
{
	m_checkBoxLine->SetValue(false);
	m_generator.set_animate(m_checkBoxAnimuj->IsChecked());
	Repaint();
}

void GUIMyFrame1::m_checkBoxLine_check(wxCommandEvent& event)
{
	m_checkBoxDot->SetValue(false);
	Repaint();
}

void GUIMyFrame1::m_checkBoxAnimuj_clicked(wxCommandEvent& event)
{
	m_generator.set_animate(m_checkBoxAnimuj->IsChecked());
	m_data = m_generator.get_next();
	Repaint();
}

void GUIMyFrame1::Repaint() 
{
	if (m_checkBoxAnimuj->IsChecked()) 
		m_timer1.Stop();

	Matrix4 M1 = RotateZ(m_rotation.GetX());
	Matrix4 M2 = RotateY(m_rotation.GetY());
	Matrix4 M3 = RotateX(m_rotation.GetZ());

	Matrix4 M = M3 * M2 * M1;

	wxSize panelSize = m_panel1->GetSize();
	Matrix4 MP = Projection(panelSize.GetWidth(), panelSize.GetHeight());

	wxClientDC  DC = m_panel1;
	wxBufferedDC bDC = &DC;

	bDC.Clear();
	
	for (unsigned int i = 0; i < m_data.size(); i++) {
	
		bDC.SetPen(wxPen(wxColour(m_data[i].color.R, m_data[i].color.G, m_data[i].color.B), 2));

		Vector4 v1;
		Vector4 v2;
		
		v1.Set(m_data[i].begin.x, m_data[i].begin.y, m_data[i].begin.z);
		v2.Set(m_data[i].end.x, m_data[i].end.y, m_data[i].end.z);

		v1 = Normalization(M * v1);
		v2 = Normalization(M * v2);

		if (v1.GetZ() <= -3. && v2.GetZ() <= -3.) continue;

		else if ((v1.GetZ() > -3. && v2.GetZ() <= -3.) || (v2.GetZ() > -3. && v1.GetZ() <= -3.))
		{

			Vector4 temp1;
			Vector4 temp2;

			if (v2.GetZ() <= -3.) temp1 = v2;
			else temp1 = v1;

			if (v2.GetZ() <= -3.) temp1 = v1;
			else temp1 = v2;

			temp1.data[0] += (temp2.data[0] - temp1.data[0]) * abs((-3. - temp1.data[2]) / (temp2.data[2] - temp1.data[2]));
			temp1.data[1] += (temp2.data[1] - temp1.data[1]) * abs((-3. - temp1.data[2]) / (temp2.data[2] - temp1.data[2]));
			temp1.data[2] = -3.;

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

			bDC.DrawCircle(v1.GetX(), v1.GetY(), 1);
			bDC.DrawCircle(v2.GetX(), v2.GetY(), 1);
		}
	}

	if (m_checkBoxAnimuj->IsChecked()) 
		m_timer1.Start();
		
}

void GUIMyFrame1::m_onTimer(wxTimerEvent& event)
{
	m_data = m_generator.get_next();
	Repaint();
}



	
