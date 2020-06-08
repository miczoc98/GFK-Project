///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_button_kart = new wxButton( this, wxID_ANY, wxT("Cartesian"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_kart, 0, wxALL, 5 );

	m_button_biegun = new wxButton( this, wxID_ANY, wxT("Spherical"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_biegun, 0, wxALL, 5 );


	bSizer2->Add( bSizer4, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer(wxHORIZONTAL );

	m_staticTextA = new wxStaticText( this, wxID_ANY, wxT("A:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticTextA->Wrap( -1 );
	bSizer5->Add( m_staticTextA, 0, wxALL, 5 );

	m_slider_a = new wxSlider( this, wxID_ANY, 100, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_a->SetMaxSize( wxSize( 215,35 ) );

	bSizer5->Add( m_slider_a, 1, wxALL, 5 );

	m_staticText_a = new wxStaticText( this, wxID_ANY, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_a->Wrap(-1);

	bSizer5->Add( m_staticText_a, 0, wxALL, 5 );


	bSizer2->Add( bSizer5, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextB = new wxStaticText( this, wxID_ANY, wxT("B:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextB->Wrap( -1 );
	bSizer6->Add( m_staticTextB, 0, wxALL, 5 );

	m_slider_b = new wxSlider( this, wxID_ANY, 100, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_b->SetMaxSize( wxSize( 215,35 ) );

	bSizer6->Add( m_slider_b, 1, wxALL, 5 );

	m_staticText_b = new wxStaticText( this, wxID_ANY, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_b->Wrap( -1);

	bSizer6->Add( m_staticText_b, 0, wxALL, 5 );


	bSizer2->Add( bSizer6, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextC = new wxStaticText( this, wxID_ANY, wxT("C:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextC->Wrap( -1 );
	bSizer7->Add( m_staticTextC, 0, wxALL, 5 );

	m_slider_c = new wxSlider( this, wxID_ANY, 100, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_c->SetMaxSize( wxSize( 215,35 ) );

	bSizer7->Add( m_slider_c, 1, wxALL, 5 );

	m_staticText_c = new wxStaticText( this, wxID_ANY, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_c->Wrap( -1 );

	bSizer7->Add( m_staticText_c, 0, wxALL, 5 );


	bSizer2->Add( bSizer7, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("F:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 9, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Symbol") ) );

	bSizer8->Add( m_staticText6, 0, wxALL, 5 );

	m_slider_phi = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_phi->SetMaxSize( wxSize( 210,35 ) );

	bSizer8->Add( m_slider_phi, 1, wxALL, 5 );

	m_staticText_phi = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_phi->Wrap( -1 );
	m_staticText_phi->SetMinSize(wxSize(20, -1));

	bSizer8->Add( m_staticText_phi, 0, wxALL, 5 );


	bSizer2->Add( bSizer8, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 9, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Symbol") ) );

	bSizer9->Add( m_staticText7, 0, wxALL, 5 );

	m_slider_psi = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_psi->SetMaxSize( wxSize( 210,35 ) );

	bSizer9->Add( m_slider_psi, 1, wxALL, 5 );

	m_staticText_psi = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_psi->Wrap( -1 );
	m_staticText_psi->SetMinSize( wxSize( 20,-1 ) );

	bSizer9->Add( m_staticText_psi, 0, wxALL, 5 );


	bSizer2->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer151;
	bSizer151 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("q:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->SetFont( wxFont( 9, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Symbol") ) );

	bSizer151->Add( m_staticText10, 0, wxALL, 5 );

	m_slider_teta = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_teta->SetMaxSize( wxSize( 215,35 ) );

	bSizer151->Add( m_slider_teta, 1, wxALL, 5 );

	m_staticText_teta = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_teta->Wrap( -1 );
	m_staticText_teta->SetMinSize( wxSize( 20,-1 ) );

	bSizer151->Add( m_staticText_teta, 0, wxALL, 5 );


	bSizer2->Add( bSizer151, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("n:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer16->Add( m_staticText11, 0, wxALL, 5 );

	m_slider_n = new wxSlider( this, wxID_ANY, 10, 1, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_n->SetMaxSize( wxSize( 215,35 ) );

	bSizer16->Add( m_slider_n, 1, wxALL, 5 );

	m_staticText_n = new wxStaticText( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_n->Wrap( -1 );
	m_staticText_n->SetMinSize( wxSize( 25,-1 ) );

	bSizer16->Add( m_staticText_n, 0, wxALL, 5 );


	bSizer2->Add( bSizer16, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("m:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetMaxSize( wxSize( 215,35 ) );

	bSizer17->Add( m_staticText12, 0, wxALL, 5 );

	m_slider_m = new wxSlider( this, wxID_ANY, 10, 1, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_m->SetMaxSize( wxSize( 215,35 ) );

	bSizer17->Add( m_slider_m, 1, wxALL, 5 );

	m_staticText_m = new wxStaticText( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_m->Wrap( -1 );
	m_staticText_m->SetMinSize( wxSize( 25,-1 ) );

	bSizer17->Add( m_staticText_m, 0, wxALL, 5 );


	bSizer2->Add( bSizer17, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("k:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer18->Add( m_staticText13, 0, wxALL, 5 );

	m_slider_k = new wxSlider( this, wxID_ANY, 10, 1, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_k->SetMaxSize( wxSize( 215,35 ) );

	bSizer18->Add( m_slider_k, 1, wxALL, 5 );

	m_staticText_k = new wxStaticText( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_k->Wrap( -1 );
	m_staticText_k->SetMinSize( wxSize( 25,-1 ) );

	bSizer18->Add( m_staticText_k, 0, wxALL, 5 );


	bSizer2->Add( bSizer18, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_staticTextRotation = new wxStaticText( this, wxID_ANY, wxT("Rotation"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticTextRotation->Wrap( -1);
	m_staticTextRotation->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextRotation->SetMaxSize( wxSize( 215,35 ) );

	bSizer14->Add( m_staticTextRotation, 0, wxALIGN_CENTER|wxALL, 0 );


	bSizer2->Add( bSizer14, 0, wxALIGN_CENTER, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextX = new wxStaticText( this, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextX->Wrap( -1 );
	bSizer10->Add( m_staticTextX, 0, wxALL, 5 );

	m_slider_x = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_x->SetMaxSize( wxSize( 215,35 ) );

	bSizer10->Add( m_slider_x, 1, wxALL, 5 );

	m_staticText_x = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_x->Wrap( -1 );
	m_staticText_x->SetMinSize( wxSize( 20,-1 ) );

	bSizer10->Add( m_staticText_x, 0, wxALL, 5 );


	bSizer2->Add( bSizer10, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextY = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextY->Wrap( -1 );
	bSizer11->Add( m_staticTextY, 0, wxALL, 5 );

	m_slider_y = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_y->SetMaxSize( wxSize( 215,35 ) );

	bSizer11->Add( m_slider_y, 1, wxALL, 5 );

	m_staticText_y = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_y->Wrap( -1 );
	m_staticText_y->SetMinSize( wxSize( 20,-1 ) );

	bSizer11->Add( m_staticText_y, 0, wxALL, 5 );


	bSizer2->Add( bSizer11, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextZ = new wxStaticText( this, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextZ->Wrap( -1 );
	bSizer12->Add( m_staticTextZ, 0, wxALL, 5 );

	m_slider_z = new wxSlider( this, wxID_ANY, 0, 0, 360, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL );
	m_slider_z->SetMaxSize( wxSize( 215,35 ) );

	bSizer12->Add( m_slider_z, 1, wxALL, 5 );

	m_staticText_z = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_z->Wrap( -1 );
	m_staticText_z->SetMinSize( wxSize( 20,-1 ) );

	bSizer12->Add( m_staticText_z, 0, wxALL, 5 );


	bSizer2->Add( bSizer12, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBoxDot = new wxCheckBox( this, wxID_ANY, wxT("Dotted"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_checkBoxDot, 0, wxALL, 5 );

	m_checkBoxLine = new wxCheckBox( this, wxID_ANY, wxT("Line"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_checkBoxLine, 0, wxALL, 5 );

	m_checkBoxAnimuj = new wxCheckBox( this, wxID_ANY, wxT("Animation"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_checkBoxAnimuj, 0, wxALL, 5 );


	bSizer2->Add( bSizer15, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer3->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	m_timer1.SetOwner( this, wxID_ANY );
	m_timer1.Start( 20 );


	this->Centre( wxBOTH );

	// Connect Events
	m_button_kart->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_kart_click ), NULL, this );
	m_button_biegun->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_biegun_click ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_checkBoxDot->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxDot_check ), NULL, this );
	m_checkBoxLine->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxLine_check ), NULL, this );
	m_checkBoxAnimuj->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxAnimuj_clicked ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MyFrame1::m_onTimer ) );


}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_button_kart->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_kart_click ), NULL, this );
	m_button_biegun->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_biegun_click ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_a->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_a_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_b->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_b_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_c->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_c_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_phi->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_phi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_psi->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_psi_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_teta->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_teta_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_n->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_n_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_m->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_m_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_k->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_k_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_x->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_x_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_y->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_y_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_slider_z->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_z_scroll ), NULL, this );
	m_checkBoxDot->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxDot_check ), NULL, this );
	m_checkBoxLine->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxLine_check ), NULL, this );
	m_checkBoxAnimuj->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxAnimuj_clicked ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MyFrame1::m_onTimer ) );

}
