#include "properties.h"
#include "Main.h"
#include <iostream>

/* 
	FILES LEGEND:
	initializer.h -> file included at the beggining of main.h to initialize classes needed for main.h file
	functions.cpp -> Some functions for main.h
	includes.h -> Some basic includes and function declaration 
	main.cpp -> just main
	main.h -> main but for gui visual and functional
	properties.cpp -> Contains classes functions implementations
	properties.h -> Contains classes and their functions declarations
	
	*/
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]

int main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DeepLinkTeser::Main form;
	Application::Run(%form);
}  
//...