#include "Events.h"
#include "Window.h"
#include "App.h"
wxString firstnum, secondnum, displayAns;
float op1, op2, result;
int ops;

void Window::OnButtonClicked0(wxCommandEvent& evt)
{
	// 0
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("0");
	}
	else
	{
		textBox->AppendText("0");
	}
	evt.Skip();
}
void Window::OnButtonClicked1(wxCommandEvent& evt)
{
	// 1
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("1");
	}
	else
	{
		textBox->AppendText("1");
	}
	evt.Skip();
}
void Window::OnButtonClicked2(wxCommandEvent& evt)
{
	// 2
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("2");
	}
	else
	{
		textBox->AppendText("2");
	}
	evt.Skip();
}
void Window::OnButtonClicked3(wxCommandEvent& evt)
{
	// 3
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("3");
	}
	else
	{
		textBox->AppendText("3");
	}
	evt.Skip();
}
void Window::OnButtonClicked4(wxCommandEvent& evt)
{
	// 4
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("4");
	}
	else
	{
		textBox->AppendText("4");
	}
	evt.Skip();
}
void Window::OnButtonClicked5(wxCommandEvent& evt)
{
	// 5
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("5");
	}
	else
	{
		textBox->AppendText("5");
	}
	evt.Skip();
}
void Window::OnButtonClicked6(wxCommandEvent& evt)
{
	// 6
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("6");
	}
	else
	{
		textBox->AppendText("6");
	}
	evt.Skip();
}
void Window::OnButtonClicked7(wxCommandEvent& evt)
{
	// 7
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("7");
	}
	else
	{
		textBox->AppendText("7");
	}
	evt.Skip();
}
void Window::OnButtonClicked8(wxCommandEvent& evt)
{
	// 8
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("8");
	}
	else
	{
		textBox->AppendText("8");
	}
	evt.Skip();
}
void Window::OnButtonClicked9(wxCommandEvent& evt)
{
	// 9
	if (textBox->GetValue() == "0")
	{
		textBox->SetValue("9");
	}
	else
	{
		textBox->AppendText("9");
	}
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
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 1;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked12(wxCommandEvent& evt)
{
	// Cos
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 2;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked13(wxCommandEvent& evt)
{
	// Tan
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 3;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked14(wxCommandEvent& evt)
{
	// Negate (+ to - or - to +)
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 4;
	textBox->SetValue("0");
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
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 5;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked17(wxCommandEvent& evt)
{
	// Multiply
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 6;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked18(wxCommandEvent& evt)
{
	// Minus
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 7;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked19(wxCommandEvent& evt)
{
	// Add
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 8;
	textBox->SetValue("0");

	evt.Skip();
}
void Window::OnButtonClicked20(wxCommandEvent& evt)
{
	// Modulo
	firstnum = textBox->GetValue();
	op1 = wxAtof(firstnum);
	ops = 9;
	textBox->SetValue("0");
	evt.Skip();
}
void Window::OnButtonClicked21(wxCommandEvent& evt)
{
	// Equal - When pressed, should show result
	secondnum = textBox->GetValue();
	op2 = wxAtof(secondnum);
	switch (ops)
	{
	case 1: // Sin

		break;
	case 2: // Cos

		break;
	case 3: // Tan

		break;
	case 4: // Negate
		result = (float)op1 * -1;
		displayAns = wxString::Format(wxT("%g"), result);
		textBox->SetValue(displayAns);
		break;
	case 5: // Divide
		result = (float)op1 / (float)op2;
		displayAns = wxString::Format(wxT("%g"), result);
		textBox->SetValue(displayAns);
		break;
	case 6: // Multiply
		result = (float)op1 * (float)op2;
		displayAns = wxString::Format(wxT("%g"), result);
		textBox->SetValue(displayAns);
		break;
	case 7: // Minus
		result = (float)op1 - (float)op2;
		displayAns = wxString::Format(wxT("%g"), result);
		textBox->SetValue(displayAns);
		break;
	case 8: // Add
		result = float(op1) + float(op2);
		displayAns = wxString::Format(wxT("%g"), result);
		textBox->SetValue(displayAns);
		break;

	case 9: // Modulo
		/*result = ((float)op1) % ((float)op2);
		displayAns = wxString::Format(wxT("%g"), result);
		textBox->SetValue(displayAns);
		break;*/
	}
	evt.Skip();
}