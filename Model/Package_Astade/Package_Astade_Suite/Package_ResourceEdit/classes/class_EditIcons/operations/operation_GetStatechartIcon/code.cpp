#include "class_png.h"
#include "statechart_png.h"

wxMemoryInputStream classstream(class_png, sizeof class_png);
wxImage classimage(classstream, wxBITMAP_TYPE_PNG);

wxMemoryInputStream statechartstream(statechart_png, sizeof statechart_png);
wxImage statechartimage(statechartstream, wxBITMAP_TYPE_PNG);

wxBitmap aBitmap(imageWidth,imageHeight);
wxMemoryDC dc;
dc.SelectObject(aBitmap);
dc.SetBrush(*wxWHITE_BRUSH);

dc.Clear();
dc.DrawBitmap(Scale(classimage),leftBorder,upperBorder,true);
dc.DrawBitmap(Scale(statechartimage),leftBorder,upperBorder,true);

return aBitmap;