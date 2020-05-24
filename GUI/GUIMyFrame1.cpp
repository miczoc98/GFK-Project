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
