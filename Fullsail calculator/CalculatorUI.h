#pragma once
#include "wx/wx.h"    
class CalculatorUI :
    public wxFrame
{
public:
//Constructor
    CalculatorUI();
    void onButtonPress(wxCommandEvent& event);

private:
    wxTextCtrl* m_screen;

    wxDECLARE_EVENT_TABLE(); 
};

