#pragma once
#include "Road.h"
#include "Bus.h"
#include "New_r.h"

namespace BusAppCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuPanel;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выйтиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  администрированиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  станцииToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttobus_1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  bus1;



	private: System::Windows::Forms::Button^  buttobus_2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  bus2;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::TextBox^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  debugBox;




	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuPanel = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйтиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->администрированиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->станцииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttobus_1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bus1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttobus_2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->bus2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->debugBox = (gcnew System::Windows::Forms::TextBox());
			this->menuPanel->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bus1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bus2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuPanel
			// 
			this->menuPanel->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->администрированиеToolStripMenuItem
			});
			this->menuPanel->Location = System::Drawing::Point(0, 0);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(1084, 24);
			this->menuPanel->TabIndex = 0;
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выйтиToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// выйтиToolStripMenuItem
			// 
			this->выйтиToolStripMenuItem->Name = L"выйтиToolStripMenuItem";
			this->выйтиToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->выйтиToolStripMenuItem->Text = L"Выйти";
			this->выйтиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выйтиToolStripMenuItem_Click);
			// 
			// администрированиеToolStripMenuItem
			// 
			this->администрированиеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->станцииToolStripMenuItem });
			this->администрированиеToolStripMenuItem->Name = L"администрированиеToolStripMenuItem";
			this->администрированиеToolStripMenuItem->Size = System::Drawing::Size(134, 20);
			this->администрированиеToolStripMenuItem->Text = L"Администрирование";
			// 
			// станцииToolStripMenuItem
			// 
			this->станцииToolStripMenuItem->Name = L"станцииToolStripMenuItem";
			this->станцииToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->станцииToolStripMenuItem->Text = L"Автобусы";
			this->станцииToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::callBusManagement);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5, this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 664);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1084, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(40, 17);
			this->toolStripStatusLabel1->Text = L"Buses:";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel2->Text = L"2";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(142, 17);
			this->toolStripStatusLabel3->Text = L"Currentrly working buses:";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel4->Text = L"1";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(102, 17);
			this->toolStripStatusLabel5->Text = L"Working stations: ";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(13, 17);
			this->toolStripStatusLabel6->Text = L"5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(530, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Остановка1";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// buttobus_1
			// 
			this->buttobus_1->Location = System::Drawing::Point(807, 47);
			this->buttobus_1->Name = L"buttobus_1";
			this->buttobus_1->Size = System::Drawing::Size(75, 23);
			this->buttobus_1->TabIndex = 3;
			this->buttobus_1->Text = L"Остановки";
			this->buttobus_1->UseVisualStyleBackColor = true;
			this->buttobus_1->Click += gcnew System::EventHandler(this, &MainForm::buttobus_1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(529, 264);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Остановка2";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(413, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Остановка3 (станция ТО)";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(523, 508);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Остановка4";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(814, 555);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Остановка5";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label5_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(339, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 8;
			// 
			// bus1
			// 
			this->bus1->BackColor = System::Drawing::Color::Transparent;
			this->bus1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bus1.BackgroundImage")));
			this->bus1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bus1.InitialImage")));
			this->bus1->Location = System::Drawing::Point(526, 27);
			this->bus1->Name = L"bus1";
			this->bus1->Size = System::Drawing::Size(24, 24);
			this->bus1->TabIndex = 9;
			this->bus1->TabStop = false;
			this->bus1->Click += gcnew System::EventHandler(this, &MainForm::bus1_Click);
			// 
			// buttobus_2
			// 
			this->buttobus_2->Location = System::Drawing::Point(778, 230);
			this->buttobus_2->Name = L"buttobus_2";
			this->buttobus_2->Size = System::Drawing::Size(104, 28);
			this->buttobus_2->TabIndex = 11;
			this->buttobus_2->Text = L"Новый маршрут";
			this->buttobus_2->UseVisualStyleBackColor = true;
			this->buttobus_2->Click += gcnew System::EventHandler(this, &MainForm::buttobus_2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(556, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Начало 1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 545);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Начало 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(985, 565);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Начало 3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(778, 259);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 27);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Завершить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// bus2
			// 
			this->bus2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bus2.Image")));
			this->bus2->Location = System::Drawing::Point(349, 60);
			this->bus2->Name = L"bus2";
			this->bus2->Size = System::Drawing::Size(24, 23);
			this->bus2->TabIndex = 16;
			this->bus2->TabStop = false;
			this->bus2->Visible = false;
			this->bus2->Click += gcnew System::EventHandler(this, &MainForm::bus2_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MainForm::timer2_Tick);
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(792, 123);
			this->label7->Multiline = true;
			this->label7->Name = L"label7";
			this->label7->ReadOnly = true;
			this->label7->Size = System::Drawing::Size(166, 81);
			this->label7->TabIndex = 17;
			this->label7->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(964, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 81);
			this->button1->TabIndex = 18;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// debugBox
			// 
			this->debugBox->Location = System::Drawing::Point(833, 219);
			this->debugBox->Multiline = true;
			this->debugBox->Name = L"debugBox";
			this->debugBox->Size = System::Drawing::Size(227, 163);
			this->debugBox->TabIndex = 19;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1084, 686);
			this->Controls->Add(this->debugBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->bus2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttobus_2);
			this->Controls->Add(this->bus1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttobus_1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuPanel;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->RightToLeftLayout = true;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BusApp";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Click += gcnew System::EventHandler(this, &MainForm::MainForm_Click);
			this->menuPanel->ResumeLayout(false);
			this->menuPanel->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bus1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bus2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выйтиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void callBusManagement(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttobus_1_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;


}

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		/* array <PictureBox^, 1>^ my;
	
		 my = gcnew array <PictureBox^, 1>(2);
		 for (int i = 0; i < 2; i++) {
			 my[i] = gcnew PictureBox;
		 };

		 my[1]->BackgroundImage = Image::FromFile("bus.bmp");
		 my[1]->Top = 0;
		 my[1]->Left = 50;
		 my[1]->Location = System::Drawing::Point(100, 0);
		 my[1]->TabIndex = 0;
		 my[1]->TabStop = false;*/
	//Bus a[2];
	//int n = 1;

}
private: System::Void MainForm_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	label7->Visible = false;
	button1->Visible = false;
	debugBox->Text += "X: " + Cursor->Position.X + " Y: " + Cursor->Position.Y + "\r\n";
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		 int n = 1;
		 int currentActiveBus = 1;
		 Bus bus_1,bus_2;
		 
		
		 int x1 = 2, y1 = 0, x2 = 0, y2 = 0;
		 int m = 0;
		 int a, a1 = 1;
		 int m1 = 3, m2 = 0, m3 = 0;
		 int way = 0;
		 int new_road = 0;
	public: static New_r r1;
		 int bus_n = 0;
		 int way2 = 0;
		 array<Bus ^> ^buses = gcnew array<Bus^>(5);

	public: static System::Int32 checkStops(int stop)
	{

		int x[5] = { 526, 526, 416, 526, 814 };
		int y[5] = { 138, 264, 411, 508, 544 };
		/*if (k == 1) {
			mass(526, 138, 1);
		}
		if (k == 2) {
			mass(526, 264, 1);
		}
		if (k == 3) {
			mass(416, 411, 1);
		}
		if (k == 4) {
			mass(526, 508, 1);
		}
		if (k == 5) {
			mass(814, 555, 1);
		}*/
		int checdedY = r1.mass(-1, stop + 1, 0);
		int checdedX = r1.mass(stop + 1, -1, 0);
		for (int i = 0; i < 5; i++)
		{
			if (checdedX == x[i] && checdedY == y[i])
				return i+1;
		}
		return 0;
	}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	int stop1[5] = {27 ,138,264 ,497,411};
	//int stop2[4] = {};
	//int road[4][2] = { {526,544},{416,544},{416,309},{526,309} };
	int road_y[4] = { 544,411,27 };
	int road_x[2] = {416,526};
	//int x_1[4] = {2};
	
	//buttobus_1->Text = bus1->Top.ToString();
	way++;

	if (m1 == 1) {
		if (bus1->Left != road_x[x2]) {
			if (timer1->Interval == 1000)
				timer1->Interval = 1;

			if (bus1->Left < road_x[x2])
				bus1->Left += a1;
			else 	bus1->Left -= a1;
		}
		else {
			m1 = 0;   y2 += 2; m2++; m3 = 1;

		}
	}

	if (m1 == 0) {
		if (bus1->Top != road_y[y2]) {
			if (timer1->Interval == 1000)
				timer1->Interval = 1;

			if (m3 == 0) {
				if (bus1->Top > road_y[y2])
					bus1->Top -= a1;
				else bus1->Top += a1;
			}
			else {
				if (bus1->Top != stop1[n]) {
					if (bus1->Top > road_y[y2])
						bus1->Top -= a1;
					else bus1->Top += a1;
				}
				else {
					n--;
					//buttobus_1->Text = stop1[n].ToString();
					timer1->Interval = 1000;
					bus_1.stop();
					if (currentActiveBus == 1)
						label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_1.Info(1).ToString() + "\r\nПассажиры: " + bus_1.Info(2).ToString() + "\r\nКилометраж: " + way.ToString() + "\r\nПроехало пассажиров: " + bus_1.Info(3).ToString();
				}
			}
		}
		else {
			if (y2 == 2) {
				n = 1;
				m2 = 0;
				m = 0;
				m1 = 3;
				y2 = 0;
				x2 = 0;
				m3 = 0;
			}
			else
				m1 = 1;
		}
	}
////////////////
	if (m == 1) {
		if (bus1->Left != road_x[x2]) {
			if (timer1->Interval == 1000)
				timer1->Interval = 1;

			if (bus1->Left < road_x[x2])
				bus1->Left += a1;
			else 	bus1->Left -= a1;
		}
		else {
			m = 0;   y2++; m2++;

		}
	}

	if (m == 0) {
		if ( bus1->Top != road_y[y2]) {
			if (timer1->Interval == 1000)
				timer1->Interval = 1;

			if (bus1->Top != stop1[n]) {
				if (bus1->Top > road_y[y2])
					bus1->Top -= a1;
				else bus1->Top += a1;
			}
			else {
				n++;
				//buttobus_1->Text = stop1[n].ToString();
				timer1->Interval = 1000;
				bus_1.stop();
				if (currentActiveBus == 1)
					label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_1.Info(1).ToString() + "\r\nПассажиры: " + bus_1.Info(2).ToString() + "\r\nКилометраж: " + way.ToString() + "\r\nПроехало пассажиров: " + bus_1.Info(3).ToString();
			}
		}
		else {
			if (m2 == 1) {
				timer1->Interval = 1000;
				bus_1.stop();
				if (currentActiveBus == 1)
					label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_1.Info(1).ToString() + "\r\nПассажиры: " + bus_1.Info(2).ToString() + "\r\nКилометраж: " + way.ToString() + "\r\nПроехало пассажиров: " + bus_1.Info(3).ToString();
				m2 = 0;
				m = 3;
				m1 = 0;
				y2--;
				x2++;
				n--;
			}else
			m = 1; 
		}
	}
	

	
}

private: System::Void bus1_Click(System::Object^  sender, System::EventArgs^  e) {
	currentActiveBus = 1;
	label7->Visible = true;
	button1->Visible = true;
	label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_1.Info(1).ToString() + "\r\nПассажиры: " + bus_1.Info(2).ToString() + "\r\nКилометраж: " + way.ToString() + "\r\nПроехало пассажиров: " + bus_1.Info(3).ToString();
	//label8->Visible = false;
	//label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: "+bus_1.Info(1).ToString() +" pass="+ bus_1.Info(2).ToString();
	
}
		 

private: System::Void buttobus_2_Click(System::Object^  sender, System::EventArgs^  e) {
	new_road = 1;
	
	button3->BackColor = Color().Maroon;
	button4->BackColor = Color().Maroon;
	button5->BackColor = Color().Maroon;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	button5->Visible = true;
	
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 2) {
		label1->BackColor = Color().Green;
		button6->Visible = true;
		r1.Point(1);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 1) {
		r1.Point(1);
		button3->BackColor = Color().Green;
		button4->BackColor = Color().White;
		button5->BackColor = Color().White;
		new_road = 2;
		label1->BackColor = Color().Maroon;
		label2->BackColor = Color().Maroon;
		label3->BackColor = Color().Maroon;
		label4->BackColor = Color().Maroon;
		label5->BackColor = Color().Maroon;
		bus_n = 1;
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 1) {
		r1.Point(2);
		button4->BackColor = Color().Green;
		new_road = 2;
		label1->BackColor = Color().Maroon;
		label2->BackColor = Color().Maroon;
		label3->BackColor = Color().Maroon;
		label4->BackColor = Color().Maroon;
		label5->BackColor = Color().Maroon;
	}
	bus_n = 2;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 1) {
		r1.Point(3);
		button5->BackColor = Color().Green;
		new_road = 2;
		label1->BackColor = Color().Maroon;
		label2->BackColor = Color().Maroon;
		label3->BackColor = Color().Maroon;
		label4->BackColor = Color().Maroon;
		label5->BackColor = Color().Maroon;
	}
	bus_n = 3;
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 2) {
		button6->Visible = true;
		label2->BackColor = Color().Green;
		r1.Point(2);
	}
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 2) {
		button6->Visible = true;
		label3->BackColor = Color().Green;
		r1.Point(3);
	}
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 2) {
		button6->Visible = true;
		label4->BackColor = Color().Green;
		r1.Point(4);
	}
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (new_road == 2) {
		button6->Visible = true;
		label5->BackColor = Color().Green;
		r1.Point(5);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->BackColor = Color().White;
	label2->BackColor = Color().White;
	label3->BackColor = Color().White;
	label4->BackColor = Color().White;
	label5->BackColor = Color().White;
	button3->BackColor = Color().White;
	button4->BackColor = Color().White;
	button5->BackColor = Color().White;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	buttobus_2->Visible = false;
	button6->Visible = false;
	toolStripStatusLabel4->Text = "2";


	bus2->Top = r1.mass(-1, 0, 0);
	bus2->Left = r1.mass(0, -1, 0);

	//button6->Text= r1.mass(-1, 0, 0).ToString();
	bus2->Visible = true;
	timer2->Enabled = true;

}
		 ///////////////////
		 int i1 = 1;
		 int num = 0;
		 int m1_1 = 0;
		 
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	num = r1.i;
	////label8->Visible = true;
	////label8->Text = "num=" + num.ToString() + "\r\ni="+i1.ToString();
	if (timer2->Interval == 1000)
		timer2->Interval = 1;
	way2++;

	if (m1_1 == 0) {
		if (r1.mass(i1, -1, 0) == 526) {

			if (bus2->Left == 526) {
				if (bus2->Top != r1.mass(-1, i1, 0)) {
					if (bus2->Top < r1.mass(-1, i1, 0))
						bus2->Top += 1;
					else bus2->Top -= 1;
				}
				else {
					if (num -1 != i1)
						i1++;
					else { m1_1 = 1; i1--; }
					bus_2.stop();
					if (currentActiveBus == 2)
						label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_2.Info(1).ToString() + "\r\nПассажиры: " + bus_2.Info(2).ToString() + "\r\nКилометраж: " + way2.ToString() + "\r\nПроехало пассажиров: " + bus_2.Info(3).ToString();
					timer2->Interval = 1000;
				}
			}
			if (bus2->Left > 526) {
				bus2->Left -= 1;
			}
			if (bus2->Left < 526) {
				if (bus2->Top != 544)
					bus2->Top += 1;
				else bus2->Left += 1;
			}
		}
		if (r1.mass(i1, -1, 0) == 416) {
			if (bus2->Left == 416) {
				if (bus2->Top != r1.mass(-1, i1, 0)) {
					bus2->Top -= 1;
				}
				else {
					if (num -1!= i1)
						i1++;
					else { m1_1 = 1; i1--;  }
					bus_2.stop();
					if (currentActiveBus == 2)
						label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_2.Info(1).ToString() + "\r\nПассажиры: " + bus_2.Info(2).ToString() + "\r\nКилометраж: " + way2.ToString() + "\r\nПроехало пассажиров: " + bus_2.Info(3).ToString();
					timer2->Interval = 1000;
				}
			}
			if (bus2->Left < 416)
				bus2->Left += 1;
			if (bus2->Left > 416)
				if (bus2->Top != 544)
					bus2->Top += 1;
				else bus2->Left -= 1;
		}
		if (r1.mass(i1, -1, 0) == 814) {
			if (bus2->Top == 544) {
				if (bus2->Left != 814) {
					bus2->Left += 1;
				}
				else {
					if (num -1!= i1)
						i1++;
					else { m1_1 = 1; i1--;  }
					bus_2.stop();
					if (currentActiveBus == 2)
						label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_2.Info(1).ToString() + "\r\nПассажиры: " + bus_2.Info(2).ToString() + "\r\nКилометраж: " + way2.ToString() + "\r\nПроехало пассажиров: " + bus_2.Info(3).ToString();
					timer2->Interval = 1000;
				}
			}
			else bus2->Top += 1;
		}
	}
	////////////////////////////
	if (m1_1 == 1) {
		if (r1.mass(i1, -1, 0) == 526) {

			if (bus2->Left == 526) {
				if (bus2->Top != r1.mass(-1, i1, 0)) {
					if (bus2->Top < r1.mass(-1, i1, 0))
						bus2->Top += 1;
					else bus2->Top -= 1;
				}
				else {
					if (0  != i1)
						i1--;
					else { m1_1 = 0; i1++; }
					bus_2.stop();
					timer2->Interval = 1000;
				}
			}
			if (bus2->Left > 526) {
				bus2->Left -= 1;
			}
			if (bus2->Left < 526) {
				if (bus2->Top != 544)
					bus2->Top += 1;
				else bus2->Left += 1;
			}
		}
		if (r1.mass(i1, -1, 0) == 416) {
			if (bus2->Left == 416) {
				if (bus2->Left != r1.mass(-1, i1, 0)) {
					bus2->Top -= 1;
				}
				else {
					if (0 != i1)
						i1--;
					else { m1_1 = 0; i1++; }
					bus_2.stop();
					timer2->Interval = 1000;
				}
			}
			if (bus2->Left < 416)
				bus2->Left += 1;
			if (bus2->Left > 416)
				if (bus2->Top != 544)
					bus2->Top += 1;
				else bus2->Left -= 1;
		}
		if (r1.mass(i1, -1, 0) == 814) {
			if (bus2->Top == 544) {
				if (bus2->Left != 814) {
					bus2->Left += 1;
				}
				else {
					if (0 != i1)
						i1--;
					else { m1_1 = 0; i1++; }
					bus_2.stop();
					timer2->Interval = 1000;
				}
			}
			else bus2->Top += 1;
		}
	}
	
	
}
private: System::Void bus2_Click(System::Object^  sender, System::EventArgs^  e) {
	currentActiveBus = 2;
	label7->Visible = true;
	button1->Visible = true;
	//123
	label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_2.Info(1).ToString() + "\r\nПассажиры: " + bus_2.Info(2).ToString() + "\r\nКилометраж: " + way2.ToString() + "\r\nПроехало пассажиров: " + bus_2.Info(3).ToString();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (currentActiveBus == 1)
		label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_1.Info(1).ToString() + "\r\nПассажиры: " + bus_1.Info(2).ToString() + "\r\nКилометраж: " + way.ToString() + "\r\nПроехало пассажиров: " + bus_1.Info(3).ToString();
	if (currentActiveBus == 2)
		label7->Text = "Автобус: " + currentActiveBus.ToString() + "\r\nДеньги: " + bus_2.Info(1).ToString() + "\r\nПассажиры: " + bus_2.Info(2).ToString() + "\r\nКилометраж: " + way2.ToString() + "\r\nПроехало пассажиров: " + bus_2.Info(3).ToString();
}
};
}

