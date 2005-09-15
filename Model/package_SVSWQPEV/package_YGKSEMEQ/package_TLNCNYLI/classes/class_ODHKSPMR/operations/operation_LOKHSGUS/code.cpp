wxTreeItemId aID = myTree->GetSelection();
wxFileName parentPath = myTree->GetItem(aID)->GetFileName();

if (myTree->IsExpanded(aID))
	myTree->Collapse(aID);

AdeComponents::CreateNewElement(parentPath);
myTree->UpdateItem(aID);
myTree->Expand(aID);
myTree->SortChildren(aID);