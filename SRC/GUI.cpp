#include "GUI.h"

MyFrame::MyFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,400 ), wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );
	
	WxPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	WxPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	
	bSizer1->Add( WxPanel, 1, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText25 = new wxStaticText( this, wxID_ANY, _("Obrót X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	fgSizer1->Add( m_staticText25, 0, wxALL, 5 );
	
	WxSB_RotateX = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_RotateX->SetMinSize( wxSize( 100,-1 ) );
	
	fgSizer1->Add( WxSB_RotateX, 0, wxALL, 5 );
	
	WxST_RotateX = new wxStaticText( this, wxID_ANY, _("0    "), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_RotateX->Wrap( -1 );
	fgSizer1->Add( WxST_RotateX, 0, wxALL, 5 );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, _("Obrót Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer1->Add( m_staticText27, 0, wxALL, 5 );
	
	WxSB_RotateY = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_RotateY->SetMinSize( wxSize( 100,-1 ) );
	
	fgSizer1->Add( WxSB_RotateY, 0, wxALL, 5 );
	
	WxST_RotateY = new wxStaticText( this, wxID_ANY, _("0    "), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_RotateY->Wrap( -1 );
	fgSizer1->Add( WxST_RotateY, 0, wxALL, 5 );
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, _("Obrót Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	fgSizer1->Add( m_staticText29, 0, wxALL, 5 );
	
	WxSB_RotateZ = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	WxSB_RotateZ->SetMinSize( wxSize( 100,-1 ) );
	
	fgSizer1->Add( WxSB_RotateZ, 0, wxALL, 5 );
	
	WxST_RotateZ = new wxStaticText( this, wxID_ANY, _("0    "), wxDefaultPosition, wxDefaultSize, 0 );
	WxST_RotateZ->Wrap( -1 );
	fgSizer1->Add( WxST_RotateZ, 0, wxALL, 5 );	
	
	bSizer2->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer2, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );

	WxPanel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame::WxPanel_Repaint ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );

}

MyFrame::~MyFrame()
{
	WxPanel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame::WxPanel_Repaint ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	WxSB_RotateZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame::Scrolls_Updated ), NULL, this );
	
}
