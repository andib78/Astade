wxBoxSizer* box = new wxStaticBoxSizer( new wxStaticBox(this, -1, wxString(wxS("Constraint:"))), wxHORIZONTAL );

ConstraintEditField = new wxTextCtrl(this, -1);
box->Add(ConstraintEditField,1);

topSizer->Add(box,0,wxEXPAND|wxALL,10);

ConstraintEditField->SetValue(wxConfigBase::Get()->Read(wxS("Astade/Constraint"), wxEmptyString));
