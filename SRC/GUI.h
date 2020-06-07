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
#include <wx/timer.h>
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
		wxStaticText* m_staticText_a;
		wxStaticText* m_staticTextB;
		wxSlider* m_slider_b;
		wxStaticText* m_staticText_b;
		wxStaticText* m_staticTextC;
		wxSlider* m_slider_c;
		wxStaticText* m_staticText_c;
		wxStaticText* m_staticText6;
		wxSlider* m_slider_phi;
		wxStaticText* m_staticText_phi;
		wxStaticText* m_staticText7;
		wxSlider* m_slider_psi;
		wxStaticText* m_staticText_psi;
		wxStaticText* m_staticText10;
		wxSlider* m_slider_teta;
		wxStaticText* m_staticText_teta;
		wxStaticText* m_staticText11;
		wxSlider* m_slider_n;
		wxStaticText* m_staticText_n;
		wxStaticText* m_staticText12;
		wxSlider* m_slider_m;
		wxStaticText* m_staticText_m;
		wxStaticText* m_staticText13;
		wxSlider* m_slider_k;
		wxStaticText* m_staticText_k;
		wxStaticText* m_staticTextRotation;
		wxStaticText* m_staticTextX;
		wxSlider* m_slider_x;
		wxStaticText* m_staticText_x;
		wxStaticText* m_staticTextY;
		wxSlider* m_slider_y;
		wxStaticText* m_staticText_y;
		wxStaticText* m_staticTextZ;
		wxSlider* m_slider_z;
		wxStaticText* m_staticText_z;
		wxCheckBox* m_checkBoxDot;
		wxCheckBox* m_checkBoxLine;
		wxCheckBox* m_checkBoxAnimuj;
		wxPanel* m_panel1;
		wxTimer m_timer1;

		// Virtual event handlers, overide them in your derived class
		virtual void m_button_kart_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_biegun_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_slider_a_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_b_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_c_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_phi_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_psi_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_teta_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_n_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_m_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_k_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_x_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_y_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_z_scroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_checkBoxDot_check( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxLine_check( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBoxAnimuj_clicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_onTimer( wxTimerEvent& event ) { event.Skip(); }

	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Krzywe Lissajous"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,800 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

