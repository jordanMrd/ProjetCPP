#include "MyForm.h"

//MyForm.cpp
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectPOO::MyForm form;
    Application::Run(% form);
}