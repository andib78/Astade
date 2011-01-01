//~~ void CodePorts(const AdeClass* theClass) [CSDgenerator] ~~

AdePorts* thePorts = theClass->GetPorts();

if (thePorts)
{
	for(AdeElementIterator it = thePorts->begin(); it != thePorts->end(); ++it)
	{
		AdeModelElement* aElement = it.CreateNewElement();
		wxASSERT(aElement);
		AdePort* aPort = dynamic_cast<AdePort*>(aElement);
		wxASSERT_MSG(aPort, "the ports folder should only contain ports");
        
        std::cout << aPort->GetName() << "[shape=plaintext, label=\"" << aPort->GetName() << "\", fontname = arial, fontsize=8]" << std::endl;
        
        if (aPort->IsDelegate())
        {
            if (aPort->IsInput())
            {
                std::cout << aPort->GetName() << " -> " << aPort->GetDelegationObject() 
                            << "[fontname=arial, fontsize=8, arrowhead=boxvee, style=dotted, arrowtail=box, headlabel=\"" << aPort->GetDelegationPort() << "\"]" << std::endl;
            }
            else
            {
                std::cout << aPort->GetName() << " -> " << aPort->GetDelegationObject() 
                            << "[fontname=arial, fontsize=8, arrowhead=obox, style=dotted, arrowtail=oboxvee, headlabel=\"" << aPort->GetDelegationPort() << "\"]" << std::endl;
            }
        }
        else
        {
            if (aPort->IsInput())
            {
                std::cout << aPort->GetName() << " -> " << nodename << "[arrowhead=vee, arrowtail=box, lhead=\"cluster0\"]" << std::endl;
            }
            else
            {
                std::cout << aPort->GetName() << " -> " << nodename << "[arrowhead=none, arrowtail=oboxvee, lhead=\"cluster0\"]" << std::endl;
            }
        }
        
		delete(aElement);
	}
    delete thePorts;
}
