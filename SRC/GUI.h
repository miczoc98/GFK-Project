#ifndef __GUI_H__
#define __GUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/frame.h>

class MyFrame : public wxFrame {

	protected:

		virtual void WxPanel_Repaint( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void Scrolls_Updated( wxScrollEvent& event ) { event.Skip(); }
		
	
	public:
		wxPanel* WxPanel;
		wxStaticText* m_staticText25;
		wxSlider* WxSB_RotateX;
		wxStaticText* WxST_RotateX;
		wxStaticText* m_staticText27;
		wxSlider* WxSB_RotateY;
		wxStaticText* WxST_RotateY;
		wxStaticText* m_staticText29;
		wxSlider* WxSB_RotateZ;
		wxStaticText* WxST_RotateZ;
		
		MyFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("PROJEKT"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,400 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrame();
	
};

#endif
