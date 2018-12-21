#include "baseMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array < String^ > ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TCOCharGen::baseMenu form;
	Application::Run(%form);
	return 0;
}