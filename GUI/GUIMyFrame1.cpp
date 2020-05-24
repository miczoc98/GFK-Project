#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{

}

void GUIMyFrame1::m_button_kart_click( wxCommandEvent& event )
{
	m_uklad_kart = true;
}

void GUIMyFrame1::m_button_biegun_click( wxCommandEvent& event )
{
	m_uklad_kart = false;
}

void m_slider_a_scroll(wxScrollEvent& event)
{

}

void m_slider_b_scroll(wxScrollEvent& event)
{

}

void m_slider_c_scroll(wxScrollEvent& event)
{

}

void m_slider_phi_scroll(wxScrollEvent& event) 
{

}

void m_slider_psi_scroll(wxScrollEvent& event)
{

}
void m_slider_teta_scroll(wxScrollEvent& event)
{

}

void m_slider_n_scroll(wxScrollEvent& event) 
{

}

void m_slider_m_scroll(wxScrollEvent& event) 
{

}

void m_slider_k_scroll(wxScrollEvent& event)
{

}

void m_slider_x_scroll(wxScrollEvent& event)
{

}

void m_slider_y_scroll(wxScrollEvent& event)
{

}

void m_slider_z_scroll(wxScrollEvent& event)
{

}

void GUIMyFrame1::m_checkBoxDot_check( wxCommandEvent& event )
{
	m_checkBoxLine->SetValue(false);
}

void GUIMyFrame1::m_checkBoxLine_check( wxCommandEvent& event )
{
	m_checkBoxDot->SetValue(false);
}

void GUIMyFrame1::m_checkBoxAnimuj_clicked( wxCommandEvent& event )
{
	
}

void Repaint()
{

}
