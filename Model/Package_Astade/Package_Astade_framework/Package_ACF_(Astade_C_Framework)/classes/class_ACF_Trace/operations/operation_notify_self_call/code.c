me->callType = ACF_SELFCALL;
me->callingID = ACF_Trace_runningID;
me->callingName = ACF_Trace_runningName;

ACF_Trace_runningID = objectID;
ACF_Trace_runningName = objectName;
 
ACF_traceTimestamp();
ACF_tracePtr(objectID);
ACF_trace(objectName);
ACF_trace(" ==> ");

ACF_tracePtr(objectID);
ACF_trace(objectName);

ACF_trace(" ");
ACF_trace(functionName); 
ACF_trace("()\n");
