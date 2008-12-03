wxArrayString names;

names.Add("operation");
names.Add("constructor");

wxString visibility = static_cast<AdeDestructor*>(myModelElement)->GetVisibility();

if (visibility == "private")
	names.Add("private");

if (visibility == "protected")
	names.Add("protected");

if (static_cast<AdeDestructor*>(myModelElement)->IsVirtual())
	names.Add("virtual");

if (static_cast<AdeDestructor*>(myModelElement)->IsInline())
	names.Add("inline");

if(myModelElement->IsUndocumented())
	names.Add("isundocumented");
else if(myModelElement->ContainsUndocumented())
	names.Add("containundocumented");
	
int index = AstadeIcons::Instance()->GetIconIndex(names);

assert(index>=0);

return index;
