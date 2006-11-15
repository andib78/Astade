fprintf(specificationFile, "\t\t//! \\brief This is the enter function for state %s.\n", theState.GetName().c_str());
fprintf(specificationFile, "\t\tvoid Enter_%s(CMessage& message);\n\n", theState.GetName().c_str());

fprintf(implementationFile, "void %s::Enter_%s(CMessage& message)\n{\n", theStatechart.GetName().c_str(), theState.GetName().c_str());

wxString EntryAction = theState.GetEntryAction();
if (!EntryAction.empty())
{
	fprintf(implementationFile, "\t//Call Entry Action.\n");
	fprintf(implementationFile, "\t%s(message);\n", EntryAction.c_str());
}

fprintf(implementationFile, "\t//Set the new state.\n");
fprintf(implementationFile, "\tSETSTATE(%s);\n", theState.GetName().c_str());


AdeElementIterator it;
for (it = theState.begin(); it != theState.end(); ++it)
{
	AdeModelElement* aElement = it.CreateNewElement();
	if ((aElement->GetType() & ITEM_TYPE_MASK) == ITEM_IS_TRANSITION)
	{
		AdeTransition* aTransition = static_cast<AdeTransition*>(aElement);
		if (!aTransition->GetGuard().empty())
			CodeEventlessTransition(theStatechart, theState, *aTransition);
	}
	delete aElement;
}

for (it=theState.begin();it!=theState.end();++it)
{
	AdeModelElement* aElement = it.CreateNewElement();
	if ((aElement->GetType() & ITEM_TYPE_MASK) == ITEM_IS_TRANSITION)
	{
		AdeTransition* aTransition = static_cast<AdeTransition*>(aElement);
		if (aTransition->GetGuard().empty())
			CodeEventlessTransition(theStatechart, theState, *aTransition);
	}
	delete aElement;
}

fprintf(implementationFile, "\tnextState = 0; // We stay in this state\n");

fprintf(implementationFile, "}\n\n");