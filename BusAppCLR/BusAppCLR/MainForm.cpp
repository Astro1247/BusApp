#include "MainForm.h"
#include "StationManagement.h"
#include "Bus.h"

using namespace System;
using namespace System::Windows::Forms;



namespace BusAppCLR {
	System::Void MainForm::callBusManagement(System::Object^  sender, System::EventArgs^  e) {
		StationManagement^ f2 = gcnew StationManagement(this);
		f2->Show();
		//log(gcnew String("123"));
	}
	const int count = 10;
	//Bus bus1[count];

}


[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BusAppCLR::MainForm mainForm;
	Application::Run(%mainForm);

	
} 

void BusAppCLR::MainForm::log(System::String^ msg)
{
	System::Windows::Forms::Label^ label8 = gcnew System::Windows::Forms::Label();
	label8->Text += "55555";
}