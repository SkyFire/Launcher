// Emerald Nightmare Launcher.cpp : main project file.

#include "stdafx.h"
#include "Main_Window.h"

using namespace EmeraldNightmareLauncher;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
	{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Main_Window());
	return 0;
	}
