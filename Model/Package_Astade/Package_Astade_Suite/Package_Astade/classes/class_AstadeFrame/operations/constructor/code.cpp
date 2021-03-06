//~~ AstadeFrame() [AstadeFrame] ~~

SetIcon(wxIcon(Astade_xpm));
aTimer.Start(100);

myDropTarget = new AstadeDropTarget(this);
SetDropTarget(myDropTarget);

srand(static_cast<unsigned>(time(0)));	// Flawfinder: Ignore

myTree =  new AstadeTree(this);
AstadeTreeItemBase::SetOurTree(*myTree);
AstadeTreeItemBase::search = &myAstadeSearch;

myMakeOutput = new AstadeMakeOutput(myTree);
myOmdDialog =  new AstadeOmdDialog(this);

wxConfigBase* theConfig = wxConfigBase::Get();

myTree->LoadSubnodes(myTree->GetRootItem());
myTree->Expand(myTree->GetRootItem());
myTree->LoadExpansion(myTree->GetRootItem());
theConfig->DeleteGroup(wxS("ExpandedNodes"));
theConfig->Flush();

theMakeProcess = NULL;

InitializeMenubar();
InitializeKeyboardShortCut();
SetMenuBar(myMenuBar);

#if wxCHECK_VERSION(2,9,1)
myStatusBar = CreateStatusBar(2, wxSTB_SIZEGRIP|wxSTB_ELLIPSIZE_START|wxSTB_SHOW_TIPS|wxFULL_REPAINT_ON_RESIZE);
#else
myStatusBar = CreateStatusBar(2);
#endif
int values[] = {80, -1};
myStatusBar->SetStatusWidths(2, values);
dynamic_cast<AstadeStatusBar*>(myStatusBar)->SetTree(myTree);

wxToolBar* myToolBar = CreateToolBar();
myToolBar->AddTool(ID_TOOL_GENERATE, wxS("Generate"), AstadeIcons::GetGenerateIcon(), wxS("generate all outdated classes"));
myToolBar->AddTool(ID_STOP_BUILD, wxS("Stop"), AstadeIcons::GetStopBuildIcon(), wxS("interrupts a running build process"));
myToolBar->EnableTool(ID_STOP_BUILD, false);
myToolBar->AddTool(ID_TOOL_BUILD, wxS("Build"), AstadeIcons::GetLaunchBuildIcon(), wxS("launch build process"));
myConfigList = new wxChoice(myToolBar, ID_TOOL_CONFIG, wxDefaultPosition, wxSize(160, -1));
myToolBar->AddControl(myConfigList);
myBuildTargetList = new wxChoice(myToolBar, ID_TOOL_BUILDTARGET);
myToolBar->AddControl(myBuildTargetList);
myToolBar->AddTool(ID_TOOL_RUN, wxS("Run"), AstadeIcons::GetRunIcon(), wxS("execute the target"));
myRunTargetList = new wxChoice(myToolBar, ID_TOOL_RUNTARGET);
myToolBar->AddControl(myRunTargetList);
myToolBar->AddTool(ID_TOOL_FASTRUN, wxS("FastRun"), AstadeIcons::GetFastrunIcon(), wxS("generate, build and execute the target"));
myToolBar->Realize();
UpdateToolbar();

int x, y, w, h;
theConfig->Read(wxS("Treeview/XPos"),  &x, -1);
theConfig->Read(wxS("Treeview/YPos"),  &y, -1);

theConfig->Read(wxS("Treeview/XSize"), &w, -1);
theConfig->Read(wxS("Treeview/YSize"), &h, -1);

SetSize(x, y, w, h);

theConfig->Read(wxS("MakeOutput/XPos"),  &x, -1);
theConfig->Read(wxS("MakeOutput/YPos"),  &y, -1);

theConfig->Read(wxS("MakeOutput/XSize"), &w, -1);
theConfig->Read(wxS("MakeOutput/YSize"), &h, -1);

myMakeOutput->SetSize(x, y, w, h);
