//~~ int GetIconIndex(const wxArrayString& iconNames) [AstadeIcons] ~~

int index = -1;
wxString name;

if (iconNames.GetCount() > 0)
{
    name = iconNames[0];
    for(size_t i = 1; i < iconNames.GetCount(); i++)
    {
        name += wxS("_") + iconNames[i];
    }

    iconNameMap_t::iterator iter = myIconNameMap.find(name);

    if (iter == myIconNameMap.end() && iconNames.GetCount() > 1)
    {
        wxBitmap aBitmap(GetEmptyIcon());
        wxMemoryDC dc;
        dc.SelectObject(aBitmap);

        for (size_t i = 0; i < iconNames.GetCount(); i++)
        {
            myIconAssocMap[iconNames[i]].Add(name);

            int n = GetIconIndex(wxArrayString(1, &iconNames[i]));
            if (n >= 0)
                dc.DrawBitmap(GetOriginalBitmap(n), 0, 0, true);
        }
        index = Add(name, aBitmap.ConvertToImage());

    }
    else if (iter != myIconNameMap.end())
    {
        index = iter->second;
    }
#ifndef NDEBUG
    else
    {
        fprintf(stderr, "No icon '%s' registered!\n", (const char*)name.utf8_str());
        fflush(stderr);
    }
#endif
}

return index;
