#pragma once
#include"MainInterface.h"
namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Welcome
	/// </summary>
	public ref class Welcome : public System::Windows::Forms::Form
	{
	public:
		Welcome(void)
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
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Timer^ WelcomeTimer;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlBase;
	private: System::Windows::Forms::Panel^ pnlPB;
	private: System::ComponentModel::IContainer^ components;
	protected:


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->WelcomeTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlBase = (gcnew System::Windows::Forms::Panel());
			this->pnlPB = (gcnew System::Windows::Forms::Panel());
			this->pnlBase->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// WelcomeTimer
			// 
			this->WelcomeTimer->Interval = 10;
			this->WelcomeTimer->Tick += gcnew System::EventHandler(this, &Welcome::WelcomeTimer_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(84, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Your productivity companion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(113, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ProApp";
			// 
			// pnlBase
			// 
			this->pnlBase->Controls->Add(this->pnlPB);
			this->pnlBase->Location = System::Drawing::Point(49, 74);
			this->pnlBase->Name = L"pnlBase";
			this->pnlBase->Size = System::Drawing::Size(255, 30);
			this->pnlBase->TabIndex = 6;
			// 
			// pnlPB
			// 
			this->pnlPB->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->pnlPB->Location = System::Drawing::Point(0, 0);
			this->pnlPB->Name = L"pnlPB";
			this->pnlPB->Size = System::Drawing::Size(10, 30);
			this->pnlPB->TabIndex = 7;
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(369, 188);
			this->Controls->Add(this->pnlBase);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::No;
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Welcome";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &Welcome::Welcome_Load);
			this->pnlBase->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MainInterface^ MI ;
	private: System::Void Welcome_Load(System::Object^ sender, System::EventArgs^ e) {
		this->pnlPB->Width = 0;
		this->WelcomeTimer->Start();
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void WelcomeTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (pnlPB->Width < pnlBase->Width) {
			pnlPB->Width++;
		}
		else {
			WelcomeTimer->Stop();
			this->Hide();
			MI = gcnew MainInterface();
			MI->Show();
		}
	}
	};
}
