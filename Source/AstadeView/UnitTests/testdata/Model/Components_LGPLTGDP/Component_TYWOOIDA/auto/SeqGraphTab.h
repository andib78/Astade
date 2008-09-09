//******************************************************
//** Code generated by the Astade CppGenerator
//** Date:     2006-03-03 12:29:16 UTC
//** Filename: SeqGraphTab.h
//******************************************************

#ifndef __SEQGRAPHTAB_H
  #define __SEQGRAPHTAB_H

//****** specification prolog ******
//[/Users/stefan/Developer/Astade-UML/trace2uml/Model/Package_LEOIFVGO/classes/class_GQADNYHS/prolog.h]
#include <wx/scrolwin.h>
#include <wx/dcclient.h>
#include <list>
#include <math.h>
#include <wx/menu.h>
#include <wx/statusbr.h>

#define ARROWHEADSOLID 6000
#define ARROWHEADVEE   6001
#define ARROWHEADNONE  6002

#define ID_MNU_DELETE		6100
//[EOF]
//**********************************

// Relation includes:
#include "SeqDataBase.h"

class SeqGraphTab : public wxScrolledWindow
{
public:
	DECLARE_EVENT_TABLE()
public:
	wxStatusBar*	theStatusBar;
	SeqGraphTab(wxWindow* parent,SeqDataBase* theDataBase);
	void DrawOnDC(wxDC& dc);

protected:
	SeqDataBase*	dataBase;

private:
	std::vector<std::list<int> >	eventQueue;
	int	mouseOverClass;
	int	mouseOverEvent;
	std::vector<int>	thickness;
	void OnPaint(wxPaintEvent& event);
	void DrawArrow(wxDC& dc,int startX,int startY,int stopX,int stopY,int arrowHead,const wxString& label);
	int GetRightSide(int classIndex);
	void DrawLifeLine(wxDC& dc,int classIndex,int timeIndex,int theThickness);
	void OnMouseMove(wxMouseEvent& event);
	void DrawLostEvent(wxDC& dc,int eventNumber);
	void DrawEndExecution(wxDC& dc,int classIndex,int eventNumber);
	void OnRightDown(wxMouseEvent& event);
	void DeleteEvent(wxCommandEvent& event);
	void DrawFoundEvent(wxDC& dc,int eventNumber);
	void DrawEvent(wxDC& dc,int eventNumber);
	void DrawCross(wxDC& dc,int x,int y,const wxString& color);
	int GetLeftSide(int classIndex);
	void DrawStartExecution(wxDC& dc,int classIndex,int startY);
	void DrawClassBox(wxDC& dc,int eventNumber,int objectNumber);
	void LeaveWindow(wxMouseEvent& event);
};

#endif