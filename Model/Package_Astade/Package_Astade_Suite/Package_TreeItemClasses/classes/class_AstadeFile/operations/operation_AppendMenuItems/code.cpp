//~~ void AppendMenuItems(wxMenu& aPopUp) [AstadeFile] ~~

aPopUp.Append(ID_EDIT, wxS("edit"), wxEmptyString, wxITEM_NORMAL);
aPopUp.AppendSeparator();
aPopUp.Append(ID_DELETE, wxS("delete"), wxEmptyString, wxITEM_NORMAL);
