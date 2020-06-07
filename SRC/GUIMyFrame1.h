#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <thread> 

#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/slider.h>
#include <wx/log.h >

#include "CurveGenerator.h"
#include "Matrix.h"
/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void m_button_kart_click( wxCommandEvent& event );
		void m_button_biegun_click( wxCommandEvent& event );
		void m_slider_a_scroll( wxScrollEvent& event );
		void m_slider_b_scroll( wxScrollEvent& event );
		void m_slider_c_scroll( wxScrollEvent& event );
		void m_slider_phi_scroll( wxScrollEvent& event );
		void m_slider_psi_scroll( wxScrollEvent& event );
		void m_slider_teta_scroll( wxScrollEvent& event );
		void m_slider_n_scroll( wxScrollEvent& event );
		void m_slider_m_scroll( wxScrollEvent& event );
		void m_slider_k_scroll( wxScrollEvent& event );
		void m_slider_x_scroll( wxScrollEvent& event );
		void m_slider_y_scroll( wxScrollEvent& event );
		void m_slider_z_scroll( wxScrollEvent& event );
		void m_checkBoxDot_check( wxCommandEvent& event );
		void m_checkBoxLine_check( wxCommandEvent& event );
		void m_checkBoxAnimuj_clicked( wxCommandEvent& event );
		void m_onTimer(wxTimerEvent& event);
		//Testing
		void rewrite(wxSizeEvent& event);

	public:
		/** Constructor */
		GUIMyFrame1( wxWindow* parent );
	//// end generated class members
	private:

		double m_curve_segment_count = 1000;
		double m_curve_segment_length = 0.02;
		bool m_cartesian = true;

		CurveGenerator m_generator;
		std::deque<Segment> m_data;
		
		Vector4 m_rotation;

		void Repaint();	
};


#endif // __GUIMyFrame1__
