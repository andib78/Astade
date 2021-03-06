//~~ void Draw(wxDC& dc) [glSimpleOval] ~~

if (isMouseOver())
	dc.SetPen(*wxThePenList->FindOrCreatePen(wxTheColourDatabase->Find(wxS("RED")), 2, wxSOLID));
else
	dc.SetPen(*wxThePenList->FindOrCreatePen(wxTheColourDatabase->Find(wxS("DARK GREY")), 1, wxSOLID));

dc.SetBrush(*wxWHITE);

dc.DrawEllipse(absGetDrawPosition().xCoord() - my_XRadius,absGetDrawPosition().yCoord() - my_YRadius, 2 * my_XRadius, 2 * my_YRadius);
