#pragma once

namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Counter
	/// </summary>
	public ref class Counter : public System::Windows::Forms::Form
	{
	public:
		Counter(void)
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
		~Counter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSub;
	protected:
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ tbCounterName;
	private: System::Windows::Forms::Label^ lbDisplay;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->tbCounterName = (gcnew System::Windows::Forms::TextBox());
			this->lbDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::Black;
			this->btnSub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->ForeColor = System::Drawing::Color::White;
			this->btnSub->Location = System::Drawing::Point(95, 205);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(50, 50);
			this->btnSub->TabIndex = 7;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &Counter::btnSub_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Black;
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(289, 205);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(50, 50);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"+";
			this->btnAdd->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Counter::btnAdd_Click);
			// 
			// tbCounterName
			// 
			this->tbCounterName->BackColor = System::Drawing::Color::Black;
			this->tbCounterName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCounterName->ForeColor = System::Drawing::Color::White;
			this->tbCounterName->Location = System::Drawing::Point(121, 140);
			this->tbCounterName->Multiline = true;
			this->tbCounterName->Name = L"tbCounterName";
			this->tbCounterName->Size = System::Drawing::Size(200, 40);
			this->tbCounterName->TabIndex = 5;
			this->tbCounterName->Text = L"My Counter";
			this->tbCounterName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbDisplay
			// 
			this->lbDisplay->AutoSize = true;
			this->lbDisplay->BackColor = System::Drawing::Color::Black;
			this->lbDisplay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDisplay->ForeColor = System::Drawing::Color::White;
			this->lbDisplay->Location = System::Drawing::Point(200, 203);
			this->lbDisplay->Name = L"lbDisplay";
			this->lbDisplay->Size = System::Drawing::Size(44, 49);
			this->lbDisplay->TabIndex = 4;
			this->lbDisplay->Text = L"0";
			// 
			// Counter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(432, 483);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->tbCounterName);
			this->Controls->Add(this->lbDisplay);
			this->ForeColor = System::Drawing::Color::LightGray;
			this->MaximumSize = System::Drawing::Size(450, 530);
			this->MinimumSize = System::Drawing::Size(450, 530);
			this->Name = L"Counter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"My Counter";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int count;
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		count++;
		this->lbDisplay->Text = count.ToString();
	}
	private: System::Void btnSub_Click(System::Object^ sender, System::EventArgs^ e) {
			count--;
			this->lbDisplay->Text = count.ToString();
	}
};
}
