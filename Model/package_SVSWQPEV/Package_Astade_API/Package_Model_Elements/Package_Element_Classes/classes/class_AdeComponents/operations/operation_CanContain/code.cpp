bool retVal = false;

switch(aElement.GetType() & ITEM_TYPE_MASK)
{
	case ITEM_IS_COMPONENT:	
		retVal = true;
}

return retVal;