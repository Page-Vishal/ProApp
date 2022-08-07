#pragma once

namespace Calculatorz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^ pnlTop;
    protected:

	protected:


    private: System::Windows::Forms::Button^ btn7;


	private: System::Windows::Forms::Button^ btn8;
    private: System::Windows::Forms::Button^ btn9;

    private: System::Windows::Forms::Button^ btnMul;
    private: System::Windows::Forms::Button^ btn4;


    private: System::Windows::Forms::Button^ btn5;

    private: System::Windows::Forms::Button^ btn6;

    private: System::Windows::Forms::Button^ btnSub;
    private: System::Windows::Forms::Button^ btn1;


    private: System::Windows::Forms::Button^ btn2;

    private: System::Windows::Forms::Button^ btn3;

    private: System::Windows::Forms::Button^ btnAdd;
    private: System::Windows::Forms::Button^ btn0;
    private: System::Windows::Forms::Button^ btnDot;

    private: System::Windows::Forms::Button^ btnMod;





    private: System::Windows::Forms::Button^ btnEqu;

    private: System::Windows::Forms::Button^ btnC;


    private: System::Windows::Forms::Button^ btnDiv;




    private: System::Windows::Forms::TextBox^ tbtop;
    private: System::Windows::Forms::Button^ btnCorrect;

    private: System::Windows::Forms::Button^ btnPM;
    private: System::Windows::Forms::Button^ btnCopy;
    private: System::Windows::Forms::Timer^ Delay;
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
            this->pnlTop = (gcnew System::Windows::Forms::Panel());
            this->btnCopy = (gcnew System::Windows::Forms::Button());
            this->tbtop = (gcnew System::Windows::Forms::TextBox());
            this->btnCorrect = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->btnMul = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btnSub = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btnAdd = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->btnDot = (gcnew System::Windows::Forms::Button());
            this->btnMod = (gcnew System::Windows::Forms::Button());
            this->btnEqu = (gcnew System::Windows::Forms::Button());
            this->btnC = (gcnew System::Windows::Forms::Button());
            this->btnDiv = (gcnew System::Windows::Forms::Button());
            this->btnPM = (gcnew System::Windows::Forms::Button());
            this->Delay = (gcnew System::Windows::Forms::Timer(this->components));
            this->pnlTop->SuspendLayout();
            this->SuspendLayout();
            // 
            // pnlTop
            // 
            this->pnlTop->Controls->Add(this->btnCopy);
            this->pnlTop->Controls->Add(this->tbtop);
            this->pnlTop->Location = System::Drawing::Point(38, 22);
            this->pnlTop->Name = L"pnlTop";
            this->pnlTop->Size = System::Drawing::Size(359, 84);
            this->pnlTop->TabIndex = 2;
            // 
            // btnCopy
            // 
            this->btnCopy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnCopy->FlatAppearance->BorderSize = 0;
            this->btnCopy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnCopy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnCopy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCopy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCopy->ForeColor = System::Drawing::Color::Gold;
            this->btnCopy->Location = System::Drawing::Point(3, 0);
            this->btnCopy->Name = L"btnCopy";
            this->btnCopy->Size = System::Drawing::Size(82, 37);
            this->btnCopy->TabIndex = 8;
            this->btnCopy->Text = L"COPY";
            this->btnCopy->UseVisualStyleBackColor = false;
            this->btnCopy->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
            // 
            // tbtop
            // 
            this->tbtop->BackColor = System::Drawing::Color::Black;
            this->tbtop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->tbtop->CausesValidation = false;
            this->tbtop->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->tbtop->Font = (gcnew System::Drawing::Font(L"Helvetica", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbtop->ForeColor = System::Drawing::Color::White;
            this->tbtop->Location = System::Drawing::Point(3, 38);
            this->tbtop->MaxLength = 10;
            this->tbtop->Name = L"tbtop";
            this->tbtop->ReadOnly = true;
            this->tbtop->Size = System::Drawing::Size(353, 43);
            this->tbtop->TabIndex = 0;
            this->tbtop->Text = L"0";
            this->tbtop->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // btnCorrect
            // 
            this->btnCorrect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnCorrect->FlatAppearance->BorderSize = 0;
            this->btnCorrect->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnCorrect->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnCorrect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCorrect->Font = (gcnew System::Drawing::Font(L"Helvetica", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCorrect->ForeColor = System::Drawing::Color::White;
            this->btnCorrect->Location = System::Drawing::Point(38, 130);
            this->btnCorrect->Name = L"btnCorrect";
            this->btnCorrect->Size = System::Drawing::Size(75, 50);
            this->btnCorrect->TabIndex = 4;
            this->btnCorrect->Text = L"⌫";
            this->btnCorrect->UseVisualStyleBackColor = false;
            this->btnCorrect->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
            // 
            // btn7
            // 
            this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn7->FlatAppearance->BorderSize = 0;
            this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn7->ForeColor = System::Drawing::Color::White;
            this->btn7->Location = System::Drawing::Point(38, 198);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(75, 50);
            this->btn7->TabIndex = 3;
            this->btn7->Text = L"7";
            this->btn7->UseVisualStyleBackColor = false;
            this->btn7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btn8
            // 
            this->btn8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn8->FlatAppearance->BorderSize = 0;
            this->btn8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->ForeColor = System::Drawing::Color::White;
            this->btn8->Location = System::Drawing::Point(131, 198);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(75, 50);
            this->btn8->TabIndex = 4;
            this->btn8->Text = L"8";
            this->btn8->UseVisualStyleBackColor = false;
            this->btn8->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btn9
            // 
            this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn9->FlatAppearance->BorderSize = 0;
            this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->ForeColor = System::Drawing::Color::White;
            this->btn9->Location = System::Drawing::Point(224, 198);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(75, 50);
            this->btn9->TabIndex = 5;
            this->btn9->Text = L"9";
            this->btn9->UseVisualStyleBackColor = false;
            this->btn9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btnMul
            // 
            this->btnMul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnMul->FlatAppearance->BorderSize = 0;
            this->btnMul->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnMul->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnMul->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMul->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->btnMul->Location = System::Drawing::Point(322, 198);
            this->btnMul->Name = L"btnMul";
            this->btnMul->Size = System::Drawing::Size(75, 50);
            this->btnMul->TabIndex = 6;
            this->btnMul->Text = L"X";
            this->btnMul->UseVisualStyleBackColor = false;
            this->btnMul->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
            // 
            // btn4
            // 
            this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn4->FlatAppearance->BorderSize = 0;
            this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->ForeColor = System::Drawing::Color::White;
            this->btn4->Location = System::Drawing::Point(38, 263);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(75, 50);
            this->btn4->TabIndex = 3;
            this->btn4->Text = L"4";
            this->btn4->UseVisualStyleBackColor = false;
            this->btn4->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btn5
            // 
            this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn5->FlatAppearance->BorderSize = 0;
            this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->ForeColor = System::Drawing::Color::White;
            this->btn5->Location = System::Drawing::Point(131, 263);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(75, 50);
            this->btn5->TabIndex = 4;
            this->btn5->Text = L"5";
            this->btn5->UseVisualStyleBackColor = false;
            this->btn5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btn6
            // 
            this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn6->FlatAppearance->BorderSize = 0;
            this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->ForeColor = System::Drawing::Color::White;
            this->btn6->Location = System::Drawing::Point(224, 263);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(75, 50);
            this->btn6->TabIndex = 5;
            this->btn6->Text = L"6";
            this->btn6->UseVisualStyleBackColor = false;
            this->btn6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btnSub
            // 
            this->btnSub->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnSub->FlatAppearance->BorderSize = 0;
            this->btnSub->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnSub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnSub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSub->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->btnSub->Location = System::Drawing::Point(322, 263);
            this->btnSub->Name = L"btnSub";
            this->btnSub->Size = System::Drawing::Size(75, 50);
            this->btnSub->TabIndex = 6;
            this->btnSub->Text = L"-";
            this->btnSub->UseVisualStyleBackColor = false;
            this->btnSub->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
            // 
            // btn1
            // 
            this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn1->FlatAppearance->BorderSize = 0;
            this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->ForeColor = System::Drawing::Color::White;
            this->btn1->Location = System::Drawing::Point(38, 332);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(75, 50);
            this->btn1->TabIndex = 3;
            this->btn1->Text = L"1";
            this->btn1->UseVisualStyleBackColor = false;
            this->btn1->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btn2
            // 
            this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn2->FlatAppearance->BorderSize = 0;
            this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->ForeColor = System::Drawing::Color::White;
            this->btn2->Location = System::Drawing::Point(131, 332);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(75, 50);
            this->btn2->TabIndex = 4;
            this->btn2->Text = L"2";
            this->btn2->UseVisualStyleBackColor = false;
            this->btn2->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btn3
            // 
            this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn3->FlatAppearance->BorderSize = 0;
            this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->ForeColor = System::Drawing::Color::White;
            this->btn3->Location = System::Drawing::Point(224, 332);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(75, 50);
            this->btn3->TabIndex = 5;
            this->btn3->Text = L"3";
            this->btn3->UseVisualStyleBackColor = false;
            this->btn3->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btnAdd
            // 
            this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnAdd->FlatAppearance->BorderSize = 0;
            this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->btnAdd->Location = System::Drawing::Point(322, 332);
            this->btnAdd->Name = L"btnAdd";
            this->btnAdd->Size = System::Drawing::Size(75, 50);
            this->btnAdd->TabIndex = 6;
            this->btnAdd->Text = L"+";
            this->btnAdd->UseVisualStyleBackColor = false;
            this->btnAdd->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
            // 
            // btn0
            // 
            this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btn0->FlatAppearance->BorderSize = 0;
            this->btn0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btn0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->ForeColor = System::Drawing::Color::White;
            this->btn0->Location = System::Drawing::Point(38, 400);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(75, 50);
            this->btn0->TabIndex = 3;
            this->btn0->Text = L"0";
            this->btn0->UseVisualStyleBackColor = false;
            this->btn0->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
            // 
            // btnDot
            // 
            this->btnDot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnDot->FlatAppearance->BorderSize = 0;
            this->btnDot->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnDot->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDot->ForeColor = System::Drawing::Color::White;
            this->btnDot->Location = System::Drawing::Point(131, 400);
            this->btnDot->Name = L"btnDot";
            this->btnDot->Size = System::Drawing::Size(75, 50);
            this->btnDot->TabIndex = 4;
            this->btnDot->Text = L".";
            this->btnDot->UseVisualStyleBackColor = false;
            this->btnDot->Click += gcnew System::EventHandler(this, &Calculator::btnDot_Click);
            // 
            // btnMod
            // 
            this->btnMod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnMod->FlatAppearance->BorderSize = 0;
            this->btnMod->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnMod->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMod->ForeColor = System::Drawing::Color::White;
            this->btnMod->Location = System::Drawing::Point(224, 400);
            this->btnMod->Name = L"btnMod";
            this->btnMod->Size = System::Drawing::Size(75, 50);
            this->btnMod->TabIndex = 5;
            this->btnMod->Text = L"mod";
            this->btnMod->UseVisualStyleBackColor = false;
            this->btnMod->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
            // 
            // btnEqu
            // 
            this->btnEqu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnEqu->FlatAppearance->BorderSize = 0;
            this->btnEqu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnEqu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnEqu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnEqu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEqu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->btnEqu->Location = System::Drawing::Point(322, 400);
            this->btnEqu->Name = L"btnEqu";
            this->btnEqu->Size = System::Drawing::Size(75, 50);
            this->btnEqu->TabIndex = 6;
            this->btnEqu->Text = L"=";
            this->btnEqu->UseVisualStyleBackColor = false;
            this->btnEqu->Click += gcnew System::EventHandler(this, &Calculator::btnEqu_Click);
            // 
            // btnC
            // 
            this->btnC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnC->FlatAppearance->BorderSize = 0;
            this->btnC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(178)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnC->Location = System::Drawing::Point(131, 130);
            this->btnC->Name = L"btnC";
            this->btnC->Size = System::Drawing::Size(75, 50);
            this->btnC->TabIndex = 3;
            this->btnC->Text = L"C";
            this->btnC->UseVisualStyleBackColor = false;
            this->btnC->Click += gcnew System::EventHandler(this, &Calculator::btnC_Click);
            // 
            // btnDiv
            // 
            this->btnDiv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnDiv->FlatAppearance->BorderSize = 0;
            this->btnDiv->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnDiv->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDiv->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->btnDiv->Location = System::Drawing::Point(322, 130);
            this->btnDiv->Name = L"btnDiv";
            this->btnDiv->Size = System::Drawing::Size(75, 50);
            this->btnDiv->TabIndex = 6;
            this->btnDiv->Text = L"÷";
            this->btnDiv->UseVisualStyleBackColor = false;
            this->btnDiv->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
            // 
            // btnPM
            // 
            this->btnPM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
                static_cast<System::Int32>(static_cast<System::Byte>(25)));
            this->btnPM->FlatAppearance->BorderSize = 0;
            this->btnPM->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(4)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
            this->btnPM->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
            this->btnPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPM->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
                static_cast<System::Int32>(static_cast<System::Byte>(171)));
            this->btnPM->Location = System::Drawing::Point(224, 130);
            this->btnPM->Name = L"btnPM";
            this->btnPM->Size = System::Drawing::Size(75, 50);
            this->btnPM->TabIndex = 7;
            this->btnPM->Text = L"±";
            this->btnPM->UseVisualStyleBackColor = false;
            this->btnPM->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
            // 
            // Delay
            // 
            this->Delay->Tick += gcnew System::EventHandler(this, &Calculator::Delay_Tick);
            // 
            // Calculator
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Black;
            this->ClientSize = System::Drawing::Size(432, 483);
            this->Controls->Add(this->btnPM);
            this->Controls->Add(this->btnCorrect);
            this->Controls->Add(this->btnEqu);
            this->Controls->Add(this->btnAdd);
            this->Controls->Add(this->btnSub);
            this->Controls->Add(this->btnDiv);
            this->Controls->Add(this->btnMul);
            this->Controls->Add(this->btnMod);
            this->Controls->Add(this->btnDot);
            this->Controls->Add(this->btn3);
            this->Controls->Add(this->btn2);
            this->Controls->Add(this->btn6);
            this->Controls->Add(this->btn0);
            this->Controls->Add(this->btn5);
            this->Controls->Add(this->btn1);
            this->Controls->Add(this->btn9);
            this->Controls->Add(this->btn4);
            this->Controls->Add(this->btn8);
            this->Controls->Add(this->btnC);
            this->Controls->Add(this->btn7);
            this->Controls->Add(this->pnlTop);
            this->ForeColor = System::Drawing::Color::White;
            this->MaximumSize = System::Drawing::Size(450, 530);
            this->MinimumSize = System::Drawing::Size(450, 530);
            this->Name = L"Calculator";
            this->Text = L"Calculator";
            this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
            this->pnlTop->ResumeLayout(false);
            this->pnlTop->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
        double firstDigit, secondDigit, result;
        String^ operators;
        int count = 0;

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
        Button^ Numbers = safe_cast<Button^>(sender) ;
        if (this->tbtop->Text == "0") {
            tbtop->Text = Numbers->Text ;
        }
        else
        {
            tbtop->Text = tbtop->Text + Numbers->Text;
        }
    }
    private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
        Button^ NumbersOp = safe_cast<Button^>(sender);
        firstDigit = Double::Parse(tbtop->Text);
        tbtop->Text = "";
        operators = NumbersOp->Text;
    }
    private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!tbtop->Text->Contains("."))
        {
            tbtop->Text = tbtop->Text + ".";
        }
    }

    private: System::Void btnEqu_Click(System::Object^ sender, System::EventArgs^ e) {
        double temp;
        temp = firstDigit;
        secondDigit = Double::Parse(tbtop->Text);

        if (operators == "+") {
            result = firstDigit + secondDigit;
            tbtop->Text = System::Convert::ToString(result);
        }
        else if (operators == "-") {
            result = firstDigit - secondDigit;
            tbtop->Text = System::Convert::ToString(result);
        }
        else if (operators == "X") {
            result = firstDigit * secondDigit;
            tbtop->Text = System::Convert::ToString(result);
        }
        else if (operators == "÷") {
            result = firstDigit / secondDigit;
            tbtop->Text = System::Convert::ToString(result);
        }
        else if (operators == "mod") {

            result = System::Convert::ToInt32(firstDigit) / Convert::ToInt32(secondDigit);
            result = firstDigit - ( result * Convert::ToInt32(secondDigit) );
            tbtop->Text = System::Convert::ToString(result);
        }
    }
    private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
        this->tbtop->Text = "0";
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tbtop->Text->Length > 0) {
            tbtop->Text = tbtop->Text->Remove(tbtop->Text->Length - 1, 1);
        }
        if (tbtop->Text == "") {
            tbtop->Text = "0";
        }
    }
    private: System::Void btnMod_Click(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tbtop->Text->Contains("-"))
        {
            tbtop->Text = tbtop->Text->Remove(0, 1);
        }
        else {
            tbtop->Text = "-" + tbtop->Text;
        }
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        Clipboard::SetText(tbtop->Text);
        this->Delay->Start();
        
    }
     
    private: System::Void Delay_Tick(System::Object^ sender, System::EventArgs^ e) {
        count++;
        this->btnCopy->Text = "COPIED";
        if (count == 10) {
            this->Delay->Stop();
            this->btnCopy->Text = "COPY";
            count = 0;
        }
    }
};
}
