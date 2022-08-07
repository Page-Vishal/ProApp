#pragma once
namespace UserInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for todoh
	/// </summary>
	public ref class todoh : public System::Windows::Forms::Form
	{
	public:
		todoh(void)
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
		~todoh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ btnCate3;
	private: System::Windows::Forms::Label^ lbCategory;
	private: System::Windows::Forms::Button^ btnCate2;
	private: System::Windows::Forms::Button^ btnCate1;






























	private: System::Windows::Forms::Button^ btnReset1;
	private: System::Windows::Forms::Label^ lbOverflow1;





	private: System::Windows::Forms::Button^ btnAdd1;
	private: System::Windows::Forms::TextBox^ tbTask1;
	private: System::Windows::Forms::CheckBox^ cb1;
	private: System::Windows::Forms::CheckBox^ cb2;


	private: System::Windows::Forms::CheckBox^ cb3;
	private: System::Windows::Forms::CheckBox^ cb4;
	private: System::Windows::Forms::CheckBox^ cb5;








	private: System::Windows::Forms::GroupBox^ GB1;
	private: System::Windows::Forms::GroupBox^ GB2;

	private: System::Windows::Forms::CheckBox^ cb55;
	private: System::Windows::Forms::Label^ lbOverflow2;
	private: System::Windows::Forms::CheckBox^ cb44;
	private: System::Windows::Forms::Button^ btnReset2;
	private: System::Windows::Forms::CheckBox^ cb33;
	private: System::Windows::Forms::TextBox^ tbTask2;
	private: System::Windows::Forms::CheckBox^ cb22;
	private: System::Windows::Forms::Button^ btnAdd2;
	private: System::Windows::Forms::CheckBox^ cb11;
	private: System::Windows::Forms::GroupBox^ GB3;
	private: System::Windows::Forms::CheckBox^ cb555;
	private: System::Windows::Forms::Label^ lbOverflow3;
	private: System::Windows::Forms::CheckBox^ cb444;
	private: System::Windows::Forms::Button^ btnReset3;
	private: System::Windows::Forms::CheckBox^ cb333;
	private: System::Windows::Forms::TextBox^ tbTask3;
	private: System::Windows::Forms::CheckBox^ cb222;
	private: System::Windows::Forms::Button^ btnAdd3;
	private: System::Windows::Forms::CheckBox^ cb111;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCate3 = (gcnew System::Windows::Forms::Button());
			this->lbCategory = (gcnew System::Windows::Forms::Label());
			this->btnCate2 = (gcnew System::Windows::Forms::Button());
			this->btnCate1 = (gcnew System::Windows::Forms::Button());
			this->btnReset1 = (gcnew System::Windows::Forms::Button());
			this->lbOverflow1 = (gcnew System::Windows::Forms::Label());
			this->btnAdd1 = (gcnew System::Windows::Forms::Button());
			this->tbTask1 = (gcnew System::Windows::Forms::TextBox());
			this->cb1 = (gcnew System::Windows::Forms::CheckBox());
			this->cb2 = (gcnew System::Windows::Forms::CheckBox());
			this->cb3 = (gcnew System::Windows::Forms::CheckBox());
			this->cb4 = (gcnew System::Windows::Forms::CheckBox());
			this->cb5 = (gcnew System::Windows::Forms::CheckBox());
			this->GB1 = (gcnew System::Windows::Forms::GroupBox());
			this->GB2 = (gcnew System::Windows::Forms::GroupBox());
			this->cb55 = (gcnew System::Windows::Forms::CheckBox());
			this->lbOverflow2 = (gcnew System::Windows::Forms::Label());
			this->cb44 = (gcnew System::Windows::Forms::CheckBox());
			this->btnReset2 = (gcnew System::Windows::Forms::Button());
			this->cb33 = (gcnew System::Windows::Forms::CheckBox());
			this->tbTask2 = (gcnew System::Windows::Forms::TextBox());
			this->cb22 = (gcnew System::Windows::Forms::CheckBox());
			this->btnAdd2 = (gcnew System::Windows::Forms::Button());
			this->cb11 = (gcnew System::Windows::Forms::CheckBox());
			this->GB3 = (gcnew System::Windows::Forms::GroupBox());
			this->cb555 = (gcnew System::Windows::Forms::CheckBox());
			this->lbOverflow3 = (gcnew System::Windows::Forms::Label());
			this->cb444 = (gcnew System::Windows::Forms::CheckBox());
			this->btnReset3 = (gcnew System::Windows::Forms::Button());
			this->cb333 = (gcnew System::Windows::Forms::CheckBox());
			this->tbTask3 = (gcnew System::Windows::Forms::TextBox());
			this->cb222 = (gcnew System::Windows::Forms::CheckBox());
			this->btnAdd3 = (gcnew System::Windows::Forms::Button());
			this->cb111 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->GB1->SuspendLayout();
			this->GB2->SuspendLayout();
			this->GB3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnCate3);
			this->groupBox1->Controls->Add(this->lbCategory);
			this->groupBox1->Controls->Add(this->btnCate2);
			this->groupBox1->Controls->Add(this->btnCate1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(518, 81);
			this->groupBox1->TabIndex = 48;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// btnCate3
			// 
			this->btnCate3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCate3->ForeColor = System::Drawing::Color::LightGray;
			this->btnCate3->Location = System::Drawing::Point(412, 18);
			this->btnCate3->Name = L"btnCate3";
			this->btnCate3->Size = System::Drawing::Size(100, 40);
			this->btnCate3->TabIndex = 3;
			this->btnCate3->Text = L"Category 3";
			this->btnCate3->UseVisualStyleBackColor = false;
			this->btnCate3->Click += gcnew System::EventHandler(this, &todoh::btnCate3_Click);
			// 
			// lbCategory
			// 
			this->lbCategory->AutoSize = true;
			this->lbCategory->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCategory->Location = System::Drawing::Point(6, 0);
			this->lbCategory->Name = L"lbCategory";
			this->lbCategory->Size = System::Drawing::Size(165, 27);
			this->lbCategory->TabIndex = 4;
			this->lbCategory->Text = L"Select Category";
			// 
			// btnCate2
			// 
			this->btnCate2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCate2->ForeColor = System::Drawing::Color::LightGray;
			this->btnCate2->Location = System::Drawing::Point(296, 18);
			this->btnCate2->Name = L"btnCate2";
			this->btnCate2->Size = System::Drawing::Size(100, 40);
			this->btnCate2->TabIndex = 2;
			this->btnCate2->Text = L"Category 2";
			this->btnCate2->UseVisualStyleBackColor = false;
			this->btnCate2->Click += gcnew System::EventHandler(this, &todoh::btnCate2_Click);
			// 
			// btnCate1
			// 
			this->btnCate1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCate1->ForeColor = System::Drawing::Color::LightGray;
			this->btnCate1->Location = System::Drawing::Point(177, 18);
			this->btnCate1->Name = L"btnCate1";
			this->btnCate1->Size = System::Drawing::Size(100, 40);
			this->btnCate1->TabIndex = 1;
			this->btnCate1->Text = L"Category 1";
			this->btnCate1->UseVisualStyleBackColor = false;
			this->btnCate1->Click += gcnew System::EventHandler(this, &todoh::btnCate1_Click_1);
			// 
			// btnReset1
			// 
			this->btnReset1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnReset1->Font = (gcnew System::Drawing::Font(L"Perpetua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset1->ForeColor = System::Drawing::Color::LightGray;
			this->btnReset1->Location = System::Drawing::Point(421, 338);
			this->btnReset1->Name = L"btnReset1";
			this->btnReset1->Size = System::Drawing::Size(75, 40);
			this->btnReset1->TabIndex = 57;
			this->btnReset1->Text = L"&Reset";
			this->btnReset1->UseVisualStyleBackColor = false;
			this->btnReset1->Click += gcnew System::EventHandler(this, &todoh::btnReset1_Click_1);
			// 
			// lbOverflow1
			// 
			this->lbOverflow1->AutoSize = true;
			this->lbOverflow1->Font = (gcnew System::Drawing::Font(L"Perpetua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbOverflow1->Location = System::Drawing::Point(112, 308);
			this->lbOverflow1->Name = L"lbOverflow1";
			this->lbOverflow1->Size = System::Drawing::Size(71, 32);
			this->lbOverflow1->TabIndex = 56;
			this->lbOverflow1->Text = L"label";
			this->lbOverflow1->Click += gcnew System::EventHandler(this, &todoh::lbOverflow1_Click);
			// 
			// btnAdd1
			// 
			this->btnAdd1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAdd1->Font = (gcnew System::Drawing::Font(L"Perpetua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd1->ForeColor = System::Drawing::Color::LightGray;
			this->btnAdd1->Location = System::Drawing::Point(421, 37);
			this->btnAdd1->Name = L"btnAdd1";
			this->btnAdd1->Size = System::Drawing::Size(75, 34);
			this->btnAdd1->TabIndex = 50;
			this->btnAdd1->Text = L"&Add";
			this->btnAdd1->UseVisualStyleBackColor = false;
			this->btnAdd1->Visible = false;
			this->btnAdd1->Click += gcnew System::EventHandler(this, &todoh::btnAdd1_Click_1);
			// 
			// tbTask1
			// 
			this->tbTask1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbTask1->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTask1->ForeColor = System::Drawing::Color::LightGray;
			this->tbTask1->Location = System::Drawing::Point(15, 37);
			this->tbTask1->Name = L"tbTask1";
			this->tbTask1->Size = System::Drawing::Size(400, 34);
			this->tbTask1->TabIndex = 49;
			this->tbTask1->TextChanged += gcnew System::EventHandler(this, &todoh::tbTask1_TextChanged_1);
			this->tbTask1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &todoh::tbTask1_KeyDown);
			// 
			// cb1
			// 
			this->cb1->AutoSize = true;
			this->cb1->Location = System::Drawing::Point(25, 115);
			this->cb1->Name = L"cb1";
			this->cb1->Size = System::Drawing::Size(79, 25);
			this->cb1->TabIndex = 51;
			this->cb1->Text = L"Task 1";
			this->cb1->UseVisualStyleBackColor = true;
			this->cb1->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb1_CheckedChanged);
			// 
			// cb2
			// 
			this->cb2->AutoSize = true;
			this->cb2->Location = System::Drawing::Point(25, 146);
			this->cb2->Name = L"cb2";
			this->cb2->Size = System::Drawing::Size(79, 25);
			this->cb2->TabIndex = 52;
			this->cb2->Text = L"Task 2";
			this->cb2->UseVisualStyleBackColor = true;
			this->cb2->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb2_CheckedChanged_1);
			// 
			// cb3
			// 
			this->cb3->AutoSize = true;
			this->cb3->Location = System::Drawing::Point(25, 177);
			this->cb3->Name = L"cb3";
			this->cb3->Size = System::Drawing::Size(79, 25);
			this->cb3->TabIndex = 53;
			this->cb3->Text = L"Task 3";
			this->cb3->UseVisualStyleBackColor = true;
			this->cb3->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb3_CheckedChanged_1);
			// 
			// cb4
			// 
			this->cb4->AutoSize = true;
			this->cb4->Location = System::Drawing::Point(25, 208);
			this->cb4->Name = L"cb4";
			this->cb4->Size = System::Drawing::Size(79, 25);
			this->cb4->TabIndex = 54;
			this->cb4->Text = L"Task 4";
			this->cb4->UseVisualStyleBackColor = true;
			this->cb4->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb4_CheckedChanged_1);
			// 
			// cb5
			// 
			this->cb5->AutoSize = true;
			this->cb5->Location = System::Drawing::Point(25, 239);
			this->cb5->Name = L"cb5";
			this->cb5->Size = System::Drawing::Size(79, 25);
			this->cb5->TabIndex = 55;
			this->cb5->Text = L"Task 5";
			this->cb5->UseVisualStyleBackColor = true;
			this->cb5->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb5_CheckedChanged_1);
			// 
			// GB1
			// 
			this->GB1->Controls->Add(this->cb5);
			this->GB1->Controls->Add(this->lbOverflow1);
			this->GB1->Controls->Add(this->cb4);
			this->GB1->Controls->Add(this->btnReset1);
			this->GB1->Controls->Add(this->cb3);
			this->GB1->Controls->Add(this->tbTask1);
			this->GB1->Controls->Add(this->cb2);
			this->GB1->Controls->Add(this->btnAdd1);
			this->GB1->Controls->Add(this->cb1);
			this->GB1->ForeColor = System::Drawing::Color::LightGray;
			this->GB1->Location = System::Drawing::Point(12, 99);
			this->GB1->Name = L"GB1";
			this->GB1->Size = System::Drawing::Size(520, 395);
			this->GB1->TabIndex = 59;
			this->GB1->TabStop = false;
			this->GB1->Text = L"Category 1:";
			// 
			// GB2
			// 
			this->GB2->Controls->Add(this->cb55);
			this->GB2->Controls->Add(this->lbOverflow2);
			this->GB2->Controls->Add(this->cb44);
			this->GB2->Controls->Add(this->btnReset2);
			this->GB2->Controls->Add(this->cb33);
			this->GB2->Controls->Add(this->tbTask2);
			this->GB2->Controls->Add(this->cb22);
			this->GB2->Controls->Add(this->btnAdd2);
			this->GB2->Controls->Add(this->cb11);
			this->GB2->ForeColor = System::Drawing::Color::LightGray;
			this->GB2->Location = System::Drawing::Point(12, 99);
			this->GB2->Name = L"GB2";
			this->GB2->Size = System::Drawing::Size(520, 395);
			this->GB2->TabIndex = 60;
			this->GB2->TabStop = false;
			this->GB2->Text = L"Category 2:";
			this->GB2->Visible = false;
			// 
			// cb55
			// 
			this->cb55->AutoSize = true;
			this->cb55->Location = System::Drawing::Point(25, 239);
			this->cb55->Name = L"cb55";
			this->cb55->Size = System::Drawing::Size(79, 25);
			this->cb55->TabIndex = 55;
			this->cb55->Text = L"Task 5";
			this->cb55->UseVisualStyleBackColor = true;
			this->cb55->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb55_CheckedChanged);
			// 
			// lbOverflow2
			// 
			this->lbOverflow2->AutoSize = true;
			this->lbOverflow2->Font = (gcnew System::Drawing::Font(L"Perpetua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbOverflow2->Location = System::Drawing::Point(112, 308);
			this->lbOverflow2->Name = L"lbOverflow2";
			this->lbOverflow2->Size = System::Drawing::Size(71, 32);
			this->lbOverflow2->TabIndex = 56;
			this->lbOverflow2->Text = L"label";
			// 
			// cb44
			// 
			this->cb44->AutoSize = true;
			this->cb44->Location = System::Drawing::Point(25, 208);
			this->cb44->Name = L"cb44";
			this->cb44->Size = System::Drawing::Size(79, 25);
			this->cb44->TabIndex = 54;
			this->cb44->Text = L"Task 4";
			this->cb44->UseVisualStyleBackColor = true;
			this->cb44->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb44_CheckedChanged);
			// 
			// btnReset2
			// 
			this->btnReset2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnReset2->Font = (gcnew System::Drawing::Font(L"Perpetua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset2->ForeColor = System::Drawing::Color::LightGray;
			this->btnReset2->Location = System::Drawing::Point(421, 338);
			this->btnReset2->Name = L"btnReset2";
			this->btnReset2->Size = System::Drawing::Size(75, 40);
			this->btnReset2->TabIndex = 57;
			this->btnReset2->Text = L"&Reset";
			this->btnReset2->UseVisualStyleBackColor = false;
			this->btnReset2->Click += gcnew System::EventHandler(this, &todoh::btnReset2_Click);
			// 
			// cb33
			// 
			this->cb33->AutoSize = true;
			this->cb33->Location = System::Drawing::Point(25, 177);
			this->cb33->Name = L"cb33";
			this->cb33->Size = System::Drawing::Size(79, 25);
			this->cb33->TabIndex = 53;
			this->cb33->Text = L"Task 3";
			this->cb33->UseVisualStyleBackColor = true;
			this->cb33->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb33_CheckedChanged);
			// 
			// tbTask2
			// 
			this->tbTask2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbTask2->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTask2->ForeColor = System::Drawing::Color::LightGray;
			this->tbTask2->Location = System::Drawing::Point(15, 37);
			this->tbTask2->Name = L"tbTask2";
			this->tbTask2->Size = System::Drawing::Size(400, 34);
			this->tbTask2->TabIndex = 49;
			this->tbTask2->TextChanged += gcnew System::EventHandler(this, &todoh::tbTask2_TextChanged);
			this->tbTask2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &todoh::tbTask2_KeyDown);
			// 
			// cb22
			// 
			this->cb22->AutoSize = true;
			this->cb22->Location = System::Drawing::Point(25, 146);
			this->cb22->Name = L"cb22";
			this->cb22->Size = System::Drawing::Size(79, 25);
			this->cb22->TabIndex = 52;
			this->cb22->Text = L"Task 2";
			this->cb22->UseVisualStyleBackColor = true;
			this->cb22->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb22_CheckedChanged);
			// 
			// btnAdd2
			// 
			this->btnAdd2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAdd2->Font = (gcnew System::Drawing::Font(L"Perpetua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd2->ForeColor = System::Drawing::Color::LightGray;
			this->btnAdd2->Location = System::Drawing::Point(421, 37);
			this->btnAdd2->Name = L"btnAdd2";
			this->btnAdd2->Size = System::Drawing::Size(75, 34);
			this->btnAdd2->TabIndex = 50;
			this->btnAdd2->Text = L"&Add";
			this->btnAdd2->UseVisualStyleBackColor = false;
			this->btnAdd2->Visible = false;
			this->btnAdd2->Click += gcnew System::EventHandler(this, &todoh::btnAdd2_Click);
			// 
			// cb11
			// 
			this->cb11->AutoSize = true;
			this->cb11->Location = System::Drawing::Point(25, 115);
			this->cb11->Name = L"cb11";
			this->cb11->Size = System::Drawing::Size(79, 25);
			this->cb11->TabIndex = 51;
			this->cb11->Text = L"Task 1";
			this->cb11->UseVisualStyleBackColor = true;
			this->cb11->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb11_CheckedChanged);
			// 
			// GB3
			// 
			this->GB3->Controls->Add(this->cb555);
			this->GB3->Controls->Add(this->lbOverflow3);
			this->GB3->Controls->Add(this->cb444);
			this->GB3->Controls->Add(this->btnReset3);
			this->GB3->Controls->Add(this->cb333);
			this->GB3->Controls->Add(this->tbTask3);
			this->GB3->Controls->Add(this->cb222);
			this->GB3->Controls->Add(this->btnAdd3);
			this->GB3->Controls->Add(this->cb111);
			this->GB3->ForeColor = System::Drawing::Color::LightGray;
			this->GB3->Location = System::Drawing::Point(12, 99);
			this->GB3->Name = L"GB3";
			this->GB3->Size = System::Drawing::Size(520, 395);
			this->GB3->TabIndex = 61;
			this->GB3->TabStop = false;
			this->GB3->Text = L"Category 3:";
			this->GB3->Visible = false;
			this->GB3->Enter += gcnew System::EventHandler(this, &todoh::GB3_Enter);
			// 
			// cb555
			// 
			this->cb555->AutoSize = true;
			this->cb555->Location = System::Drawing::Point(25, 239);
			this->cb555->Name = L"cb555";
			this->cb555->Size = System::Drawing::Size(79, 25);
			this->cb555->TabIndex = 55;
			this->cb555->Text = L"Task 5";
			this->cb555->UseVisualStyleBackColor = true;
			this->cb555->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb555_CheckedChanged);
			// 
			// lbOverflow3
			// 
			this->lbOverflow3->AutoSize = true;
			this->lbOverflow3->Font = (gcnew System::Drawing::Font(L"Perpetua", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbOverflow3->Location = System::Drawing::Point(112, 308);
			this->lbOverflow3->Name = L"lbOverflow3";
			this->lbOverflow3->Size = System::Drawing::Size(71, 32);
			this->lbOverflow3->TabIndex = 56;
			this->lbOverflow3->Text = L"label";
			// 
			// cb444
			// 
			this->cb444->AutoSize = true;
			this->cb444->Location = System::Drawing::Point(25, 208);
			this->cb444->Name = L"cb444";
			this->cb444->Size = System::Drawing::Size(79, 25);
			this->cb444->TabIndex = 54;
			this->cb444->Text = L"Task 4";
			this->cb444->UseVisualStyleBackColor = true;
			this->cb444->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb444_CheckedChanged);
			// 
			// btnReset3
			// 
			this->btnReset3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnReset3->Font = (gcnew System::Drawing::Font(L"Perpetua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset3->ForeColor = System::Drawing::Color::LightGray;
			this->btnReset3->Location = System::Drawing::Point(421, 338);
			this->btnReset3->Name = L"btnReset3";
			this->btnReset3->Size = System::Drawing::Size(75, 40);
			this->btnReset3->TabIndex = 57;
			this->btnReset3->Text = L"&Reset";
			this->btnReset3->UseVisualStyleBackColor = false;
			this->btnReset3->Click += gcnew System::EventHandler(this, &todoh::btnReset3_Click);
			// 
			// cb333
			// 
			this->cb333->AutoSize = true;
			this->cb333->Location = System::Drawing::Point(25, 177);
			this->cb333->Name = L"cb333";
			this->cb333->Size = System::Drawing::Size(79, 25);
			this->cb333->TabIndex = 53;
			this->cb333->Text = L"Task 3";
			this->cb333->UseVisualStyleBackColor = true;
			this->cb333->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb333_CheckedChanged);
			// 
			// tbTask3
			// 
			this->tbTask3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbTask3->Font = (gcnew System::Drawing::Font(L"Perpetua", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTask3->ForeColor = System::Drawing::Color::LightGray;
			this->tbTask3->Location = System::Drawing::Point(15, 37);
			this->tbTask3->Name = L"tbTask3";
			this->tbTask3->Size = System::Drawing::Size(400, 34);
			this->tbTask3->TabIndex = 49;
			this->tbTask3->TextChanged += gcnew System::EventHandler(this, &todoh::tbTask3_TextChanged);
			this->tbTask3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &todoh::tbTask3_KeyDown);
			// 
			// cb222
			// 
			this->cb222->AutoSize = true;
			this->cb222->Location = System::Drawing::Point(25, 146);
			this->cb222->Name = L"cb222";
			this->cb222->Size = System::Drawing::Size(79, 25);
			this->cb222->TabIndex = 52;
			this->cb222->Text = L"Task 2";
			this->cb222->UseVisualStyleBackColor = true;
			this->cb222->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb222_CheckedChanged);
			// 
			// btnAdd3
			// 
			this->btnAdd3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAdd3->Font = (gcnew System::Drawing::Font(L"Perpetua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd3->ForeColor = System::Drawing::Color::LightGray;
			this->btnAdd3->Location = System::Drawing::Point(421, 37);
			this->btnAdd3->Name = L"btnAdd3";
			this->btnAdd3->Size = System::Drawing::Size(75, 34);
			this->btnAdd3->TabIndex = 50;
			this->btnAdd3->Text = L"&Add";
			this->btnAdd3->UseVisualStyleBackColor = false;
			this->btnAdd3->Visible = false;
			this->btnAdd3->Click += gcnew System::EventHandler(this, &todoh::btnAdd3_Click);
			// 
			// cb111
			// 
			this->cb111->AutoSize = true;
			this->cb111->Location = System::Drawing::Point(25, 115);
			this->cb111->Name = L"cb111";
			this->cb111->Size = System::Drawing::Size(79, 25);
			this->cb111->TabIndex = 51;
			this->cb111->Text = L"Task 1";
			this->cb111->UseVisualStyleBackColor = true;
			this->cb111->CheckedChanged += gcnew System::EventHandler(this, &todoh::cb111_CheckedChanged);
			// 
			// todoh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(542, 513);
			this->Controls->Add(this->GB2);
			this->Controls->Add(this->GB3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->GB1);
			this->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::LightGray;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximumSize = System::Drawing::Size(560, 560);
			this->MinimumSize = System::Drawing::Size(560, 560);
			this->Name = L"todoh";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Todo";
			this->Load += gcnew System::EventHandler(this, &todoh::todoh_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->GB1->ResumeLayout(false);
			this->GB1->PerformLayout();
			this->GB2->ResumeLayout(false);
			this->GB2->PerformLayout();
			this->GB3->ResumeLayout(false);
			this->GB3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		static int count = 0;
		static int count2 = 0;
		static int count3 = 0;

	private: System::Void todoh_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbOverflow1->Text = "";
		this->lbOverflow2->Text = "";
		this->lbOverflow3->Text = "";
	}
		   //Category 1 Here
	private: System::Void btnCate1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->GB1->Visible = true;
		this->GB2->Visible = false;
		this->GB3->Visible = false;
	}
	private: System::Void tbTask1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
		this->btnAdd1->Visible = "true";
	}
	private: System::Void btnAdd1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ placeholder = this->tbTask1->Text;
		count++;
		if (count == 1) { this->cb1->Text = placeholder;}
		else if (count == 2) { this->cb2->Text = placeholder;}
		else if (count == 3) { this->cb3->Text = placeholder;}
		else if (count == 4) { this->cb4->Text = placeholder;}
		else if (count == 5) { this->cb5->Text = placeholder;}
		else { this->lbOverflow1->Text = "Maximum Limit Reached"; }

		this->tbTask1->Text = nullptr;
	}
	private: System::Void btnReset1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->cb1->Checked = false;
		this->cb2->Checked = false;
		this->cb3->Checked = false;
		this->cb4->Checked = false;
		this->cb5->Checked = false;

		this->cb1->Text = "Task 1";
		this->cb2->Text = "Task 2";
		this->cb3->Text = "Task 3";
		this->cb4->Text = "Task 4";
		this->cb5->Text = "Task 5";
		
		count = 0;
		this->lbOverflow1->Text = nullptr;
	}
	private: System::Void cb1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->cb1->Checked == true)
		{
			this->cb1->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		}
		if (this->cb1->Checked == false)
		{
			this->cb1->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
		}
	}
	private: System::Void cb2_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->cb2->Checked == true)
		{
			this->cb2->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		}
		if (this->cb2->Checked == false)
		{
			this->cb2->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
		}
	}
private: System::Void cb3_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb3->Checked == true)
	{
		this->cb3->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb3->Checked == false)
	{
		this->cb3->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb4_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb4->Checked == true)
	{
		this->cb4->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb4->Checked == false)
	{
		this->cb4->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb5_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb5->Checked == true)
	{
		this->cb5->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb5->Checked == false)
	{
		this->cb5->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
	private: System::Void lbOverflow1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	

	   //GB2
	private: System::Void btnCate2_Click(System::Object^ sender, System::EventArgs^ e) {
		   //Category 2
		this->GB1->Visible = false;
		this->GB2->Visible = true;
		this->GB3->Visible = false;
	  }
private: System::Void tbTask2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->btnAdd2->Visible = "true";
}
private: System::Void btnAdd2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ placeholder = this->tbTask2->Text;
	count2++;
	if (count2 == 1) { this->cb11->Text = placeholder; }
	else if (count2 == 2) { this->cb22->Text = placeholder; }
	else if (count2 == 3) { this->cb33->Text = placeholder; }
	else if (count2 == 4) { this->cb44->Text = placeholder; }
	else if (count2 == 5) { this->cb55->Text = placeholder; }
	else { this->lbOverflow2->Text = "Maximum Limit Reached"; }

	this->tbTask2->Text = nullptr;
}
private: System::Void btnReset2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->cb11->Checked = false;
	this->cb22->Checked = false;
	this->cb33->Checked = false;
	this->cb44->Checked = false;
	this->cb55->Checked = false;

	this->cb11->Text = "Task 1";
	this->cb22->Text = "Task 2";
	this->cb33->Text = "Task 3";
	this->cb44->Text = "Task 4";
	this->cb55->Text = "Task 5";

	count2 = 0;
	this->lbOverflow2->Text = nullptr;
}
private: System::Void cb11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb11->Checked == true)
	{
		this->cb11->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb11->Checked == false)
	{
		this->cb11->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb22->Checked == true)
	{
		this->cb22->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb22->Checked == false)
	{
		this->cb22->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb33->Checked == true)
	{
		this->cb33->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb33->Checked == false)
	{
		this->cb33->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb44_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb44->Checked == true)
	{
		this->cb44->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb44->Checked == false)
	{
		this->cb44->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb55_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb55->Checked == true)
	{
		this->cb55->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb55->Checked == false)
	{
		this->cb55->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
	   //GB 3
	   private: System::Void btnCate3_Click(System::Object^ sender, System::EventArgs^ e) {
		   //Category 3
		   this->GB1->Visible = false;
		   this->GB2->Visible = false;
		   this->GB3->Visible = true;
	   }
private: System::Void tbTask3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->btnAdd3->Visible = "true";
}
private: System::Void btnAdd3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ placeholder = this->tbTask3->Text;
	count3++;
	if (count3 == 1) { this->cb111->Text = placeholder; }
	else if (count3 == 2) { this->cb222->Text = placeholder; }
	else if (count3 == 3) { this->cb333->Text = placeholder; }
	else if (count3 == 4) { this->cb444->Text = placeholder; }
	else if (count3 == 5) { this->cb555->Text = placeholder; }
	else { this->lbOverflow3->Text = "Maximum Limit Reached"; }

	this->tbTask3->Text = nullptr;
}
private: System::Void btnReset3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->cb111->Checked = false;
	this->cb222->Checked = false;
	this->cb333->Checked = false;
	this->cb444->Checked = false;
	this->cb555->Checked = false;

	this->cb111->Text = "Task 1";
	this->cb222->Text = "Task 2";
	this->cb333->Text = "Task 3";
	this->cb444->Text = "Task 4";
	this->cb555->Text = "Task 5";

	count3 = 0;
	this->lbOverflow3->Text = nullptr;
}
private: System::Void cb111_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb111->Checked == true)
	{
		this->cb111->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb111->Checked == false)
	{
		this->cb111->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb222_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb222->Checked == true)
	{
		this->cb222->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb222->Checked == false)
	{
		this->cb222->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb333_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb333->Checked == true)
	{
		this->cb333->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb333->Checked == false)
	{
		this->cb333->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb444_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb444->Checked == true)
	{
		this->cb444->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb444->Checked == false)
	{
		this->cb444->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
private: System::Void cb555_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->cb555->Checked == true)
	{
		this->cb555->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	}
	if (this->cb555->Checked == false)
	{
		this->cb555->Font = (gcnew System::Drawing::Font(L"Perpetua", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
}
	   //Condition for enter key

private: System::Void tbTask3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		this->btnAdd3->PerformClick();
		e->SuppressKeyPress = true;
	}
}
private: System::Void tbTask2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		this->btnAdd2->PerformClick();
		e->SuppressKeyPress = true;
	}
}
private: System::Void tbTask1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		this->btnAdd1->PerformClick();
		e->SuppressKeyPress = true;
	}
}
private: System::Void GB3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
