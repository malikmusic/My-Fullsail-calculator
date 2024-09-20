#pragma once
#include "wx/wx.h"
class CalculatorUI :
    public wxFrame
{ //Constructor
    CalculatorUI();

private:
    wxTextCtrl* m_screen;
};

