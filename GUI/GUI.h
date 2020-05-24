///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/checkbox.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxButton* m_button_kart;
		wxButton* m_button_biegun;
		wxStaticText* m_staticTextA;
		wxSlider* m_slider_a;
		wxStaticText* m_staticTextB;
		wxSlider* m_slider_b;
		wxStaticText* m_staticTextC;
		wxSlider* m_slider_c;
		wxStaticText* m_staticText6;
		wxSlider* m_slider_phi;
		wxStaticText* m_staticText7;
		wxSlider* m_slider_psi;
		wxStaticText* m_staticTextRotation;
		wxStaticText* m_staticTextX;
		wxSlider* m_slider_x;
		wxStaticText* m_staticTextY;
		wxSlider* m_slider_y;
		wxStaticText* m_staticTextZ;
		wxSlider* m_slider_z;
		wxCheckBox* m_checkBoxDot;
		wxCheckBox* m_checkBoxLine;
		wxCheckBox* m_checkBoxAnimuj;
		wxPanel* m_panel1;

		// Virtual event handlers, overide them in your derived class
		virtual void m_button_kart_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_biegun_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxDot_check( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxLine_check( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxAnimuj_clicked( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Krzywe Lissajous"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

