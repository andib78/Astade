fprintf(specificationFile,"\t\t//! \\brief Call this function once, to initialize the state machine.\n");
fprintf(specificationFile,"\t\t//! Calling this function a second time will have no effect!\n");
fprintf(specificationFile,"\t\t//! This will call all initial actions and enter state \"%s\".\n",theStatechart.GetInitialState().c_str());
fprintf(specificationFile,"\t\t//! The actions are called with the event, passed to this function.\n");
fprintf(specificationFile,"\t\t//! \\param theEvent	The event, passed to the initial actions.\n");
fprintf(specificationFile,"\t\tvoid Initialize(wxEvent& theEvent);\n\n");


fprintf(implementationFile,"void ImpOf_%s::Initialize(wxEvent& theEvent)\n{\n",theStatechart.GetName().c_str());

std::set<wxString> aSet;

aSet = theStatechart.GetInitialActions();
fprintf(implementationFile,"\tif (theState != ID_noState)\n\t\treturn;\n\n");

fprintf(implementationFile,"\t// Calling the initial actions\n");

for (std::set<wxString>::iterator iter=aSet.begin();iter!=aSet.end();iter++)
	fprintf(implementationFile,"\tmyHandlers.%s(theEvent);\n",(*iter).c_str());

fprintf(implementationFile,"\t// Set the initial State function\n");
fprintf(implementationFile,"\tnextState = &ImpOf_%s::Enter_%s;\n",theStatechart.GetName().c_str(),theStatechart.GetInitialState().c_str());

fprintf(implementationFile,"\t// Call the state enter function\n");
fprintf(implementationFile,"\tEnterState(theEvent);\n");

fprintf(implementationFile,"}\n\n");