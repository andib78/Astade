wxString uniqueID(GUID());

if (useGUID)
	parentFolder.AppendDir(name + "_" + uniqueID);
else
	parentFolder.AppendDir(name);

parentFolder.SetFullName("ModelNode.ini");

if (!parentFolder.Mkdir(parentFolder.GetPath()))
	return parentFolder;

wxFileConfig theConfig(wxEmptyString, wxEmptyString, parentFolder.GetFullPath());

theConfig.Write("Astade/Name", name);
theConfig.Write("Astade/Type", elementType | ITEM_IS_FOLDER);

AdeGUIDCache::Instance()->AddEntry(parentFolder, uniqueID);
theConfig.Write("Astade/GUID", uniqueID);

theConfig.Flush();

AdeRevisionControlBase* theRevisionControl = AdeRevisionControlBase::GetRevisionControlObject();

if (theRevisionControl->IsAddSupported())
{
	wxFileName dirName(parentFolder);
	dirName.SetFullName(wxEmptyString);
	int ret = theRevisionControl->Add(dirName);
	ret = theRevisionControl->Add(parentFolder);
}

return parentFolder;