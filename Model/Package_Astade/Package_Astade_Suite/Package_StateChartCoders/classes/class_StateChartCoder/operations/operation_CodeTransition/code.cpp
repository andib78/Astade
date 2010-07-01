//~~ void CodeTransition(AdeState& theState, AdeTransition& theTransition) [StateChartCoder] ~~
wxString event = theTransition.GetTrigger();
if (event.empty())
	return;

impl << "\t// "
	<< theTransition.GetLabel().c_str()
	<< std::endl;

wxString guard = theTransition.GetGuard();
if (guard.empty())
	impl << "\tif (itsID == ID_"
		<< event.c_str()
		<< ")"
		<< std::endl;
else
	impl << "\tif (itsID == ID_"
		<< event.c_str()
		<< " && "
		<< theTransition.GetGuard().c_str()
		<< "(theEvent))"
		<< std::endl;
impl << "\t{" << std::endl;

std::list<wxString> aList = theTransition.GetActions();

wxString nextState = theTransition.GetDestination();

if (!theTransition.IsInternalTransition())
{
	if (!theState.GetExitAction().empty())
	{
		impl << "\t\t// exit action" << std::endl;
		impl << "\t\t"
			<< theState.GetExitAction().c_str()
			<< "(theEvent);"
			<< std::endl;
	}
	impl << "\t\t// next state" << std::endl;

	if (theTransition.IsSelfTransition())
		impl << "\t\tnextState = &"
			<< myAdeStatechart->GetName().c_str()
			<< "::Enter_"
			<< theState.GetName().c_str()
			<< ";"
			<< std::endl;
	else
		impl << "\t\tnextState = &"
			<< myAdeStatechart->GetName().c_str()
			<< "::Enter_"
			<< nextState.c_str()
			<< ";"
			<< std::endl;
}
else
	impl << "\t\t// internal Transition" << std::endl;

if (!aList.empty())
	impl << "\t\t// Actions" << std::endl;

for (std::list<wxString>::iterator iter = aList.begin(); iter != aList.end(); ++iter)
	impl << "\t\t"
		<< (*iter).c_str()
		<< "(theEvent);"
		<< std::endl;

impl << "\t\treturn true;" << std::endl;
impl << "\t}" << std::endl;
impl << "\telse" << std::endl;
