glNode* toNode = getMouseOverNode();

if ((toNode == NULL) || (toNode == this) || (dynamic_cast<glState*>(toNode) == NULL))
    return;

if (getMouseOverNode())
	new glTransition(myParent, *this, *toNode);
