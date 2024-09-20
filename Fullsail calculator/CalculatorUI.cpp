#include "CalculatorUI.h"
CalculatorUI::CalculatorUI() : wxFrame(nullptr, wxID_ANY, "Calculato", wxDefaultPosition, wxSize(300, 400))
{
	//Main sizer
	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

	//Screen
	m_screen = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxSize(300, 50), wxTE_RIGHT);
	mainSizer->Add(m_screen, 0, wxEXPAND | wxALL, 10);
	
	//Grid
	wxGridSizer* grid = new wxGridSizer(5, 4, 5, 5);

	//Num Buttons
	grid->Add(new wxButton(this, 1000, "1"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1001, "2"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1002, "3"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1003, "4"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1004, "5"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1005, "6"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1006, "7"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1007, "8"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1008, "9"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1009, "0"), 0, wxEXPAND);
	
	//Math Operations
	grid->Add(new wxButton(this, 1100, "+"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1101, "-"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1102, "*"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1103, "/"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1104, "%"), 0, wxEXPAND);

	//Trig Operations
	grid->Add(new wxButton(this, 1200, "sin"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1201, "cos"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1202, "tan"), 0, wxEXPAND);

	//Other Functions
	grid->Add(new wxButton(this, 1300, "="), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1301, "Clear"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1302, "Back"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1303, "Dec"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 1304, "+/-"), 0, wxEXPAND);

	mainSizer->Add(grid, 1, wxEXPAND | wxALL, 10);
	SetSizer(mainSizer);

}
