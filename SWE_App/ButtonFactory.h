#pragma once
#include "Window.h"
#include "wx/wx.h"
class ButtonFactory : public wxButton
{
public:
	int w, x, y, z = 0;
	void CreateButton(wxButton* button, int _id, std::string _label, int w, int x, int y, int z);
	void CreateButton0(wxButton* button0);
	void CreateButton1(wxButton* button1);
	void CreateButton2(wxButton* button2);
	void CreateButton3(wxButton* button3);
	void CreateButton4(wxButton* button4);
	void CreateButton5(wxButton* button5);
	void CreateButton6(wxButton* button6);
	void CreateButton7(wxButton* button7);
	void CreateButton8(wxButton* button8);
	void CreateButton9(wxButton* button9);
	void CreateButtonDel(wxButton* del);
	void CreateButtonSin(wxButton* sin);
	void CreateButtonCos(wxButton* cos);
	void CreateButtonTan(wxButton* tan);
	void CreateButtonNeg(wxButton* neg);
	void CreateButtonClr(wxButton* clr);
	void CreateButtonDiv(wxButton* div);
	void CreateButtonMul(wxButton* mul);
	void CreateButtonMinus(wxButton* minus);
	void CreateButtonAdd(wxButton* add);
	void CreateButtonMod(wxButton* mod);
	void CreateButtonEqual(wxButton* equal);
};

