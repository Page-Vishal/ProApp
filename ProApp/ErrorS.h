#pragma once

namespace ProApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ErrorS
	/// </summary>
	public ref class ErrorS : public System::Windows::Forms::Form
	{
	public:
		ErrorS(void)
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
		~ErrorS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbError;
	private: System::Windows::Forms::Button^ button2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ErrorS::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbError = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(205, 46);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Report Your Error!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(69, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 92);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Your Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Encountered Error:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(471, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Report";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ErrorS::button1_Click);
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(197, 154);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(210, 28);
			this->tbName->TabIndex = 5;
			// 
			// tbError
			// 
			this->tbError->Location = System::Drawing::Point(83, 253);
			this->tbError->Multiline = true;
			this->tbError->Name = L"tbError";
			this->tbError->Size = System::Drawing::Size(334, 154);
			this->tbError->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(12, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 37);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ErrorS::button2_Click);
			// 
			// ErrorS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(609, 489);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tbError);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ErrorS";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &ErrorS::ErrorS_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ErrorS::ErrorS_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ErrorS::ErrorS_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ErrorS::ErrorS_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ name = "User";
		String^ error = "N / A";
		private: bool dragging = false;
		private: Point^ startpoint = gcnew Point(0, 0);
	private: System::Void ErrorS_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		startpoint = gcnew Point(e->X, e->Y);
	}
	private: System::Void ErrorS_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}
	private: System::Void ErrorS_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point^ p = PointToScreen(e->Location);
			//this->Location = System::Drawing::Point( (p->X) , (p->Y) );
			this->Location = System::Drawing::Point((p->X) - (startpoint->X), (p->Y) - (startpoint->Y));
		}
	}
	private: System::Void ErrorS_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			// This code demonstrates how to create and to write to a text file.
			name = tbName->Text;
			error = tbError->Text;
			StreamWriter^ sw = gcnew StreamWriter("C:\\Program Files\\Night Hustlers\\ProAppx64\\Error.txt");
			sw->Write(name);
			sw->Write("\n");
			sw->Write(error);
			sw->Write("\n");
			sw->Close();

			this->Close();
			MessageBox::Show("Your Error was successfully Reported.", "Report Successfuly", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
