#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
	EVT_BUTTON(10000, OnButtonClicked0)
	EVT_BUTTON(10001, OnButtonClicked1)
	EVT_BUTTON(10002, OnButtonClicked2)
	EVT_BUTTON(10003, OnButtonClicked3)
	EVT_BUTTON(10004, OnButtonClicked4)
	EVT_BUTTON(10005, OnButtonClicked5)
	EVT_BUTTON(10006, OnButtonClicked6)
	EVT_BUTTON(10007, OnButtonClicked7)
	EVT_BUTTON(10008, OnButtonClicked8)
	EVT_BUTTON(10009, OnButtonClicked9)
	EVT_BUTTON(10010, OnButtonClicked10)
	EVT_BUTTON(10011, OnButtonClicked11)
	EVT_BUTTON(10012, OnButtonClicked12)
	EVT_BUTTON(10013, OnButtonClicked13)
	EVT_BUTTON(10014, OnButtonClicked14)
	EVT_BUTTON(10015, OnButtonClicked15)
	EVT_BUTTON(10016, OnButtonClicked16)
	EVT_BUTTON(10017, OnButtonClicked17)
	EVT_BUTTON(10018, OnButtonClicked18)
	EVT_BUTTON(10019, OnButtonClicked19)
	EVT_BUTTON(10020, OnButtonClicked20)
	EVT_BUTTON(10021, OnButtonClicked21)
wxEND_EVENT_TABLE()

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(418, 365))
{
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(1, 1), wxSize(400, 75));
	num0 = new wxButton(this, 10000, "0", wxPoint(101, 275), wxSize(100, 50));
	num1 = new wxButton(this, 10001, "1", wxPoint(1, 225), wxSize(100, 50));
	num2 = new wxButton(this, 10002, "2", wxPoint(101, 225), wxSize(100, 50));
	num3 = new wxButton(this, 10003, "3", wxPoint(201, 225), wxSize(100, 50));
	num4 = new wxButton(this, 10004, "4", wxPoint(1, 175), wxSize(100, 50));
	num5 = new wxButton(this, 10005, "5", wxPoint(101, 175), wxSize(100, 50));
	num6 = new wxButton(this, 10006, "6", wxPoint(201, 175), wxSize(100, 50));
	num7 = new wxButton(this, 10007, "7", wxPoint(1, 125), wxSize(100, 50));
	num8 = new wxButton(this, 10008, "8", wxPoint(101, 125), wxSize(100, 50));
	num9 = new wxButton(this, 10009, "9", wxPoint(201, 125), wxSize(100, 50));
	del = new wxButton(this, 10010, "Del", wxPoint(1, 75), wxSize(100, 50));
	sin = new wxButton(this, 10011, "Sin", wxPoint(101, 75), wxSize(100, 50));
	cos = new wxButton(this, 10012, "Cos", wxPoint(201, 75), wxSize(100, 50));
	tan = new wxButton(this, 10013, "Tan", wxPoint(301, 75), wxSize(100, 50));
	negNum = new wxButton(this, 10014, "+/-", wxPoint(1, 275), wxSize(100, 50));
	clear = new wxButton(this, 10015, "Clear", wxPoint(201,275), wxSize(100, 50));
	divide = new wxButton(this, 10016, "/", wxPoint(301, 175), wxSize(100, 25));
	multiply = new wxButton(this, 10017, "*", wxPoint(301, 200), wxSize(100, 25));
	minus = new wxButton(this, 10018, "-", wxPoint(301, 225), wxSize(100, 25));
	add = new wxButton(this, 10019, "+", wxPoint(301, 250), wxSize(100, 25));
	mod = new wxButton(this, 10020, "Mod", wxPoint(301, 125), wxSize(100, 50));
	equal = new wxButton(this, 10021, "=", wxPoint(301, 275), wxSize(100, 50));

}
void Window::OnButtonClicked0(wxCommandEvent& evt)
{
	textBox->AppendText("0");
	evt.Skip();
}
void Window::OnButtonClicked1(wxCommandEvent& evt)
{
	textBox->AppendText("1");
	evt.Skip();
}
void Window::OnButtonClicked2(wxCommandEvent& evt)
{
	textBox->AppendText("2");
	evt.Skip();
}
void Window::OnButtonClicked3(wxCommandEvent& evt)
{
	textBox->AppendText("3");
	evt.Skip();
}
void Window::OnButtonClicked4(wxCommandEvent& evt)
{
	textBox->AppendText("4");
	evt.Skip();
}
void Window::OnButtonClicked5(wxCommandEvent& evt)
{
	textBox->AppendText("5");
	evt.Skip();
}
void Window::OnButtonClicked6(wxCommandEvent& evt)
{
	textBox->AppendText("6");
	evt.Skip();
}
void Window::OnButtonClicked7(wxCommandEvent& evt)
{
	textBox->AppendText("7");
	evt.Skip();
}
void Window::OnButtonClicked8(wxCommandEvent& evt)
{
	textBox->AppendText("8");
	evt.Skip();
}
void Window::OnButtonClicked9(wxCommandEvent& evt)
{
	textBox->AppendText("9");
	evt.Skip();
}
void Window::OnButtonClicked10(wxCommandEvent& evt)
{
	textBox->Undo();
	evt.Skip();
}
void Window::OnButtonClicked11(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked12(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked13(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked14(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked15(wxCommandEvent& evt)
{
	textBox->Clear();
	evt.Skip();
}
void Window::OnButtonClicked16(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked17(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked18(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked19(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked20(wxCommandEvent& evt)
{

}
void Window::OnButtonClicked21(wxCommandEvent& evt)
{

}
