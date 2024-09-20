#pragma once
#include "wx/wx.h"
class CalculatorUI :
    public wxFrame
{
public:
//Constructor
    CalculatorUI();

private:
    wxTextCtrl* m_screen;
};

