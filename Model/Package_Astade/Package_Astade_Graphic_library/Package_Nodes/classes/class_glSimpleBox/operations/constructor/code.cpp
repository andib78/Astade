//~~ glSimpleBox(glGraphicPanel* parent, long x, long y) [glSimpleBox] ~~

Refresh();
AddMenuSeparator();
AddMenuFunction(wxS("edge"), wxCommandEventHandler(glSimpleBox::OnCreateEdge));
mySelfEdge = new glSelfEdge(*parent, *this, glVector(x + 30, y + 30), 20);
