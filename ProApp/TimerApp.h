#pragma once
#include<windows.h>
#include<string>
namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TimerApp
	/// </summary>
	public ref class TimerApp : public System::Windows::Forms::Form
	{
		Color TimerColor;
	public:
		TimerApp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TimerApp(Color MainColor)
		{
			TimerColor = MainColor;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TimerApp()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Timer^ Timer;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lbTime;
	private: System::Windows::Forms::Button^ btnStart;
	protected:


	private: System::Windows::Forms::Button^ btnPause;

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Button^ btnStop;


	private: System::Windows::Forms::Button^ btn15;

	private: System::Windows::Forms::Button^ btn30;
	private: System::Windows::Forms::Button^ btn45;
	private: System::Windows::Forms::Button^ btnCustom;
	private: System::Windows::Forms::TextBox^ tbMin;
	public: System::Windows::Forms::GroupBox^ TimeGroup;
	private:



	private: System::Windows::Forms::Button^ btnSet;
	private: System::Windows::Forms::TextBox^ tbSec;
	private: System::Windows::Forms::Label^ lbColon;
	private: System::Windows::Forms::Label^ lbWarning;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->btn15 = (gcnew System::Windows::Forms::Button());
			this->btn30 = (gcnew System::Windows::Forms::Button());
			this->btn45 = (gcnew System::Windows::Forms::Button());
			this->btnCustom = (gcnew System::Windows::Forms::Button());
			this->tbMin = (gcnew System::Windows::Forms::TextBox());
			this->TimeGroup = (gcnew System::Windows::Forms::GroupBox());
			this->tbSec = (gcnew System::Windows::Forms::TextBox());
			this->btnSet = (gcnew System::Windows::Forms::Button());
			this->lbColon = (gcnew System::Windows::Forms::Label());
			this->lbWarning = (gcnew System::Windows::Forms::Label());
			this->TimeGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// Timer
			// 
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &TimerApp::Timer_Tick);
			// 
			// lbTime
			// 
			this->lbTime->AutoSize = true;
			this->lbTime->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbTime->Cursor = System::Windows::Forms::Cursors::No;
			this->lbTime->Font = (gcnew System::Drawing::Font(L"Perpetua", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTime->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbTime->Location = System::Drawing::Point(106, 162);
			this->lbTime->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(244, 92);
			this->lbTime->TabIndex = 0;
			this->lbTime->Text = L"01 : 00";
			// 
			// btnStart
			// 
			this->btnStart->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStart->ForeColor = System::Drawing::Color::LightGray;
			this->btnStart->Location = System::Drawing::Point(19, 327);
			this->btnStart->Margin = System::Windows::Forms::Padding(4);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(90, 90);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"Start Timer";
			this->btnStart->UseVisualStyleBackColor = false;
			this->btnStart->Click += gcnew System::EventHandler(this, &TimerApp::btnStart_Click);
			// 
			// btnPause
			// 
			this->btnPause->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPause->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPause->ForeColor = System::Drawing::Color::LightGray;
			this->btnPause->Location = System::Drawing::Point(122, 327);
			this->btnPause->Margin = System::Windows::Forms::Padding(4);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(90, 90);
			this->btnPause->TabIndex = 2;
			this->btnPause->Text = L"Pause Timer";
			this->btnPause->UseVisualStyleBackColor = false;
			this->btnPause->Click += gcnew System::EventHandler(this, &TimerApp::btnPause_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnReset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::LightGray;
			this->btnReset->Location = System::Drawing::Point(220, 327);
			this->btnReset->Margin = System::Windows::Forms::Padding(4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(90, 90);
			this->btnReset->TabIndex = 3;
			this->btnReset->Text = L"Reset Timer";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &TimerApp::btnReset_Click);
			// 
			// btnStop
			// 
			this->btnStop->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnStop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnStop->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStop->ForeColor = System::Drawing::Color::LightGray;
			this->btnStop->Location = System::Drawing::Point(318, 327);
			this->btnStop->Margin = System::Windows::Forms::Padding(4);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(90, 90);
			this->btnStop->TabIndex = 4;
			this->btnStop->Text = L"Stop Timer";
			this->btnStop->UseVisualStyleBackColor = false;
			this->btnStop->Click += gcnew System::EventHandler(this, &TimerApp::btnStop_Click);
			// 
			// btn15
			// 
			this->btn15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn15->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn15->ForeColor = System::Drawing::Color::LightGray;
			this->btn15->Location = System::Drawing::Point(7, 28);
			this->btn15->Margin = System::Windows::Forms::Padding(4);
			this->btn15->Name = L"btn15";
			this->btn15->Size = System::Drawing::Size(50, 30);
			this->btn15->TabIndex = 6;
			this->btn15->Text = L"15";
			this->btn15->UseVisualStyleBackColor = false;
			this->btn15->Click += gcnew System::EventHandler(this, &TimerApp::btn15_Click);
			// 
			// btn30
			// 
			this->btn30->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn30->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn30->ForeColor = System::Drawing::Color::LightGray;
			this->btn30->Location = System::Drawing::Point(65, 28);
			this->btn30->Margin = System::Windows::Forms::Padding(4);
			this->btn30->Name = L"btn30";
			this->btn30->Size = System::Drawing::Size(50, 30);
			this->btn30->TabIndex = 7;
			this->btn30->Text = L"30";
			this->btn30->UseVisualStyleBackColor = false;
			this->btn30->Click += gcnew System::EventHandler(this, &TimerApp::btn30_Click);
			// 
			// btn45
			// 
			this->btn45->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn45->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn45->ForeColor = System::Drawing::Color::LightGray;
			this->btn45->Location = System::Drawing::Point(123, 28);
			this->btn45->Margin = System::Windows::Forms::Padding(4);
			this->btn45->Name = L"btn45";
			this->btn45->Size = System::Drawing::Size(50, 30);
			this->btn45->TabIndex = 8;
			this->btn45->Text = L"45";
			this->btn45->UseVisualStyleBackColor = false;
			this->btn45->Click += gcnew System::EventHandler(this, &TimerApp::btn45_Click);
			// 
			// btnCustom
			// 
			this->btnCustom->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCustom->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCustom->ForeColor = System::Drawing::Color::LightGray;
			this->btnCustom->Location = System::Drawing::Point(172, 28);
			this->btnCustom->Margin = System::Windows::Forms::Padding(4);
			this->btnCustom->Name = L"btnCustom";
			this->btnCustom->Size = System::Drawing::Size(85, 30);
			this->btnCustom->TabIndex = 9;
			this->btnCustom->Text = L"Custom:";
			this->btnCustom->UseVisualStyleBackColor = false;
			this->btnCustom->Click += gcnew System::EventHandler(this, &TimerApp::btnCustom_Click);
			// 
			// tbMin
			// 
			this->tbMin->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbMin->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMin->ForeColor = System::Drawing::Color::LightGray;
			this->tbMin->Location = System::Drawing::Point(256, 28);
			this->tbMin->Margin = System::Windows::Forms::Padding(4);
			this->tbMin->Multiline = true;
			this->tbMin->Name = L"tbMin";
			this->tbMin->Size = System::Drawing::Size(34, 30);
			this->tbMin->TabIndex = 10;
			this->tbMin->Text = L"02";
			this->tbMin->Visible = false;
			this->tbMin->TextChanged += gcnew System::EventHandler(this, &TimerApp::tbCustom_TextChanged);
			// 
			// TimeGroup
			// 
			this->TimeGroup->AccessibleRole = System::Windows::Forms::AccessibleRole::Grouping;
			this->TimeGroup->Controls->Add(this->tbSec);
			this->TimeGroup->Controls->Add(this->btnSet);
			this->TimeGroup->Controls->Add(this->btn45);
			this->TimeGroup->Controls->Add(this->btnCustom);
			this->TimeGroup->Controls->Add(this->tbMin);
			this->TimeGroup->Controls->Add(this->btn15);
			this->TimeGroup->Controls->Add(this->btn30);
			this->TimeGroup->Controls->Add(this->lbColon);
			this->TimeGroup->ForeColor = System::Drawing::Color::LightGray;
			this->TimeGroup->Location = System::Drawing::Point(12, 12);
			this->TimeGroup->Name = L"TimeGroup";
			this->TimeGroup->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TimeGroup->Size = System::Drawing::Size(396, 84);
			this->TimeGroup->TabIndex = 11;
			this->TimeGroup->TabStop = false;
			this->TimeGroup->Text = L"Select Time";
			this->TimeGroup->Enter += gcnew System::EventHandler(this, &TimerApp::TimeGroup_Enter);
			// 
			// tbSec
			// 
			this->tbSec->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbSec->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSec->ForeColor = System::Drawing::Color::LightGray;
			this->tbSec->Location = System::Drawing::Point(303, 28);
			this->tbSec->Margin = System::Windows::Forms::Padding(4);
			this->tbSec->Multiline = true;
			this->tbSec->Name = L"tbSec";
			this->tbSec->Size = System::Drawing::Size(35, 30);
			this->tbSec->TabIndex = 13;
			this->tbSec->Text = L"00";
			this->tbSec->Visible = false;
			this->tbSec->TextChanged += gcnew System::EventHandler(this, &TimerApp::tbSec_TextChanged);
			// 
			// btnSet
			// 
			this->btnSet->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSet->ForeColor = System::Drawing::Color::LightGray;
			this->btnSet->Location = System::Drawing::Point(345, 25);
			this->btnSet->Name = L"btnSet";
			this->btnSet->Size = System::Drawing::Size(41, 37);
			this->btnSet->TabIndex = 12;
			this->btnSet->Text = L"&Set";
			this->btnSet->UseVisualStyleBackColor = false;
			this->btnSet->Visible = false;
			this->btnSet->Click += gcnew System::EventHandler(this, &TimerApp::btnSet_Click);
			// 
			// lbColon
			// 
			this->lbColon->AutoSize = true;
			this->lbColon->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbColon->Location = System::Drawing::Point(288, 29);
			this->lbColon->Name = L"lbColon";
			this->lbColon->Size = System::Drawing::Size(18, 27);
			this->lbColon->TabIndex = 14;
			this->lbColon->Text = L":";
			this->lbColon->Visible = false;
			// 
			// lbWarning
			// 
			this->lbWarning->AutoSize = true;
			this->lbWarning->Font = (gcnew System::Drawing::Font(L"Perpetua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWarning->Location = System::Drawing::Point(100, 99);
			this->lbWarning->Name = L"lbWarning";
			this->lbWarning->Size = System::Drawing::Size(33, 32);
			this->lbWarning->TabIndex = 12;
			this->lbWarning->Text = L"A";
			this->lbWarning->Visible = false;
			// 
			// TimerApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(432, 483);
			this->Controls->Add(this->lbWarning);
			this->Controls->Add(this->TimeGroup);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->lbTime);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(450, 530);
			this->MinimumSize = System::Drawing::Size(450, 530);
			this->Name = L"TimerApp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pomodoro Timer";
			this->Load += gcnew System::EventHandler(this, &TimerApp::TimerApp_Load);
			this->TimeGroup->ResumeLayout(false);
			this->TimeGroup->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Timer Control
		static int second = 0;
		static int minute = 1;
		String^ Sec;
		String^ Min;
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		second--;
		if (second < 00)
		{
			minute--;
			second = 59;
		}
		if (minute < 00)
		{
			Beep(500, 500);
			Beep(500, 500);
			Beep(500, 500);
			btnReset->PerformClick();
			this->Timer->Enabled = false;
		}
		Sec = Convert::ToString(second);
		Min = Convert::ToString(minute);
		lbTime->Text = Min + " : " + Sec;
	
	}
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		this->TimeGroup->Visible = false;
		//this->TimeGroup->Enabled = false;
		this->lbWarning->Visible = true;
		this->lbWarning->Text = "Timer in Progress";
		this->Timer->Enabled = true;
		
	}
	private: System::Void btnPause_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Timer->Enabled = false;
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		second = 0;
		minute = 1;
		Sec = Convert::ToString(second);
		Min = Convert::ToString(minute);
		this->lbTime->Text = "01 : 00";
		this->Timer->Enabled = false;
		this->lbWarning->Visible = false;
		this->TimeGroup->Visible = true;
	}
	private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void btn15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbTime->Text = "15 : 00";
		minute = 15;
		second = 00;
	}
	private: System::Void btn30_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbTime->Text = "30 : 00";
		minute = 30;
		second = 00;
	}
	private: System::Void btn45_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbTime->Text = "45 : 00";
		minute = 45;
		second = 00;
	}
	private: System::Void btnCustom_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbMin->Visible = "true";
		this->tbSec->Visible = "true";
		this->lbColon->Visible = "true";
		this->btnSet->Visible = "true";
	}
	private: System::Void tbCustom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void tbSec_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnSet_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ CustomMin = this->tbMin->Text;
		String^ CustomSec = this->tbSec->Text;
		this->lbTime->Text = CustomMin + " : " + CustomSec;
		minute = Convert::ToInt16(CustomMin);
		second = Convert::ToInt16(CustomSec);
	}

	private: System::Void TimeGroup_Enter(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void TimerApp_Load(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
