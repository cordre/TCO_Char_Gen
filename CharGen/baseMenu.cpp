#include "baseMenu.h"


using namespace System;
using namespace System::Windows::Forms;

//int gender = 0;

[STAThreadAttribute]
int main(array < String^ > ^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TCOCharGen::baseMenu form;
	Application::Run(%form);

//	return 0;
}