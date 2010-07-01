//~~ AstadeIcons() [AstadeIcons] ~~
Add("abstract", GetAbstractIcon());
Add("aggregation", GetAggregationIcon());
Add("Ansi C", GetCIcon());
Add("inaggregation", wxBitmap(GetAggregationIcon().ConvertToImage().Mirror(false)));
Add("association", GetAssociationIcon());
Add("inassociation", wxBitmap(GetAssociationIcon().ConvertToImage().Mirror(false)));
Add("attention", GetAttentionIcon());
Add("attribute", GetAttributeIcon());
Add("belonging", GetBelongingIcon());
Add("changed", GetChangedIcon());
Add("class", AstadeIcons::GetClassIcon());
Add("component", GetComponentIcon());
Add("composition", GetCompositionIcon());
Add("incomposition", wxBitmap(GetCompositionIcon().ConvertToImage().Mirror(false)));
Add("configuration", GetConfigurationIcon());
Add("const", GetConstIcon());
Add("constraint", GetConstraintIcon());
Add("constructor", GetConstructorIcon());
Add("containundocumented", GetContainUndocumentedIcon());
Add("C++", GetCppIcon());
Add("deprecated", GetDeprecatedIcon());
Add("destructor", GetDestructorIcon());
Add("doxygen", GetDoxygenIcon());
Add("file", GetFileIcon());
Add("folder", GetFolderIcon());
Add("generalisation", GetGeneralisationIcon());
Add("ingeneralisation", wxBitmap(GetGeneralisationIcon().ConvertToImage().Mirror(false)));
Add("h", GetHIcon());
Add("inline", GetInlineIcon());
Add("internaltransition", GetInternaltransitionIcon());
Add("isundocumented", GetIsUndocumentedIcon());
Add("Java", GetJavaIcon());
Add("lib", GetLibIcon());
Add("loading", GetLoadingIcon());
Add("make", GetMakeIcon());
Add("manual", GetManualIcon());
Add("model", GetModelIcon());
Add("operation", GetOperationIcon());
Add("package", GetPackageIcon());
Add("parameter", GetParameterIcon());
Add("Python", GetPythonIcon());
Add("PHP", GetPHPIcon());
Add("private", GetPrivateIcon());
Add("protected", GetProtectedIcon());
Add("public", GetPublicIcon());
Add("relation", GetRelationIcon());
Add("inrelation", wxBitmap(GetRelationIcon().ConvertToImage().Mirror(false)));
Add("selftransition", GetSelftransitionIcon());
Add("sequence", GetSequenceIcon());
Add("statechart", GetStatechartIcon());
Add("state", GetStateIcon());
Add("static", GetStaticIcon());
Add("traced", GetTracedIcon());
Add("transition", GetTransitionIcon());
Add("type", GetTypeIcon());
Add("usecasediagram", GetUsecasediagramIcon());
Add("virtual", GetVirtualIcon());
Add("website", GetWebsiteIcon());
Add("inputparameter", GetInputParameter());
Add("outputparameter", GetOutputParameter());
Add("inoutparameter", GetInOutParameter());
Add("found", GetFoundIcon());
Add("hasfound", GetHasFoundIcon());
Add("user/txt", GetTxtIcon());

