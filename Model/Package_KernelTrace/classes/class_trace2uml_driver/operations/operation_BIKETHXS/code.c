//~~ void notify_function_call(char* objectName, char* functionName, void* objectID) [trace2uml_driver] ~~
trace2uml_driver_buffer[trace2uml_driver_nextWrite].type = FUNCTIONCALL;
trace2uml_driver_buffer[trace2uml_driver_nextWrite].calledFunction = functionName;
trace2uml_driver_buffer[trace2uml_driver_nextWrite].calledID = objectID;
trace2uml_driver_buffer[trace2uml_driver_nextWrite++].calledName = objectName;

trace2uml_driver_nextWrite &= 0xfff;
