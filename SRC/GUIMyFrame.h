#ifndef __GUIMyFrame__
#define __GUIMyFrame__

#include "GUI.h"

#include <wx/filedlg.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>

class GUIMyFrame : public MyFrame{

	protected:

		void WxPanel_Repaint( wxUpdateUIEvent& event );
		void Scrolls_Updated( wxScrollEvent& event );

	public:

		GUIMyFrame( wxWindow* parent );

		void Repaint();

};

#endif