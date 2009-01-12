// -*- C++ -*- generated by wxGlade 0.5 on Mon Jan 12 12:09:01 2009 from d:\Dokumente und Einstellungen\spitzer\Eigene Dateien\Astade\Model\components_WGNBOFKH\Component_CDFBZLFN\manual\dialogs.wxg

#include "glGeneratedFrame.h"


glGeneratedFrame::glGeneratedFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: glGeneratedFrame::glGeneratedFrame
    panel_1 = new wxPanel(this, wxID_ANY);
    sliderSizer_staticbox = new wxStaticBox(panel_1, -1, wxT("800 x 600 pixel"));
    myMenuBar = new wxMenuBar();
    SetMenuBar(myMenuBar);
    wxMenu* wxglade_tmp_menu_1 = new wxMenu();
    myMenuBar->Append(wxglade_tmp_menu_1, wxT("File"));
    wxMenu* wxglade_tmp_menu_2 = new wxMenu();
    myMenuBar->Append(wxglade_tmp_menu_2, wxT("graph size"));
    graphicPanel = new glGraphicPanel(this, ID_graphicPanel, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    const wxString speedBox_choices[] = {
        wxT("slow"),
        wxT("normal"),
        wxT("fast"),
        wxT("fastest")
    };
    speedBox = new wxRadioBox(panel_1, ID_SpeedBox, wxT("update speed"), wxDefaultPosition, wxDefaultSize, 4, speedBox_choices, 4, wxRA_SPECIFY_COLS);
    xPixelSlider = new wxSlider(panel_1, ID_xPixelSlider, 800, 240, 6400);
    yPixelSlider = new wxSlider(panel_1, ID_yPixelSlider, 600, 180, 4800);

    set_properties();
    do_layout();
    // end wxGlade
}


void glGeneratedFrame::set_properties()
{
    // begin wxGlade: glGeneratedFrame::set_properties
    SetSize(wxSize(610, 506));
    graphicPanel->SetScrollRate(10, 10);
    speedBox->SetSelection(1);
    // end wxGlade
}


void glGeneratedFrame::do_layout()
{
    // begin wxGlade: glGeneratedFrame::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_2 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* sliderSizer = new wxStaticBoxSizer(sliderSizer_staticbox, wxHORIZONTAL);
    sizer_1->Add(graphicPanel, 1, wxEXPAND, 0);
    sizer_2->Add(speedBox, 0, wxEXPAND, 0);
    sliderSizer->Add(xPixelSlider, 1, 0, 0);
    sliderSizer->Add(yPixelSlider, 1, 0, 0);
    sizer_2->Add(sliderSizer, 1, wxEXPAND, 0);
    panel_1->SetSizer(sizer_2);
    sizer_1->Add(panel_1, 0, wxEXPAND, 0);
    SetSizer(sizer_1);
    Layout();
    // end wxGlade
}

