#include "CalculatorUI.h"
wxBEGIN_EVENT_TABLE(CalculatorUI, wxFrame)
EVT_BUTTON(10000,CalculatorUI::onButtonPress)//1
EVT_BUTTON(10001, CalculatorUI::onButtonPress)//2
EVT_BUTTON(10002, CalculatorUI::onButtonPress)//3
EVT_BUTTON(10003, CalculatorUI::onButtonPress)//4
EVT_BUTTON(10004, CalculatorUI::onButtonPress)//5
EVT_BUTTON(10005, CalculatorUI::onButtonPress)//6
EVT_BUTTON(10006, CalculatorUI::onButtonPress)//7
EVT_BUTTON(10007, CalculatorUI::onButtonPress)//8
EVT_BUTTON(10008, CalculatorUI::onButtonPress)//9
EVT_BUTTON(10009, CalculatorUI::onButtonPress)//0
EVT_BUTTON(11000, CalculatorUI::onButtonPress)//+
EVT_BUTTON(11001, CalculatorUI::onButtonPress)//-
EVT_BUTTON(11002, CalculatorUI::onButtonPress)//*
EVT_BUTTON(11003, CalculatorUI::onButtonPress)//division
EVT_BUTTON(11004, CalculatorUI::onButtonPress)//%
EVT_BUTTON(12000, CalculatorUI::onButtonPress)//sin
EVT_BUTTON(12001, CalculatorUI::onButtonPress)//cos
EVT_BUTTON(12002, CalculatorUI::onButtonPress)//tan
EVT_BUTTON(13000, CalculatorUI::onButtonPress)//equals
EVT_BUTTON(13001, CalculatorUI::onButtonPress)//clear
EVT_BUTTON(13002, CalculatorUI::onButtonPress)//back
EVT_BUTTON(13003, CalculatorUI::onButtonPress)//decimal
EVT_BUTTON(13004, CalculatorUI::onButtonPress)//positive/negitive
wxEND_EVENT_TABLE()
CalculatorUI::CalculatorUI() : wxFrame(nullptr, wxID_ANY, "Calculato", wxDefaultPosition, wxSize(300, 400))
{
	//Main sizer
	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

	//Screen
	m_screen = new wxTextCtrl(this, wxID_ANY, "", wxDefaultPosition, wxSize(300, 50), wxTE_RIGHT);
	mainSizer->Add(m_screen, 0, wxEXPAND | wxALL, 10);
	
	//Grid
	wxGridSizer* grid = new wxGridSizer(5, 5, 5, 5);

	//First row
	grid->Add(new wxButton(this, 10006, "7"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10007, "8"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10008, "9"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 11000, "+"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 11001, "-"), 0, wxEXPAND);
	//Second Row
	grid->Add(new wxButton(this, 10003, "4"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10004, "5"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10005, "6"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 11002, "*"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 11003, "/"), 0, wxEXPAND);
	//Third Row
	grid->Add(new wxButton(this, 10000, "1"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10001, "2"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10002, "3"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 11004, "%"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 13002, "Back"), 0, wxEXPAND);
	//Forth Row
	grid->Add(new wxButton(this, 13004, "+/-"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 10009, "0"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 13003, "Dec"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 13000, "="), 0, wxEXPAND);
	grid->Add(new wxButton(this, 13001, "Clear"), 0, wxEXPAND);
	
	//Fith row
	grid->Add(new wxButton(this, 12000, "sin"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 12001, "cos"), 0, wxEXPAND);
	grid->Add(new wxButton(this, 12002, "tan"), 0, wxEXPAND);


	mainSizer->Add(grid, 1, wxEXPAND | wxALL, 10);
	SetSizer(mainSizer);

}

void CalculatorUI::onButtonPress(wxCommandEvent& event)
{
	int id = event.GetId();
	if (id == 10009) {
		m_screen->AppendText("0");
	}
	else if (id > 10001 && id < 10009) {
		m_screen->AppendText(std::to_string(id - 9999));
	}
	else if (id == 11000) {
		m_screen->AppendText("+");
	}
	else if (id == 11001) {
		m_screen->AppendText("-");
	}
	else if (id == 11002) {
		m_screen->AppendText("*");
	}
	else if (id == 11003) {
		m_screen->AppendText("/");
	}
	else if (id == 11004) {
		m_screen->AppendText("%");
	}
	else if (id == 12000) {
		m_screen->AppendText("sin");
	}
	else if (id == 12001) {
		m_screen->AppendText("cos");
	}
	else if (id == 12002) {
		m_screen->AppendText("tan");
	}
	else if (id == 13002) {
		m_screen->AppendText(".");
	}
	else {
		return;
	}

}
