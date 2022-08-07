#pragma once
namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ColorPick
	/// </summary>
	public ref class ColorPick : public System::Windows::Forms::Form
	{
	public:
		Form^ f1;
		ColorPick(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ColorPick(Form^ fa) //fa = colorpick --- fb = timerapp
		{
			f1 = fa;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ColorPick()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackBarR;
	private: System::Windows::Forms::TrackBar^ trackBarG;
	private: System::Windows::Forms::TrackBar^ trackBarB;



	private: System::Windows::Forms::TextBox^ txtR;
	private: System::Windows::Forms::TextBox^ txtG;
	private: System::Windows::Forms::TextBox^ txtB;



	private: System::Windows::Forms::Panel^ pnlColor;
	private: System::Windows::Forms::Button^ btnHTML;


	private: System::Windows::Forms::Button^ btnRGB;

	private: System::Windows::Forms::Button^ btnReset;

	private: System::Windows::Forms::Button^ btnBackground;
	private: System::Windows::Forms::Button^ btnForeground;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBarR = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarG = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarB = (gcnew System::Windows::Forms::TrackBar());
			this->txtR = (gcnew System::Windows::Forms::TextBox());
			this->txtG = (gcnew System::Windows::Forms::TextBox());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->pnlColor = (gcnew System::Windows::Forms::Panel());
			this->btnHTML = (gcnew System::Windows::Forms::Button());
			this->btnRGB = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnBackground = (gcnew System::Windows::Forms::Button());
			this->btnForeground = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarB))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Red";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Green";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Blue";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(221, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"R:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(221, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"G:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(221, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"B:";
			// 
			// trackBarR
			// 
			this->trackBarR->Location = System::Drawing::Point(-1, 28);
			this->trackBarR->Maximum = 255;
			this->trackBarR->Name = L"trackBarR";
			this->trackBarR->Size = System::Drawing::Size(216, 56);
			this->trackBarR->TabIndex = 6;
			this->trackBarR->Scroll += gcnew System::EventHandler(this, &ColorPick::trackBarR_Scroll);
			this->trackBarR->ValueChanged += gcnew System::EventHandler(this, &ColorPick::trackBarR_ValueChanged);
			// 
			// trackBarG
			// 
			this->trackBarG->Location = System::Drawing::Point(-1, 107);
			this->trackBarG->Maximum = 255;
			this->trackBarG->Name = L"trackBarG";
			this->trackBarG->Size = System::Drawing::Size(216, 56);
			this->trackBarG->TabIndex = 7;
			this->trackBarG->Scroll += gcnew System::EventHandler(this, &ColorPick::trackBarR_Scroll);
			this->trackBarG->ValueChanged += gcnew System::EventHandler(this, &ColorPick::trackBarR_ValueChanged);
			// 
			// trackBarB
			// 
			this->trackBarB->Location = System::Drawing::Point(0, 185);
			this->trackBarB->Maximum = 255;
			this->trackBarB->Name = L"trackBarB";
			this->trackBarB->Size = System::Drawing::Size(213, 56);
			this->trackBarB->TabIndex = 8;
			this->trackBarB->Scroll += gcnew System::EventHandler(this, &ColorPick::trackBarR_Scroll);
			this->trackBarB->ValueChanged += gcnew System::EventHandler(this, &ColorPick::trackBarR_ValueChanged);
			// 
			// txtR
			// 
			this->txtR->Location = System::Drawing::Point(247, 29);
			this->txtR->Name = L"txtR";
			this->txtR->ReadOnly = true;
			this->txtR->Size = System::Drawing::Size(100, 22);
			this->txtR->TabIndex = 9;
			this->txtR->TextChanged += gcnew System::EventHandler(this, &ColorPick::ColorChange);
			// 
			// txtG
			// 
			this->txtG->Location = System::Drawing::Point(247, 107);
			this->txtG->Name = L"txtG";
			this->txtG->ReadOnly = true;
			this->txtG->Size = System::Drawing::Size(100, 22);
			this->txtG->TabIndex = 10;
			this->txtG->TextChanged += gcnew System::EventHandler(this, &ColorPick::ColorChange);
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(247, 185);
			this->txtB->Name = L"txtB";
			this->txtB->ReadOnly = true;
			this->txtB->Size = System::Drawing::Size(100, 22);
			this->txtB->TabIndex = 11;
			this->txtB->TextChanged += gcnew System::EventHandler(this, &ColorPick::ColorChange);
			// 
			// pnlColor
			// 
			this->pnlColor->BackColor = System::Drawing::Color::Black;
			this->pnlColor->Location = System::Drawing::Point(11, 237);
			this->pnlColor->Name = L"pnlColor";
			this->pnlColor->Size = System::Drawing::Size(205, 104);
			this->pnlColor->TabIndex = 12;
			// 
			// btnHTML
			// 
			this->btnHTML->Location = System::Drawing::Point(-1, 349);
			this->btnHTML->Name = L"btnHTML";
			this->btnHTML->Size = System::Drawing::Size(100, 45);
			this->btnHTML->TabIndex = 13;
			this->btnHTML->Text = L"Copy HTML";
			this->btnHTML->UseVisualStyleBackColor = true;
			this->btnHTML->Click += gcnew System::EventHandler(this, &ColorPick::btnHTML_Click);
			// 
			// btnRGB
			// 
			this->btnRGB->Location = System::Drawing::Point(115, 349);
			this->btnRGB->Name = L"btnRGB";
			this->btnRGB->Size = System::Drawing::Size(100, 45);
			this->btnRGB->TabIndex = 14;
			this->btnRGB->Text = L"Copy RGB";
			this->btnRGB->UseVisualStyleBackColor = true;
			this->btnRGB->Click += gcnew System::EventHandler(this, &ColorPick::btnRGB_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(236, 349);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 45);
			this->btnReset->TabIndex = 15;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &ColorPick::btnReset_Click);
			// 
			// btnBackground
			// 
			this->btnBackground->Location = System::Drawing::Point(222, 237);
			this->btnBackground->Name = L"btnBackground";
			this->btnBackground->Size = System::Drawing::Size(125, 30);
			this->btnBackground->TabIndex = 16;
			this->btnBackground->Text = L"Set Background";
			this->btnBackground->UseVisualStyleBackColor = true;
			this->btnBackground->Click += gcnew System::EventHandler(this, &ColorPick::btnBackground_Click);
			// 
			// btnForeground
			// 
			this->btnForeground->Location = System::Drawing::Point(222, 311);
			this->btnForeground->Name = L"btnForeground";
			this->btnForeground->Size = System::Drawing::Size(125, 30);
			this->btnForeground->TabIndex = 17;
			this->btnForeground->Text = L"Set Foreground";
			this->btnForeground->UseVisualStyleBackColor = true;
			this->btnForeground->Click += gcnew System::EventHandler(this, &ColorPick::btnForeground_Click);
			// 
			// ColorPick
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 409);
			this->Controls->Add(this->btnForeground);
			this->Controls->Add(this->btnBackground);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnRGB);
			this->Controls->Add(this->btnHTML);
			this->Controls->Add(this->pnlColor);
			this->Controls->Add(this->txtB);
			this->Controls->Add(this->txtG);
			this->Controls->Add(this->txtR);
			this->Controls->Add(this->trackBarB);
			this->Controls->Add(this->trackBarG);
			this->Controls->Add(this->trackBarR);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(370, 456);
			this->MinimumSize = System::Drawing::Size(370, 456);
			this->Name = L"ColorPick";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Color Dialog";
			this->Load += gcnew System::EventHandler(this, &ColorPick::ColorPick_Load);
			this->TextChanged += gcnew System::EventHandler(this, &ColorPick::ColorChange);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Color color;
		bool changed = false;
		public: event EventHandler^ ValueChanged;
	private: System::Void trackBarR_Scroll(System::Object^ sender, System::EventArgs^ e) {
		ValueChanged(this, EventArgs::Empty);
	}

	private: System::Void trackBarR_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		color = Color::FromArgb(255, trackBarR->Value, trackBarG->Value, trackBarB->Value);

		pnlColor->BackColor = color;

		txtR->Text = color.R.ToString();
		txtG->Text = color.G.ToString();
		txtB->Text = color.B.ToString();
	}

	private: System::Void btnHTML_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText(ColorTranslator::ToHtml(color));
	}
	private: System::Void btnRGB_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText(color.R.ToString() + ", " + color.G.ToString() + ", " + color.B.ToString());
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}

	private: System::Void btnBackground_Click(System::Object^ sender, System::EventArgs^ e) {
		f1->BackColor = color;
		Close();
	}
	private: System::Void btnForeground_Click(System::Object^ sender, System::EventArgs^ e) {
		f1->ForeColor = color;
		Close();
	}

	public: Color^ getcolor() {
		return color;
	}

	public: bool color_changed() {
		return changed;
	}
	private: System::Void ColorChange(System::Object^ sender, System::EventArgs^ e) {
		bool changed = true;
	}

	private: System::Void ColorPick_Load(System::Object^ sender, System::EventArgs^ e) {
	}	
};
}