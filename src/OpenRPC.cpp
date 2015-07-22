//============================================================================
// Name        : OpenRPC.cpp
// Author      : jj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "orpcApp.h"
#include <wx/event.h>

using namespace std;

int main() {
	wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
	    EVT_MENU(ID_Hello,   orpcFrame::OnHello)
	    EVT_MENU(wxID_EXIT,  orpcFrame::OnExit)
	    EVT_MENU(wxID_ABOUT, orpcFrame::OnAbout)
	wxEND_EVENT_TABLE()



	cout << "!!!Hello World!!!" << endl;
	return 0;
}
