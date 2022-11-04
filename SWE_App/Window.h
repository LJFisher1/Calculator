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
	void OnButtonClicked0(wxCommandEvent& evt);
	void OnButtonClicked1(wxCommandEvent& evt);
	void OnButtonClicked2(wxCommandEvent& evt);
	void OnButtonClicked3(wxCommandEvent& evt);
	void OnButtonClicked4(wxCommandEvent& evt);
	void OnButtonClicked5(wxCommandEvent& evt);
	void OnButtonClicked6(wxCommandEvent& evt);
	void OnButtonClicked7(wxCommandEvent& evt);
	void OnButtonClicked8(wxCommandEvent& evt);
	void OnButtonClicked9(wxCommandEvent& evt);
	void OnButtonClicked10(wxCommandEvent& evt);
	void OnButtonClicked11(wxCommandEvent& evt);
	void OnButtonClicked12(wxCommandEvent& evt);
	void OnButtonClicked13(wxCommandEvent& evt);
	void OnButtonClicked14(wxCommandEvent& evt);
	void OnButtonClicked15(wxCommandEvent& evt);
	void OnButtonClicked16(wxCommandEvent& evt);
	void OnButtonClicked17(wxCommandEvent& evt);
	void OnButtonClicked18(wxCommandEvent& evt);
	void OnButtonClicked19(wxCommandEvent& evt);
	void OnButtonClicked20(wxCommandEvent& evt);
	void OnButtonClicked21(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
public:
	Window();

	
};

