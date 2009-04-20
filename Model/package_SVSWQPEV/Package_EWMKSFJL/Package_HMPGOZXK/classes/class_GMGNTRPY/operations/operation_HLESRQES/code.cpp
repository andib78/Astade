int minx, maxx, miny, maxy;

if (absDrawnStartPoint.xCoord() < absDrawnEndPoint.xCoord())
{
	minx = absDrawnStartPoint.xCoord();
	maxx = absDrawnEndPoint.xCoord();
}
else
{
	maxx = absDrawnStartPoint.xCoord();
	minx = absDrawnEndPoint.xCoord();
}

if (absDrawnStartPoint.yCoord() < absDrawnEndPoint.yCoord())
{
	miny = absDrawnStartPoint.yCoord();
	maxy = absDrawnEndPoint.yCoord();
}
else
{
	maxy = absDrawnStartPoint.yCoord();
	miny = absDrawnEndPoint.yCoord();
}

RefreshRect(wxRect(minx-1, miny-1, (maxx-minx) + 2, (maxy-miny) + 2));

