#include "MyForm.h"
#include "Quiz1.h"
#include "LicznikKalorii.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	AsiaBujakWF::MyForm form;
	Application::Run(%form);
}
