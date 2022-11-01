#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
private:
	wxTextCtrl* textBox = nullptr;
	wxButton* del = nullptr;
	wxButton* sin = nullptr;
	wxButton* cos = nullptr;
	wxButton* tan = nullptr;
	wxButton* num0 = nullptr;
	wxButton* num1 = nullptr;
	wxButton* num2 = nullptr;
	wxButton* num3 = nullptr;
	wxButton* num4 = nullptr;
	wxButton* num5 = nullptr;
	wxButton* num6 = nullptr;
	wxButton* num7 = nullptr;
	wxButton* num8 = nullptr;
	wxButton* num9 = nullptr;
	wxButton* negNum = nullptr;
	wxButton* clear = nullptr;
	wxButton* divide = nullptr;
	wxButton* multiply = nullptr;
	wxButton* minus = nullptr;
	wxButton* add = nullptr;
	wxButton* mod = nullptr;
	wxButton* equal = nullptr;
public:
	Window();
};

