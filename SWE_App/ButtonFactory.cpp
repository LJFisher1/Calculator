#include "ButtonFactory.h"

void ButtonFactory::CreateButton(wxButton* button, int _id, std::string label, int w, int x, int  y, int z)
{
	button = new wxButton(this, _id, label, wxPoint(w, x), wxSize(y, z));
}

void ButtonFactory::CreateButton0(wxButton* button0)
{
	CreateButton(button0, 10000, "0", 101, 275, 100, 50);
}
void ButtonFactory::CreateButton1(wxButton* button1)
{
	CreateButton(button1, 10001, "1", 1, 225, 100, 50);
}
void ButtonFactory::CreateButton2(wxButton* button2)
{
	CreateButton(button2, 10002, "2", 101, 225, 100, 50);
}
void ButtonFactory::CreateButton3(wxButton* button3)
{
	CreateButton(button3, 10003, "3", 201, 225, 100, 50);
}
void ButtonFactory::CreateButton4(wxButton* button4)
{
	CreateButton(button4, 10004, "4", 1, 175, 100, 50);
}
void ButtonFactory::CreateButton5(wxButton* button5)
{
	CreateButton(button5, 10005, "5", 101, 175, 100, 50);
}
void ButtonFactory::CreateButton6(wxButton* button6)
{
	CreateButton(button6, 10006, "6", 201, 175, 100, 50);
}
void ButtonFactory::CreateButton7(wxButton* button7)
{
	CreateButton(button7, 10007, "7", 1, 125, 100, 50);
}
void ButtonFactory::CreateButton8(wxButton* button8)
{
	CreateButton(button8, 10008, "8", 101, 125, 100, 50);
}
void ButtonFactory::CreateButton9(wxButton* button9)
{
	CreateButton(button9, 10009, "9", 201, 125, 100, 50);
}
void ButtonFactory::CreateButtonDel(wxButton* del)
{
	CreateButton(del, 10010, "Del", 1, 75, 100, 50);
}
void ButtonFactory::CreateButtonSin(wxButton* sin)
{
	CreateButton(sin, 10011, "Sin", 101, 75, 100, 50);
}
void ButtonFactory::CreateButtonCos(wxButton* cos)
{
	CreateButton(cos, 10012, "Cos", 201, 75, 100, 50);
}
void ButtonFactory::CreateButtonTan(wxButton* tan)
{
	CreateButton(tan, 10013, "Tan", 301, 75, 100, 50);
}
void ButtonFactory::CreateButtonNeg(wxButton* neg)
{
	CreateButton(neg, 10014, "+/-", 1, 275, 100, 50);
}
void ButtonFactory::CreateButtonClr(wxButton* clr)
{
	CreateButton(clr, 10015, "Clear", 201, 275, 100, 50);
}
void ButtonFactory::CreateButtonDiv(wxButton* div)
{
	CreateButton(div, 10016, "/", 301, 175, 100, 25);
}
void ButtonFactory::CreateButtonMul(wxButton* mul)
{
	CreateButton(mul, 10017, "*", 301, 200, 100, 25);
}
void ButtonFactory::CreateButtonMinus(wxButton* minus)
{
	CreateButton(minus, 10018, "-", 301, 225, 100, 25);
}
void ButtonFactory::CreateButtonAdd(wxButton* add)
{
	CreateButton(add, 10019, "+", 301, 250, 100, 25);
}
void ButtonFactory::CreateButtonMod(wxButton* mod)
{
	CreateButton(mod, 10020, "%", 301, 125, 100, 50);
}
void ButtonFactory::CreateButtonEqual(wxButton* equal)
{
	CreateButton(equal, 10021, "=", 301, 275, 100, 50);
}

