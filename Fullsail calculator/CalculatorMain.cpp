#include "CalculatorMain.h"

bool CalculatorMain::OnInit()
{
	CalculatorUI* frame = new CalculatorUI();
	frame->Show();
	return true;
}


wxIMPLEMENT_APP(CalculatorMain);
