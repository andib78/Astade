wxArrayString names;

names.Add("folder");
names.Add("usecasediagram");

assert(myModelElement->IsUndocumented()==false);
assert(myModelElement->ContainsUndocumented()==false);
	
int index = AstadeIcons::Instance()->GetIconIndex(names);

assert(index>=0);

return index;