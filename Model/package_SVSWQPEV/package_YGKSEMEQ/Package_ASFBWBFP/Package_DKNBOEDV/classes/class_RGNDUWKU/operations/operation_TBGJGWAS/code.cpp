lastMouseEvent = event.GetPosition();
myLabel->Hide();

event.Skip();

if (!IsInArea(lastMouseEvent))
	return;

GrafNode* aGrafNode = GetSelectedNode();

if ((aGrafNode!=0) && (aGrafNode!=this))
	aGrafNode->ConnectionRequested(*this);

SetSelectedNode(NULL);
m_Parent->Refresh();