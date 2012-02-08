//~~ void CodeCommonEventFiles() [StateChartCoderBase] ~~

wxFileName aFilename = myFilename;
std::set<wxString> aSet = myAdeStatechart->GetTrigger();
aFilename.SetFullName(wxS("ACF_events.h"));

boost::interprocess::named_semaphore aSem(boost::interprocess::open_or_create_t(), (::wxGetUserId()+wxS("_ACF_events")).char_str(), 1);
aSem.wait();

wxTextFile aTextFile(aFilename.GetFullPath());
if (aTextFile.Exists())
{
	aTextFile.Open();

	for (wxString line = aTextFile.GetFirstLine(); !aTextFile.Eof(); line = aTextFile.GetNextLine())
	{
		char found[200];
		if (sscanf(line.char_str(),"extern const char* %s",found) == 1)
		{
			wxString aString(found, wxConvUTF8);
			aString.RemoveLast(); //semicolon
			aSet.insert(aString);
		}
	}
}

std::ofstream out;

out.open(aFilename.GetFullPath().char_str());
PrintHeader(out, aFilename.GetFullName());

for (std::set<wxString>::iterator iter = aSet.begin(); iter != aSet.end(); ++iter)
{
	out << "extern const char* "
		<< (*iter).c_str()
		<< ";"
		<< std::endl;
}
out << std::endl;
out.close();

aSet.erase(wxS("ACF_timeout"));
aFilename.SetExt(wxS("c"));
out.open(aFilename.GetFullPath().char_str());
PrintHeader(out, aFilename.GetFullName());

for (std::set<wxString>::iterator iter = aSet.begin(); iter != aSet.end(); ++iter)
{
	out << "const char* "
		<< (*iter).c_str()
		<< " = \""
		<< (*iter).c_str()
		<< "\";"
		<< std::endl;
}
out << std::endl;
out.close();

aSem.post();
