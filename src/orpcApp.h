/*
 * orpcApp.h
 *
 *  Created on: 20 juli 2015
 *      Author: Johan
 */

#ifndef ORPCAPP_H_
#define ORPCAPP_H_

#include <wx/wx.h>
#include <wx/gdicmn.h>

class orpcApp : public wxApp
{
public:
    virtual bool OnInit();
    ~orpcApp() {};
};


class orpcFrame: public wxFrame
{
public:
	orpcFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    ~orpcFrame() {};
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
};

enum
{
    ID_Hello = 1
};


#endif /* ORPCAPP_H_ */
