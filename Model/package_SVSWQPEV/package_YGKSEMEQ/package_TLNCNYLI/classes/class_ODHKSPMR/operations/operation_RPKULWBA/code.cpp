wxTreeItemId aID = myTree->GetSelection();
wxTreeItemId parentID = myTree->GetItemParent(aID);

wxFileName component(myTree->GetItem(aID)->GetFileName());
component.MakeAbsolute();

wxFileName command(component.GetPath());

switch (event.GetId())
{
	case ID_RUN:
		command.Assign(component.GetPath(), myTree->GetItem(parentID)->GetLabel());
		break;

	default:
		command.Assign(component.GetPath());
}

wxShell("\"" + command.GetFullPath() + "\"");

// To restore Astade.ini that might be changed from the executed Application.
wxConfigBase* theConfig = wxConfigBase::Get();
theConfig->Flush();