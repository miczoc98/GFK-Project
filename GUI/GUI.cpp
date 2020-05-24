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

	m_button_kart = new wxButton( this, wxID_ANY, wxT("Kartezjanskie"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_kart, 0, wxALL, 5 );

	m_button_biegun = new wxButton( this, wxID_ANY, wxT("Biegunowe"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_biegun, 0, wxALL, 5 );


	bSizer2->Add( bSizer4, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextA = new wxStaticText( this, wxID_ANY, wxT("A:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextA->Wrap( -1 );
	bSizer5->Add( m_staticTextA, 0, wxALL, 5 );

	m_slider_a = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_a->SetMaxSize( wxSize( 215,35 ) );

	bSizer5->Add( m_slider_a, 1, wxALL, 5 );


	bSizer2->Add( bSizer5, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextB = new wxStaticText( this, wxID_ANY, wxT("B:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextB->Wrap( -1 );
	bSizer6->Add( m_staticTextB, 0, wxALL, 5 );

	m_slider_b = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_b->SetMaxSize( wxSize( 215,35 ) );

	bSizer6->Add( m_slider_b, 1, wxALL, 5 );


	bSizer2->Add( bSizer6, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextC = new wxStaticText( this, wxID_ANY, wxT("C:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextC->Wrap( -1 );
	bSizer7->Add( m_staticTextC, 0, wxALL, 5 );

	m_slider_c = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_c->SetMaxSize( wxSize( 215,35 ) );

	bSizer7->Add( m_slider_c, 1, wxALL, 5 );


	bSizer2->Add( bSizer7, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("F:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 9, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Symbol") ) );

	bSizer8->Add( m_staticText6, 0, wxALL, 5 );

	m_slider_phi = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_phi->SetMaxSize( wxSize( 215,35 ) );

	bSizer8->Add( m_slider_phi, 1, wxALL, 5 );


	bSizer2->Add( bSizer8, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 9, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Symbol") ) );

	bSizer9->Add( m_staticText7, 0, wxALL, 5 );

	m_slider_psi = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_psi->SetMaxSize( wxSize( 215,35 ) );

	bSizer9->Add( m_slider_psi, 1, wxALL, 5 );


	bSizer2->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_staticTextRotation = new wxStaticText( this, wxID_ANY, wxT("Rotation"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticTextRotation->Wrap( -1 );
	m_staticTextRotation->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextRotation->SetMaxSize( wxSize( 215,35 ) );

	bSizer14->Add( m_staticTextRotation, 0, wxALIGN_CENTER|wxALL, 0 );


	bSizer2->Add( bSizer14, 0, wxALIGN_CENTER, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextX = new wxStaticText( this, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextX->Wrap( -1 );
	bSizer10->Add( m_staticTextX, 0, wxALL, 5 );

	m_slider_x = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_x->SetMaxSize( wxSize( 215,35 ) );

	bSizer10->Add( m_slider_x, 1, wxALL, 5 );


	bSizer2->Add( bSizer10, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextY = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextY->Wrap( -1 );
	bSizer11->Add( m_staticTextY, 0, wxALL, 5 );

	m_slider_y = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_y->SetMaxSize( wxSize( 215,35 ) );

	bSizer11->Add( m_slider_y, 1, wxALL, 5 );


	bSizer2->Add( bSizer11, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextZ = new wxStaticText( this, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextZ->Wrap( -1 );
	bSizer12->Add( m_staticTextZ, 0, wxALL, 5 );

	m_slider_z = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_BOTH|wxSL_HORIZONTAL|wxSL_VALUE_LABEL );
	m_slider_z->SetMaxSize( wxSize( 215,35 ) );

	bSizer12->Add( m_slider_z, 1, wxALL, 5 );


	bSizer2->Add( bSizer12, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	m_checkBoxDot = new wxCheckBox( this, wxID_ANY, wxT("Dotted"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_checkBoxDot, 0, wxALL, 5 );

	m_checkBoxLine = new wxCheckBox( this, wxID_ANY, wxT("Line"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_checkBoxLine, 0, wxALL, 5 );

	m_checkBoxAnimuj = new wxCheckBox( this, wxID_ANY, wxT("Animacja"), wxDefaultPosition, wxDefaultSize, 0 );
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

	this->Centre( wxBOTH );

	// Connect Events
	m_button_kart->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_kart_click ), NULL, this );
	m_button_biegun->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_biegun_click ), NULL, this );
	m_checkBoxDot->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxDot_check ), NULL, this );
	m_checkBoxLine->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxLine_check ), NULL, this );
	m_checkBoxAnimuj->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxAnimuj_clicked ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_button_kart->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_kart_click ), NULL, this );
	m_button_biegun->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_biegun_click ), NULL, this );
	m_checkBoxDot->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxDot_check ), NULL, this );
	m_checkBoxLine->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxLine_check ), NULL, this );
	m_checkBoxAnimuj->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBoxAnimuj_clicked ), NULL, this );

}
