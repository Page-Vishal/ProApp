#pragma once
#include"ColorPick.h"
#include"TimerApp.h"
#include"todoh.h"
#include"Note.h"
#include"Counter.h"
#include"Calculator.h"
#include"AboutProApp.h"
#include"AboutNH.h"
#include"ErrorS.h"
namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace Noteapp;
	using namespace Calculatorz;
	using namespace ProApp;

	/// <summary>
	/// Summary for MainInterface
	/// </summary>
	public ref class MainInterface : public System::Windows::Forms::Form
	{
	public:
		MainInterface(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainInterface()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnTimer;





	protected:





	private: System::Windows::Forms::Button^ btnNote;
	private: System::Windows::Forms::Button^ btnTodo;


	private: System::Windows::Forms::Button^ btnMore;

	private: System::Windows::Forms::LinkLabel^ lnkLblAU;

	private: System::Windows::Forms::Label^ lbMore;
	private: System::Windows::Forms::Label^ lbNote;
	private: System::Windows::Forms::Label^ lbTodo;

	private: System::Windows::Forms::ContextMenuStrip^ CMSColour;
	private: System::Windows::Forms::ToolStripMenuItem^ colourSettingToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colourToolStripMenuItem;
	private: System::Windows::Forms::Label^ lbTimer;
	private: System::Windows::Forms::Label^ lbStart;
	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::ToolStripMenuItem^ extrasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ miniCounterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ proAppToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nightHustlersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportAnErrorToolStripMenuItem;


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
			this->btnTimer = (gcnew System::Windows::Forms::Button());
			this->btnNote = (gcnew System::Windows::Forms::Button());
			this->btnTodo = (gcnew System::Windows::Forms::Button());
			this->btnMore = (gcnew System::Windows::Forms::Button());
			this->lnkLblAU = (gcnew System::Windows::Forms::LinkLabel());
			this->lbMore = (gcnew System::Windows::Forms::Label());
			this->lbNote = (gcnew System::Windows::Forms::Label());
			this->lbTodo = (gcnew System::Windows::Forms::Label());
			this->CMSColour = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->colourSettingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colourToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extrasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miniCounterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->proAppToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nightHustlersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportAnErrorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lbTimer = (gcnew System::Windows::Forms::Label());
			this->lbStart = (gcnew System::Windows::Forms::Label());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->CMSColour->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnTimer
			// 
			this->btnTimer->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnTimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTimer->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTimer->Location = System::Drawing::Point(56, 182);
			this->btnTimer->Name = L"btnTimer";
			this->btnTimer->Size = System::Drawing::Size(100, 60);
			this->btnTimer->TabIndex = 5;
			this->btnTimer->Text = L"⏲️";
			this->btnTimer->UseVisualStyleBackColor = false;
			this->btnTimer->Click += gcnew System::EventHandler(this, &MainInterface::btnTimer_Click);
			// 
			// btnNote
			// 
			this->btnNote->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnNote->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNote->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnNote->Location = System::Drawing::Point(240, 182);
			this->btnNote->Name = L"btnNote";
			this->btnNote->Size = System::Drawing::Size(100, 60);
			this->btnNote->TabIndex = 6;
			this->btnNote->Text = L"🗒️";
			this->btnNote->UseVisualStyleBackColor = false;
			this->btnNote->Click += gcnew System::EventHandler(this, &MainInterface::btnNote_Click);
			// 
			// btnTodo
			// 
			this->btnTodo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnTodo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTodo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTodo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnTodo->Location = System::Drawing::Point(56, 312);
			this->btnTodo->Name = L"btnTodo";
			this->btnTodo->Size = System::Drawing::Size(100, 60);
			this->btnTodo->TabIndex = 7;
			this->btnTodo->Text = L"📝";
			this->btnTodo->UseVisualStyleBackColor = false;
			this->btnTodo->Click += gcnew System::EventHandler(this, &MainInterface::btnTodo_Click);
			// 
			// btnMore
			// 
			this->btnMore->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnMore->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMore->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMore->Location = System::Drawing::Point(240, 312);
			this->btnMore->Name = L"btnMore";
			this->btnMore->Size = System::Drawing::Size(100, 60);
			this->btnMore->TabIndex = 8;
			this->btnMore->Text = L"🧮";
			this->btnMore->UseVisualStyleBackColor = false;
			this->btnMore->Click += gcnew System::EventHandler(this, &MainInterface::btnMore_Click);
			// 
			// lnkLblAU
			// 
			this->lnkLblAU->AutoSize = true;
			this->lnkLblAU->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnkLblAU->LinkColor = System::Drawing::Color::White;
			this->lnkLblAU->Location = System::Drawing::Point(336, 451);
			this->lnkLblAU->Name = L"lnkLblAU";
			this->lnkLblAU->Size = System::Drawing::Size(84, 23);
			this->lnkLblAU->TabIndex = 9;
			this->lnkLblAU->TabStop = true;
			this->lnkLblAU->Text = L"About Us";
			this->lnkLblAU->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainInterface::lnkLblAU_LinkClicked);
			// 
			// lbMore
			// 
			this->lbMore->AutoSize = true;
			this->lbMore->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMore->Location = System::Drawing::Point(226, 375);
			this->lbMore->Name = L"lbMore";
			this->lbMore->Size = System::Drawing::Size(134, 21);
			this->lbMore->TabIndex = 4;
			this->lbMore->Text = L"CALCULATOR";
			// 
			// lbNote
			// 
			this->lbNote->AutoSize = true;
			this->lbNote->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNote->Location = System::Drawing::Point(262, 245);
			this->lbNote->Name = L"lbNote";
			this->lbNote->Size = System::Drawing::Size(61, 21);
			this->lbNote->TabIndex = 3;
			this->lbNote->Text = L"Note";
			// 
			// lbTodo
			// 
			this->lbTodo->AutoSize = true;
			this->lbTodo->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTodo->Location = System::Drawing::Point(76, 375);
			this->lbTodo->Name = L"lbTodo";
			this->lbTodo->Size = System::Drawing::Size(64, 21);
			this->lbTodo->TabIndex = 2;
			this->lbTodo->Text = L"Todo";
			// 
			// CMSColour
			// 
			this->CMSColour->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CMSColour->ImageScalingSize = System::Drawing::Size(20, 20);
			this->CMSColour->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->colourSettingToolStripMenuItem });
			this->CMSColour->Name = L"CMSColour";
			this->CMSColour->Size = System::Drawing::Size(174, 28);
			// 
			// colourSettingToolStripMenuItem
			// 
			this->colourSettingToolStripMenuItem->Name = L"colourSettingToolStripMenuItem";
			this->colourSettingToolStripMenuItem->Size = System::Drawing::Size(173, 24);
			this->colourSettingToolStripMenuItem->Text = L"Colour Setting";
			this->colourSettingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainInterface::colourSettingToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->settingsToolStripMenuItem,
					this->extrasToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(432, 28);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->colourToolStripMenuItem });
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// colourToolStripMenuItem
			// 
			this->colourToolStripMenuItem->Name = L"colourToolStripMenuItem";
			this->colourToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->colourToolStripMenuItem->Text = L"Colour";
			this->colourToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainInterface::colourToolStripMenuItem_Click);
			// 
			// extrasToolStripMenuItem
			// 
			this->extrasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->miniCounterToolStripMenuItem });
			this->extrasToolStripMenuItem->Name = L"extrasToolStripMenuItem";
			this->extrasToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->extrasToolStripMenuItem->Text = L"Extras";
			// 
			// miniCounterToolStripMenuItem
			// 
			this->miniCounterToolStripMenuItem->Name = L"miniCounterToolStripMenuItem";
			this->miniCounterToolStripMenuItem->Size = System::Drawing::Size(177, 26);
			this->miniCounterToolStripMenuItem->Text = L"Mini Counter";
			this->miniCounterToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainInterface::miniCounterToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->proAppToolStripMenuItem,
					this->nightHustlersToolStripMenuItem, this->reportAnErrorToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// proAppToolStripMenuItem
			// 
			this->proAppToolStripMenuItem->Name = L"proAppToolStripMenuItem";
			this->proAppToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->proAppToolStripMenuItem->Text = L"ProApp";
			this->proAppToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainInterface::proAppToolStripMenuItem_Click);
			// 
			// nightHustlersToolStripMenuItem
			// 
			this->nightHustlersToolStripMenuItem->Name = L"nightHustlersToolStripMenuItem";
			this->nightHustlersToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->nightHustlersToolStripMenuItem->Text = L"Night Hustlers";
			this->nightHustlersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainInterface::nightHustlersToolStripMenuItem_Click);
			// 
			// reportAnErrorToolStripMenuItem
			// 
			this->reportAnErrorToolStripMenuItem->Name = L"reportAnErrorToolStripMenuItem";
			this->reportAnErrorToolStripMenuItem->Size = System::Drawing::Size(193, 26);
			this->reportAnErrorToolStripMenuItem->Text = L"Report an Error";
			this->reportAnErrorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainInterface::reportAnErrorToolStripMenuItem_Click);
			// 
			// lbTimer
			// 
			this->lbTimer->AutoSize = true;
			this->lbTimer->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTimer->Location = System::Drawing::Point(72, 245);
			this->lbTimer->Name = L"lbTimer";
			this->lbTimer->Size = System::Drawing::Size(68, 21);
			this->lbTimer->TabIndex = 12;
			this->lbTimer->Text = L"Timer";
			// 
			// lbStart
			// 
			this->lbStart->AutoSize = true;
			this->lbStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbStart->Location = System::Drawing::Point(78, 102);
			this->lbStart->Name = L"lbStart";
			this->lbStart->Size = System::Drawing::Size(262, 22);
			this->lbStart->TabIndex = 14;
			this->lbStart->Text = L"Let\'s Enhance your Productivity";
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->Location = System::Drawing::Point(121, 50);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(160, 42);
			this->lbWelcome->TabIndex = 13;
			this->lbWelcome->Text = L"Pro App";
			// 
			// MainInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(432, 483);
			this->ContextMenuStrip = this->CMSColour;
			this->Controls->Add(this->lbStart);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->lbTimer);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btnTimer);
			this->Controls->Add(this->lnkLblAU);
			this->Controls->Add(this->btnMore);
			this->Controls->Add(this->btnTodo);
			this->Controls->Add(this->btnNote);
			this->Controls->Add(this->lbMore);
			this->Controls->Add(this->lbNote);
			this->Controls->Add(this->lbTodo);
			this->ForeColor = System::Drawing::Color::LightGray;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(450, 530);
			this->MinimumSize = System::Drawing::Size(450, 530);
			this->Name = L"MainInterface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainInterface";
			this->Load += gcnew System::EventHandler(this, &MainInterface::MainInterface_Load);
			this->CMSColour->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ColorPick^ f2;
		TimerApp^ timerapp;
		todoh^ todoz;
		MyForm^ f1;
		Counter^ counter;
		Calculator^ calc;
		AboutProApp^ app;
		AboutNH^ nh;
		ErrorS^ err;
	private: System::Void btnTimer_Click(System::Object^ sender, System::EventArgs^ e) {
		//Timer
		timerapp = gcnew TimerApp();
		timerapp->Show();
	}
	private: System::Void btnTodo_Click(System::Object^ sender, System::EventArgs^ e) {
		//Todo
		todoz = gcnew todoh();
		todoz->Show();
	}

	private: System::Void btnNote_Click(System::Object^ sender, System::EventArgs^ e) {
		//Note Taking
		f1 = gcnew MyForm();
		f1->Show();
	}

	private: System::Void btnMore_Click(System::Object^ sender, System::EventArgs^ e) {
		//Calculator
		calc = gcnew Calculator();
		calc->Show();
	}

	private: System::Void lnkLblAU_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//About Us
		Process::Start("https://nighthustlers.000webhostapp.com/"); //Group link here
	}

	private: System::Void colourSettingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ContextMenuStrip

	}

	private: System::Void colourToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Menu->Colour
		f2 = gcnew ColorPick(this);
		f2->ShowDialog();
	}
	private: System::Void miniCounterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		counter = gcnew Counter();
		counter->Show();
	}


	private: System::Void proAppToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		app = gcnew AboutProApp();
		app->ShowDialog();
	}
	private: System::Void nightHustlersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		nh = gcnew AboutNH();
		nh->ShowDialog();
	}
	private: System::Void reportAnErrorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		err = gcnew ErrorS();
		err->ShowDialog();
	}
private: System::Void MainInterface_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
