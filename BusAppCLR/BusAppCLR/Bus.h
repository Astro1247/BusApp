#pragma once
ref class Bus
{
private: System::ComponentModel::IContainer^  components;
private: System::Windows::Forms::Timer^  timer1;
private: void InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
	this->timer1->Enabled = true;
	this->timer1->Interval = 1;
	this->timer1->Tick += gcnew System::EventHandler(this, &Bus::timer1_Tick);
}
public:
	void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
	}
	Bus();
	void stop();
	//void Print();
	int Info(int);
	//Bus(int id, int stationID, int routeID);
	//Bus(int k) { busCount = k; };
private:
	int money = 0;
	int pass = 0;
	int pass_1 = 0;
	int pass_out = 0;
	int sum_pass = 0;
	//int road_1[5];
};

