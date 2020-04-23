#include "properties.h"
#include "Main.h"
#include <iostream>

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