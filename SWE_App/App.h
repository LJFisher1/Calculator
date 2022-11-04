#pragma once
#include "wx/wx.h"

class Window;
class Event;

class App : public wxApp
{
	Window* window = nullptr;
public:
	virtual bool OnInit();
};

