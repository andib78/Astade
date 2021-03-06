// -*- C++ -*- generated by wxGlade 0.6.3 on Wed Mar 10 13:22:09 2010

#include "generatedSearchDialog.h"

// begin wxGlade: ::extracode

// end wxGlade


generatedSearchDialog::generatedSearchDialog(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: generatedSearchDialog::generatedSearchDialog
    sizer_12_staticbox = new wxStaticBox(this, -1, wxT("Looking for"));
    sizer_13_staticbox = new wxStaticBox(this, -1, wxT("Fields to search in"));
    sizer_6_staticbox = new wxStaticBox(this, -1, wxT("Options"));
    searchTextLabel = new wxStaticText(this, wxID_ANY, wxT("Text to find:"));
    const wxString *TextToFind_choices = NULL;
    TextToFind = new wxComboBox(this, ID_TextToFind, wxT(""), wxDefaultPosition, wxDefaultSize, 0, TextToFind_choices, wxCB_DROPDOWN);
    OptionCaseSensitive = new wxCheckBox(this, ID_OptionCaseSensitive, wxT("Case sensitive"));
    OptionWholeWordsOnly = new wxCheckBox(this, ID_OptionWholeWordsOnly, wxT("Whole words only"));
    OptionRegularExpression = new wxCheckBox(this, ID_OptionRegularExpression, wxT("Regular expression"));
    OptionActiveComponentOnly = new wxCheckBox(this, ID_OptionActiveComponentOnly, wxT("active component only"));
    LookingForComponent = new wxCheckBox(this, ID_LookingForComponent, wxT("Component"));
    LookingForUserCode = new wxCheckBox(this, ID_LookingForUserCode, wxT("User code"));
    LookingForClass = new wxCheckBox(this, ID_LookingForClass, wxT("Class"));
    LookingForAttribute = new wxCheckBox(this, ID_LookingForAttribute, wxT("Attribute or Relation"));
    LookingForOperation = new wxCheckBox(this, ID_LookingForOperation, wxT("Operation"));
    LookingForParameter = new wxCheckBox(this, ID_LookingForParameter, wxT("Parameter"));
    LookingForType = new wxCheckBox(this, ID_LookingForType, wxT("Type"));
    LookingForState = new wxCheckBox(this, ID_LookingForState, wxT("State"));
    placeholder = new wxStaticText(this, wxID_ANY, wxEmptyString);
    LookingForAll = new wxCheckBox(this, ID_LookingForAll, wxT("all of them"));
    FieldsToSearchName = new wxCheckBox(this, ID_FieldsToSearchName, wxT("Name"));
    FieldsToSearchType = new wxCheckBox(this, ID_FieldsToSearchType, wxT("Type"));
    FieldsToSearchDefault = new wxCheckBox(this, ID_FieldsToSearchDefault, wxT("Default"));
    FieldsToSearchUserCode = new wxCheckBox(this, ID_FieldsToSearchUserCode, wxT("User code"));
    FieldsToSearchDescription = new wxCheckBox(this, ID_FieldsToSearchDescription, wxT("Description"));
    FieldsToSearchAll = new wxCheckBox(this, ID_FieldsToSearchAll, wxT("all of them"));
    cancel = new wxButton(this, ID_Cancel, wxT("Cancel"));
    StartSearch = new wxButton(this, ID_StartSearch, wxT("start search"));

    set_properties();
    do_layout();
    // end wxGlade
}


void generatedSearchDialog::set_properties()
{
    // begin wxGlade: generatedSearchDialog::set_properties
    SetTitle(wxT("search"));
    TextToFind->SetFocus();
    OptionActiveComponentOnly->SetValue(1);
    LookingForComponent->Enable(false);
    LookingForUserCode->Enable(false);
    LookingForClass->Enable(false);
    LookingForAttribute->Enable(false);
    LookingForOperation->Enable(false);
    LookingForParameter->Enable(false);
    LookingForType->Enable(false);
    LookingForState->Enable(false);
    LookingForAll->SetValue(1);
    FieldsToSearchName->Enable(false);
    FieldsToSearchType->Enable(false);
    FieldsToSearchDefault->Enable(false);
    FieldsToSearchUserCode->Enable(false);
    FieldsToSearchDescription->Enable(false);
    FieldsToSearchAll->SetValue(1);
    // end wxGlade
}


void generatedSearchDialog::do_layout()
{
    // begin wxGlade: generatedSearchDialog::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_2 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_4 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_11 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_8 = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* sizer_13 = new wxStaticBoxSizer(sizer_13_staticbox, wxHORIZONTAL);
    wxBoxSizer* sizer_14 = new wxBoxSizer(wxHORIZONTAL);
    wxFlexGridSizer* grid_sizer_2 = new wxFlexGridSizer(4, 2, 5, 20);
    wxStaticBoxSizer* sizer_12 = new wxStaticBoxSizer(sizer_12_staticbox, wxHORIZONTAL);
    wxFlexGridSizer* grid_sizer_1 = new wxFlexGridSizer(5, 2, 5, 5);
    wxBoxSizer* sizer_5 = new wxBoxSizer(wxVERTICAL);
    wxStaticBoxSizer* sizer_6 = new wxStaticBoxSizer(sizer_6_staticbox, wxHORIZONTAL);
    wxBoxSizer* sizer_9 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_3 = new wxBoxSizer(wxHORIZONTAL);
    sizer_3->Add(searchTextLabel, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 5);
    sizer_3->Add(TextToFind, 1, wxEXPAND, 0);
    sizer_1->Add(sizer_3, 0, wxALL|wxEXPAND, 5);
    sizer_9->Add(OptionCaseSensitive, 0, wxALL, 5);
    sizer_9->Add(OptionWholeWordsOnly, 0, wxALL, 5);
    sizer_9->Add(OptionRegularExpression, 0, wxALL, 5);
    sizer_9->Add(OptionActiveComponentOnly, 0, wxALL, 5);
    sizer_6->Add(sizer_9, 0, wxEXPAND, 0);
    sizer_5->Add(sizer_6, 0, wxEXPAND, 0);
    sizer_4->Add(sizer_5, 0, wxEXPAND, 0);
    grid_sizer_1->Add(LookingForComponent, 0, 0, 0);
    grid_sizer_1->Add(LookingForUserCode, 0, 0, 0);
    grid_sizer_1->Add(LookingForClass, 0, 0, 0);
    grid_sizer_1->Add(LookingForAttribute, 0, 0, 0);
    grid_sizer_1->Add(LookingForOperation, 0, 0, 0);
    grid_sizer_1->Add(LookingForParameter, 0, 0, 0);
    grid_sizer_1->Add(LookingForType, 0, 0, 0);
    grid_sizer_1->Add(LookingForState, 0, 0, 0);
    grid_sizer_1->Add(placeholder, 0, 0, 0);
    grid_sizer_1->Add(LookingForAll, 0, 0, 0);
    sizer_12->Add(grid_sizer_1, 0, wxEXPAND, 0);
    sizer_11->Add(sizer_12, 0, wxEXPAND, 0);
    grid_sizer_2->Add(FieldsToSearchName, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchType, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchDefault, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchUserCode, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchDescription, 0, 0, 0);
    grid_sizer_2->Add(FieldsToSearchAll, 0, 0, 0);
    sizer_14->Add(grid_sizer_2, 0, wxEXPAND, 0);
    sizer_13->Add(sizer_14, 0, wxEXPAND, 0);
    sizer_11->Add(sizer_13, 0, wxTOP|wxEXPAND, 5);
    sizer_8->Add(cancel, 0, wxTOP, 5);
    sizer_8->Add(20, 20, 1, 0, 0);
    sizer_8->Add(StartSearch, 0, wxTOP|wxBOTTOM, 5);
    sizer_11->Add(sizer_8, 1, wxEXPAND, 0);
    sizer_4->Add(sizer_11, 0, wxLEFT|wxRIGHT|wxEXPAND, 5);
    sizer_2->Add(sizer_4, 0, wxEXPAND, 0);
    sizer_1->Add(sizer_2, 0, wxLEFT|wxEXPAND, 5);
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    Layout();
    // end wxGlade
}

