#include "Events.h"

void Window::OnButtonClicked0(wxCommandEvent& evt)
{
	// 0
	textBox->AppendText("0");
	evt.Skip();
}
void Window::OnButtonClicked1(wxCommandEvent& evt)
{
	// 1
	textBox->AppendText("1");
	evt.Skip();
}
void Window::OnButtonClicked2(wxCommandEvent& evt)
{
	// 2
	textBox->AppendText("2");
	evt.Skip();
}
void Window::OnButtonClicked3(wxCommandEvent& evt)
{
	// 3
	textBox->AppendText("3");
	evt.Skip();
}
void Window::OnButtonClicked4(wxCommandEvent& evt)
{
	// 4
	textBox->AppendText("4");
	evt.Skip();
}
void Window::OnButtonClicked5(wxCommandEvent& evt)
{
	// 5
	textBox->AppendText("5");
	evt.Skip();
}
void Window::OnButtonClicked6(wxCommandEvent& evt)
{
	// 6
	textBox->AppendText("6");
	evt.Skip();
}
void Window::OnButtonClicked7(wxCommandEvent& evt)
{
	// 7
	textBox->AppendText("7");
	evt.Skip();
}
void Window::OnButtonClicked8(wxCommandEvent& evt)
{
	// 8
	textBox->AppendText("8");
	evt.Skip();
}
void Window::OnButtonClicked9(wxCommandEvent& evt)
{
	// 9
	textBox->AppendText("9");
	evt.Skip();
}
void Window::OnButtonClicked10(wxCommandEvent& evt)
{
	// Del
	textBox->Undo();
	evt.Skip();
}
void Window::OnButtonClicked11(wxCommandEvent& evt)
{
	// Sin

	evt.Skip();
}
void Window::OnButtonClicked12(wxCommandEvent& evt)
{
	// Cos

	evt.Skip();
}
void Window::OnButtonClicked13(wxCommandEvent& evt)
{
	// Tan

	evt.Skip();
}
void Window::OnButtonClicked14(wxCommandEvent& evt)
{
	// Negate (+ to - or - to +)

	evt.Skip();
}
void Window::OnButtonClicked15(wxCommandEvent& evt)
{
	// Clear
	textBox->Clear();
	evt.Skip();
}
void Window::OnButtonClicked16(wxCommandEvent& evt)
{
	// Divide
	textBox->AppendText(" / ");
	evt.Skip();
}
void Window::OnButtonClicked17(wxCommandEvent& evt)
{
	// Multiply
	textBox->AppendText(" * ");
	evt.Skip();
}
void Window::OnButtonClicked18(wxCommandEvent& evt)
{
	// Minus
	textBox->AppendText(" - ");
	evt.Skip();
}
void Window::OnButtonClicked19(wxCommandEvent& evt)
{
	// Add
	textBox->AppendText(" + ");
	evt.Skip();
}
void Window::OnButtonClicked20(wxCommandEvent& evt)
{
	// Modulo
	textBox->AppendText(" % ");
	evt.Skip();
}
void Window::OnButtonClicked21(wxCommandEvent& evt)
{
	// Equal - When pressed, should show result

	evt.Skip();
}