//~~ void CodeIsInStateFunction(AdeStatechart& theStatechart) [StateChartCoderCdSys] ~~

fprintf(specificationFile, "//! \\brief Call this function once, to get the actual state of the state machine.\n");
fprintf(specificationFile, "//! \\param sm	The statemachine.\n");
fprintf(specificationFile, "//! \\param state	The state to check, if we in there.\n");
fprintf(specificationFile, "extern\tBOOL                \t%s_sm_is_in_state (\n", (const char*)theStatechart.GetName().Lower().utf8_str());
fprintf(specificationFile, "      \t%s_SM_CTRL  \t*sm,\n", (const char*)theStatechart.GetName().Upper().utf8_str());
fprintf(specificationFile, "      \t%s_SM_STATE_ID \tstate);\n\n", (const char*)theStatechart.GetName().Upper().utf8_str());


fprintf(implementationFile, "extern\tBOOL                \t%s_sm_is_in_state (\n", (const char*)theStatechart.GetName().Lower().utf8_str());
fprintf(implementationFile, "      \t%s_SM_CTRL  \t*sm,\n", (const char*)theStatechart.GetName().Upper().utf8_str());
fprintf(implementationFile, "      \t%s_SM_STATE_ID \tstate)\n", (const char*)theStatechart.GetName().Upper().utf8_str());

fprintf(implementationFile, "{\n");
fprintf(implementationFile, "\treturn (sm->the_state == _the_states[state]);\n");
fprintf(implementationFile, "}\n\n");
