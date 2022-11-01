#include "Window.h"

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(418, 365))
{
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(1, 1), wxSize(400, 75));
	del = new wxButton(this, wxID_ANY, "Del", wxPoint(1, 75), wxSize(100, 50));
	sin = new wxButton(this, wxID_ANY, "Sin", wxPoint(101, 75), wxSize(100, 50));
	cos = new wxButton(this, wxID_ANY, "Cos", wxPoint(201, 75), wxSize(100, 50));
	tan = new wxButton(this, wxID_ANY, "Tan", wxPoint(301, 75), wxSize(100, 50));
	num0 = new wxButton(this, wxID_ANY, "0", wxPoint(101, 275), wxSize(100, 50));
	num1 = new wxButton(this, wxID_ANY, "1", wxPoint(1, 225), wxSize(100, 50));
	num2 = new wxButton(this, wxID_ANY, "2", wxPoint(101, 225), wxSize(100, 50));
	num3 = new wxButton(this, wxID_ANY, "3", wxPoint(201, 225), wxSize(100, 50));
	num4 = new wxButton(this, wxID_ANY, "4", wxPoint(1, 175), wxSize(100, 50));
	num5 = new wxButton(this, wxID_ANY, "5", wxPoint(101, 175), wxSize(100, 50));
	num6 = new wxButton(this, wxID_ANY, "6", wxPoint(201, 175), wxSize(100, 50));
	num7 = new wxButton(this, wxID_ANY, "7", wxPoint(1, 125), wxSize(100, 50));
	num8 = new wxButton(this, wxID_ANY, "8", wxPoint(101, 125), wxSize(100, 50));
	num9 = new wxButton(this, wxID_ANY, "9", wxPoint(201, 125), wxSize(100, 50));
	negNum = new wxButton(this, wxID_ANY, "+/-", wxPoint(1, 275), wxSize(100, 50));
	clear = new wxButton(this, wxID_ANY, "Clear", wxPoint(201,275), wxSize(100, 50));
	divide = new wxButton(this, wxID_ANY, "/", wxPoint(301, 225), wxSize(100, 25));
	multiply = new wxButton(this, wxID_ANY, "*", wxPoint(301, 200), wxSize(100, 25));
	minus = new wxButton(this, wxID_ANY, "-", wxPoint(301, 175), wxSize(100, 25));
	add = new wxButton(this, wxID_ANY, "+", wxPoint(301, 250), wxSize(100, 25));
	mod = new wxButton(this, wxID_ANY, "Mod", wxPoint(301, 125), wxSize(100, 50));
	equal = new wxButton(this, wxID_ANY, "=", wxPoint(301, 275), wxSize(100, 50));

}
