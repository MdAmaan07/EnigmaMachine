#pragma once
#include "Rotor.h"

namespace EnigmaMachine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Enigma
	/// </summary>
	public ref class Enigma : public System::Windows::Forms::Form
	{
	public:
		Enigma(void)
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
		~Enigma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button30;

	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button58;

	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button71;
	private: System::Windows::Forms::Button^ button70;
	private: System::Windows::Forms::Button^ button69;
	private: System::Windows::Forms::Button^ button68;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button72;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button75;
private: System::Windows::Forms::Button^ button76;


private: System::Windows::Forms::TextBox^ textBox5;


private: System::Windows::Forms::Button^ button73;
private: System::Windows::Forms::Button^ button74;
private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ button77;
private: System::Windows::Forms::Button^ button78;

private: System::Windows::Forms::Button^ button79;
private: System::Windows::Forms::Button^ button80;
private: System::Windows::Forms::Button^ button109;
private: System::Windows::Forms::Button^ button108;
private: System::Windows::Forms::Button^ button107;
private: System::Windows::Forms::Button^ button106;
private: System::Windows::Forms::Button^ button105;
private: System::Windows::Forms::Button^ button104;
private: System::Windows::Forms::Button^ button103;
private: System::Windows::Forms::Button^ button102;
private: System::Windows::Forms::Button^ button101;
private: System::Windows::Forms::Button^ button100;
private: System::Windows::Forms::Button^ button99;
private: System::Windows::Forms::Button^ button98;
private: System::Windows::Forms::Button^ button97;
private: System::Windows::Forms::Button^ button96;
private: System::Windows::Forms::Button^ button95;
private: System::Windows::Forms::Button^ button94;
private: System::Windows::Forms::Button^ button93;
private: System::Windows::Forms::Button^ button92;
private: System::Windows::Forms::Button^ button91;
private: System::Windows::Forms::Button^ button90;
private: System::Windows::Forms::Button^ button89;
private: System::Windows::Forms::Button^ button88;
private: System::Windows::Forms::Button^ button87;
private: System::Windows::Forms::Button^ button86;
private: System::Windows::Forms::Button^ button85;
private: System::Windows::Forms::Button^ button84;
private: System::Windows::Forms::Button^ button83;
private: System::Windows::Forms::Button^ button82;
private: System::Windows::Forms::Button^ button81;









	protected:







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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel1->Controls->Add(this->button109);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button108);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button107);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button106);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button105);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button104);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button103);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button102);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button101);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button100);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button99);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button98);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button97);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button96);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button95);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button94);
			this->panel1->Controls->Add(this->button93);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button92);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button91);
			this->panel1->Controls->Add(this->button61);
			this->panel1->Controls->Add(this->button90);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button89);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button88);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button87);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->button86);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button85);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button84);
			this->panel1->Controls->Add(this->button62);
			this->panel1->Controls->Add(this->button83);
			this->panel1->Controls->Add(this->button60);
			this->panel1->Controls->Add(this->button82);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button81);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 489);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(650, 146);
			this->panel1->TabIndex = 0;
			// 
			// button109
			// 
			this->button109->BackColor = System::Drawing::Color::LightBlue;
			this->button109->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button109->ForeColor = System::Drawing::Color::Black;
			this->button109->Location = System::Drawing::Point(1271, -196);
			this->button109->Margin = System::Windows::Forms::Padding(4);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(55, 40);
			this->button109->TabIndex = 66;
			this->button109->Text = L")";
			this->button109->UseVisualStyleBackColor = false;
			this->button109->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(581, 4);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 40);
			this->button10->TabIndex = 25;
			this->button10->Text = L"P";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button108
			// 
			this->button108->BackColor = System::Drawing::Color::LightBlue;
			this->button108->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button108->ForeColor = System::Drawing::Color::Black;
			this->button108->Location = System::Drawing::Point(1208, -196);
			this->button108->Margin = System::Windows::Forms::Padding(4);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(55, 40);
			this->button108->TabIndex = 65;
			this->button108->Text = L"(";
			this->button108->UseVisualStyleBackColor = false;
			this->button108->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightBlue;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(518, 4);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 40);
			this->button9->TabIndex = 26;
			this->button9->Text = L"O";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button107
			// 
			this->button107->BackColor = System::Drawing::Color::LightBlue;
			this->button107->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button107->ForeColor = System::Drawing::Color::Black;
			this->button107->Location = System::Drawing::Point(1145, -196);
			this->button107->Margin = System::Windows::Forms::Padding(4);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(55, 40);
			this->button107->TabIndex = 64;
			this->button107->Text = L"*";
			this->button107->UseVisualStyleBackColor = false;
			this->button107->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(455, 4);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 40);
			this->button8->TabIndex = 27;
			this->button8->Text = L"I";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button106
			// 
			this->button106->BackColor = System::Drawing::Color::LightBlue;
			this->button106->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button106->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button106->ForeColor = System::Drawing::Color::Black;
			this->button106->Location = System::Drawing::Point(1082, -196);
			this->button106->Margin = System::Windows::Forms::Padding(4);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(55, 40);
			this->button106->TabIndex = 63;
			this->button106->Text = L"";
			this->button106->UseVisualStyleBackColor = false;
			this->button106->Click += gcnew System::EventHandler(this, &Enigma::Reference);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(392, 4);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 40);
			this->button7->TabIndex = 28;
			this->button7->Text = L"U";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button105
			// 
			this->button105->BackColor = System::Drawing::Color::LightBlue;
			this->button105->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button105->ForeColor = System::Drawing::Color::Black;
			this->button105->Location = System::Drawing::Point(1271, -100);
			this->button105->Margin = System::Windows::Forms::Padding(4);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(55, 40);
			this->button105->TabIndex = 85;
			this->button105->Text = L"/";
			this->button105->UseVisualStyleBackColor = false;
			this->button105->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(329, 6);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 40);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Y";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button104
			// 
			this->button104->BackColor = System::Drawing::Color::LightBlue;
			this->button104->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button104->ForeColor = System::Drawing::Color::Black;
			this->button104->Location = System::Drawing::Point(1208, -100);
			this->button104->Margin = System::Windows::Forms::Padding(4);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(55, 40);
			this->button104->TabIndex = 84;
			this->button104->Text = L"\?";
			this->button104->UseVisualStyleBackColor = false;
			this->button104->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(266, 4);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 40);
			this->button5->TabIndex = 30;
			this->button5->Text = L"T";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button103
			// 
			this->button103->BackColor = System::Drawing::Color::LightBlue;
			this->button103->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button103->ForeColor = System::Drawing::Color::Black;
			this->button103->Location = System::Drawing::Point(1082, -100);
			this->button103->Margin = System::Windows::Forms::Padding(4);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(55, 40);
			this->button103->TabIndex = 82;
			this->button103->Text = L",";
			this->button103->UseVisualStyleBackColor = false;
			this->button103->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(203, 4);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 40);
			this->button4->TabIndex = 31;
			this->button4->Text = L"R";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button102
			// 
			this->button102->BackColor = System::Drawing::Color::LightBlue;
			this->button102->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button102->ForeColor = System::Drawing::Color::Black;
			this->button102->Location = System::Drawing::Point(1019, -100);
			this->button102->Margin = System::Windows::Forms::Padding(4);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(55, 40);
			this->button102->TabIndex = 81;
			this->button102->Text = L"\'";
			this->button102->UseVisualStyleBackColor = false;
			this->button102->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(140, 4);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 40);
			this->button3->TabIndex = 32;
			this->button3->Text = L"E";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button101
			// 
			this->button101->BackColor = System::Drawing::Color::LightBlue;
			this->button101->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button101->ForeColor = System::Drawing::Color::Black;
			this->button101->Location = System::Drawing::Point(956, -100);
			this->button101->Margin = System::Windows::Forms::Padding(4);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(55, 40);
			this->button101->TabIndex = 80;
			this->button101->Text = L"\"";
			this->button101->UseVisualStyleBackColor = false;
			this->button101->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(77, 4);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 40);
			this->button2->TabIndex = 33;
			this->button2->Text = L"W";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button100
			// 
			this->button100->BackColor = System::Drawing::Color::LightBlue;
			this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button100->ForeColor = System::Drawing::Color::Black;
			this->button100->Location = System::Drawing::Point(893, -100);
			this->button100->Margin = System::Windows::Forms::Padding(4);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(55, 40);
			this->button100->TabIndex = 79;
			this->button100->Text = L";";
			this->button100->UseVisualStyleBackColor = false;
			this->button100->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::LightBlue;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(551, 52);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 40);
			this->button20->TabIndex = 43;
			this->button20->Text = L"L";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button99
			// 
			this->button99->BackColor = System::Drawing::Color::LightBlue;
			this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button99->ForeColor = System::Drawing::Color::Black;
			this->button99->Location = System::Drawing::Point(1019, -196);
			this->button99->Margin = System::Windows::Forms::Padding(4);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(55, 40);
			this->button99->TabIndex = 62;
			this->button99->Text = L"^";
			this->button99->UseVisualStyleBackColor = false;
			this->button99->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::LightBlue;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(488, 52);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 40);
			this->button19->TabIndex = 42;
			this->button19->Text = L"K";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button98
			// 
			this->button98->BackColor = System::Drawing::Color::LightBlue;
			this->button98->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button98->ForeColor = System::Drawing::Color::Black;
			this->button98->Location = System::Drawing::Point(830, -100);
			this->button98->Margin = System::Windows::Forms::Padding(4);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(55, 40);
			this->button98->TabIndex = 78;
			this->button98->Text = L":";
			this->button98->UseVisualStyleBackColor = false;
			this->button98->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::LightBlue;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(425, 52);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 40);
			this->button18->TabIndex = 41;
			this->button18->Text = L"J";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button97
			// 
			this->button97->BackColor = System::Drawing::Color::LightBlue;
			this->button97->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button97->ForeColor = System::Drawing::Color::Black;
			this->button97->Location = System::Drawing::Point(956, -196);
			this->button97->Margin = System::Windows::Forms::Padding(4);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(55, 40);
			this->button97->TabIndex = 61;
			this->button97->Text = L"%";
			this->button97->UseVisualStyleBackColor = false;
			this->button97->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightBlue;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(362, 52);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 40);
			this->button17->TabIndex = 40;
			this->button17->Text = L"H";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button96
			// 
			this->button96->BackColor = System::Drawing::Color::LightBlue;
			this->button96->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button96->ForeColor = System::Drawing::Color::Black;
			this->button96->Location = System::Drawing::Point(893, -196);
			this->button96->Margin = System::Windows::Forms::Padding(4);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(55, 40);
			this->button96->TabIndex = 60;
			this->button96->Text = L"$";
			this->button96->UseVisualStyleBackColor = false;
			this->button96->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LightBlue;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(299, 52);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 40);
			this->button16->TabIndex = 39;
			this->button16->Text = L"G";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button95
			// 
			this->button95->BackColor = System::Drawing::Color::LightBlue;
			this->button95->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button95->ForeColor = System::Drawing::Color::Black;
			this->button95->Location = System::Drawing::Point(830, -196);
			this->button95->Margin = System::Windows::Forms::Padding(4);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(55, 40);
			this->button95->TabIndex = 59;
			this->button95->Text = L"#";
			this->button95->UseVisualStyleBackColor = false;
			this->button95->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::LightBlue;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(236, 52);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 40);
			this->button15->TabIndex = 38;
			this->button15->Text = L"F";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button94
			// 
			this->button94->BackColor = System::Drawing::Color::LightBlue;
			this->button94->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button94->ForeColor = System::Drawing::Color::Black;
			this->button94->Location = System::Drawing::Point(767, -196);
			this->button94->Margin = System::Windows::Forms::Padding(4);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(55, 40);
			this->button94->TabIndex = 58;
			this->button94->Text = L"@";
			this->button94->UseVisualStyleBackColor = false;
			this->button94->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button93
			// 
			this->button93->BackColor = System::Drawing::Color::LightBlue;
			this->button93->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button93->ForeColor = System::Drawing::Color::Black;
			this->button93->Location = System::Drawing::Point(767, -100);
			this->button93->Margin = System::Windows::Forms::Padding(4);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(55, 40);
			this->button93->TabIndex = 77;
			this->button93->Text = L"\\";
			this->button93->UseVisualStyleBackColor = false;
			this->button93->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightBlue;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(173, 52);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 40);
			this->button14->TabIndex = 37;
			this->button14->Text = L"D";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button92
			// 
			this->button92->BackColor = System::Drawing::Color::LightBlue;
			this->button92->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button92->ForeColor = System::Drawing::Color::Black;
			this->button92->Location = System::Drawing::Point(1178, -148);
			this->button92->Margin = System::Windows::Forms::Padding(4);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(55, 40);
			this->button92->TabIndex = 68;
			this->button92->Text = L"[";
			this->button92->UseVisualStyleBackColor = false;
			this->button92->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightBlue;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(110, 52);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 40);
			this->button13->TabIndex = 36;
			this->button13->Text = L"S";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button91
			// 
			this->button91->BackColor = System::Drawing::Color::LightBlue;
			this->button91->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button91->ForeColor = System::Drawing::Color::Black;
			this->button91->Location = System::Drawing::Point(704, -196);
			this->button91->Margin = System::Windows::Forms::Padding(4);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(55, 40);
			this->button91->TabIndex = 57;
			this->button91->Text = L"!";
			this->button91->UseVisualStyleBackColor = false;
			this->button91->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::LightBlue;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button61->ForeColor = System::Drawing::Color::Black;
			this->button61->Location = System::Drawing::Point(581, 100);
			this->button61->Margin = System::Windows::Forms::Padding(4);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(55, 40);
			this->button61->TabIndex = 44;
			this->button61->Text = L">";
			this->button61->UseVisualStyleBackColor = false;
			this->button61->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button90
			// 
			this->button90->BackColor = System::Drawing::Color::LightBlue;
			this->button90->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button90->ForeColor = System::Drawing::Color::Black;
			this->button90->Location = System::Drawing::Point(1115, -148);
			this->button90->Margin = System::Windows::Forms::Padding(4);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(55, 40);
			this->button90->TabIndex = 69;
			this->button90->Text = L"}";
			this->button90->UseVisualStyleBackColor = false;
			this->button90->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::LightBlue;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(518, 100);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(55, 40);
			this->button27->TabIndex = 45;
			this->button27->Text = L"M";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button89
			// 
			this->button89->BackColor = System::Drawing::Color::LightBlue;
			this->button89->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button89->ForeColor = System::Drawing::Color::Black;
			this->button89->Location = System::Drawing::Point(704, -100);
			this->button89->Margin = System::Windows::Forms::Padding(4);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(55, 40);
			this->button89->TabIndex = 76;
			this->button89->Text = L"|";
			this->button89->UseVisualStyleBackColor = false;
			this->button89->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::LightBlue;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(455, 100);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(55, 40);
			this->button26->TabIndex = 46;
			this->button26->Text = L"N";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button88
			// 
			this->button88->BackColor = System::Drawing::Color::LightBlue;
			this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button88->ForeColor = System::Drawing::Color::Black;
			this->button88->Location = System::Drawing::Point(1052, -148);
			this->button88->Margin = System::Windows::Forms::Padding(4);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(55, 40);
			this->button88->TabIndex = 70;
			this->button88->Text = L"{";
			this->button88->UseVisualStyleBackColor = false;
			this->button88->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::LightBlue;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(392, 100);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(55, 40);
			this->button25->TabIndex = 47;
			this->button25->Text = L"B";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button87
			// 
			this->button87->BackColor = System::Drawing::Color::LightBlue;
			this->button87->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button87->ForeColor = System::Drawing::Color::Black;
			this->button87->Location = System::Drawing::Point(1241, -148);
			this->button87->Margin = System::Windows::Forms::Padding(4);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(55, 40);
			this->button87->TabIndex = 67;
			this->button87->Text = L"]";
			this->button87->UseVisualStyleBackColor = false;
			this->button87->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::LightBlue;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(329, 100);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(55, 40);
			this->button24->TabIndex = 48;
			this->button24->Text = L"V";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button86
			// 
			this->button86->BackColor = System::Drawing::Color::LightBlue;
			this->button86->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button86->ForeColor = System::Drawing::Color::Black;
			this->button86->Location = System::Drawing::Point(989, -148);
			this->button86->Margin = System::Windows::Forms::Padding(4);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(55, 40);
			this->button86->TabIndex = 71;
			this->button86->Text = L"=";
			this->button86->UseVisualStyleBackColor = false;
			this->button86->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::LightBlue;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(266, 100);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(55, 40);
			this->button23->TabIndex = 49;
			this->button23->Text = L"C";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button85
			// 
			this->button85->BackColor = System::Drawing::Color::LightBlue;
			this->button85->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button85->ForeColor = System::Drawing::Color::Black;
			this->button85->Location = System::Drawing::Point(926, -148);
			this->button85->Margin = System::Windows::Forms::Padding(4);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(55, 40);
			this->button85->TabIndex = 72;
			this->button85->Text = L"+";
			this->button85->UseVisualStyleBackColor = false;
			this->button85->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::LightBlue;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(203, 100);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(55, 40);
			this->button22->TabIndex = 50;
			this->button22->Text = L"X";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button84
			// 
			this->button84->BackColor = System::Drawing::Color::LightBlue;
			this->button84->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button84->ForeColor = System::Drawing::Color::Black;
			this->button84->Location = System::Drawing::Point(863, -148);
			this->button84->Margin = System::Windows::Forms::Padding(4);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(55, 40);
			this->button84->TabIndex = 73;
			this->button84->Text = L"-";
			this->button84->UseVisualStyleBackColor = false;
			this->button84->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::LightBlue;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button62->ForeColor = System::Drawing::Color::Black;
			this->button62->Location = System::Drawing::Point(14, 100);
			this->button62->Margin = System::Windows::Forms::Padding(4);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(55, 40);
			this->button62->TabIndex = 53;
			this->button62->Text = L"<";
			this->button62->UseVisualStyleBackColor = false;
			this->button62->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button83
			// 
			this->button83->BackColor = System::Drawing::Color::LightBlue;
			this->button83->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button83->ForeColor = System::Drawing::Color::Black;
			this->button83->Location = System::Drawing::Point(800, -148);
			this->button83->Margin = System::Windows::Forms::Padding(4);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(55, 40);
			this->button83->TabIndex = 74;
			this->button83->Text = L"_";
			this->button83->UseVisualStyleBackColor = false;
			this->button83->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::LightBlue;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button60->ForeColor = System::Drawing::Color::Black;
			this->button60->Location = System::Drawing::Point(77, 100);
			this->button60->Margin = System::Windows::Forms::Padding(4);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(55, 40);
			this->button60->TabIndex = 52;
			this->button60->Text = L".";
			this->button60->UseVisualStyleBackColor = false;
			this->button60->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button82
			// 
			this->button82->BackColor = System::Drawing::Color::LightBlue;
			this->button82->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button82->ForeColor = System::Drawing::Color::Black;
			this->button82->Location = System::Drawing::Point(737, -148);
			this->button82->Margin = System::Windows::Forms::Padding(4);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(55, 40);
			this->button82->TabIndex = 75;
			this->button82->Text = L"`";
			this->button82->UseVisualStyleBackColor = false;
			this->button82->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightBlue;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(140, 100);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 40);
			this->button12->TabIndex = 51;
			this->button12->Text = L"Z";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button81
			// 
			this->button81->BackColor = System::Drawing::Color::LightBlue;
			this->button81->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button81->ForeColor = System::Drawing::Color::Black;
			this->button81->Location = System::Drawing::Point(1145, -100);
			this->button81->Margin = System::Windows::Forms::Padding(4);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(55, 40);
			this->button81->TabIndex = 83;
			this->button81->Text = L"~";
			this->button81->UseVisualStyleBackColor = false;
			this->button81->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(47, 52);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 40);
			this->button11->TabIndex = 35;
			this->button11->Text = L"A";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(14, 4);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 40);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Q";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel3->Controls->Add(this->button39);
			this->panel3->Controls->Add(this->button38);
			this->panel3->Controls->Add(this->button37);
			this->panel3->Controls->Add(this->button36);
			this->panel3->Controls->Add(this->button59);
			this->panel3->Controls->Add(this->button58);
			this->panel3->Controls->Add(this->button56);
			this->panel3->Controls->Add(this->button55);
			this->panel3->Controls->Add(this->button54);
			this->panel3->Controls->Add(this->button53);
			this->panel3->Controls->Add(this->button35);
			this->panel3->Controls->Add(this->button52);
			this->panel3->Controls->Add(this->button34);
			this->panel3->Controls->Add(this->button33);
			this->panel3->Controls->Add(this->button32);
			this->panel3->Controls->Add(this->button31);
			this->panel3->Controls->Add(this->button43);
			this->panel3->Controls->Add(this->button50);
			this->panel3->Controls->Add(this->button30);
			this->panel3->Controls->Add(this->button49);
			this->panel3->Controls->Add(this->button41);
			this->panel3->Controls->Add(this->button48);
			this->panel3->Controls->Add(this->button51);
			this->panel3->Controls->Add(this->button47);
			this->panel3->Controls->Add(this->button46);
			this->panel3->Controls->Add(this->button45);
			this->panel3->Controls->Add(this->button44);
			this->panel3->Controls->Add(this->button42);
			this->panel3->Controls->Add(this->button40);
			this->panel3->Enabled = false;
			this->panel3->Location = System::Drawing::Point(1, 489);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(650, 146);
			this->panel3->TabIndex = 2;
			this->panel3->Visible = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::LightBlue;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(581, 4);
			this->button39->Margin = System::Windows::Forms::Padding(4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(55, 40);
			this->button39->TabIndex = 66;
			this->button39->Text = L")";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::LightBlue;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(518, 4);
			this->button38->Margin = System::Windows::Forms::Padding(4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(55, 40);
			this->button38->TabIndex = 65;
			this->button38->Text = L"(";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::LightBlue;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(455, 4);
			this->button37->Margin = System::Windows::Forms::Padding(4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(55, 40);
			this->button37->TabIndex = 64;
			this->button37->Text = L"*";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::LightBlue;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button36->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(392, 4);
			this->button36->Margin = System::Windows::Forms::Padding(4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(55, 40);
			this->button36->TabIndex = 63;
			this->button36->Text = L"";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Enigma::Reference);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::LightBlue;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button59->ForeColor = System::Drawing::Color::Black;
			this->button59->Location = System::Drawing::Point(581, 100);
			this->button59->Margin = System::Windows::Forms::Padding(4);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(55, 40);
			this->button59->TabIndex = 85;
			this->button59->Text = L"/";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::LightBlue;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->ForeColor = System::Drawing::Color::Black;
			this->button58->Location = System::Drawing::Point(518, 100);
			this->button58->Margin = System::Windows::Forms::Padding(4);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(55, 40);
			this->button58->TabIndex = 84;
			this->button58->Text = L"\?";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::LightBlue;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->ForeColor = System::Drawing::Color::Black;
			this->button56->Location = System::Drawing::Point(392, 100);
			this->button56->Margin = System::Windows::Forms::Padding(4);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(55, 40);
			this->button56->TabIndex = 82;
			this->button56->Text = L",";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::LightBlue;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->ForeColor = System::Drawing::Color::Black;
			this->button55->Location = System::Drawing::Point(329, 100);
			this->button55->Margin = System::Windows::Forms::Padding(4);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(55, 40);
			this->button55->TabIndex = 81;
			this->button55->Text = L"\'";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::LightBlue;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(266, 100);
			this->button54->Margin = System::Windows::Forms::Padding(4);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(55, 40);
			this->button54->TabIndex = 80;
			this->button54->Text = L"\"";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::LightBlue;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(203, 100);
			this->button53->Margin = System::Windows::Forms::Padding(4);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(55, 40);
			this->button53->TabIndex = 79;
			this->button53->Text = L";";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::LightBlue;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(329, 4);
			this->button35->Margin = System::Windows::Forms::Padding(4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(55, 40);
			this->button35->TabIndex = 62;
			this->button35->Text = L"^";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::LightBlue;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(140, 100);
			this->button52->Margin = System::Windows::Forms::Padding(4);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(55, 40);
			this->button52->TabIndex = 78;
			this->button52->Text = L":";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::LightBlue;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(266, 4);
			this->button34->Margin = System::Windows::Forms::Padding(4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(55, 40);
			this->button34->TabIndex = 61;
			this->button34->Text = L"%";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::LightBlue;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(203, 4);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(55, 40);
			this->button33->TabIndex = 60;
			this->button33->Text = L"$";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::LightBlue;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(140, 4);
			this->button32->Margin = System::Windows::Forms::Padding(4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(55, 40);
			this->button32->TabIndex = 59;
			this->button32->Text = L"#";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::LightBlue;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(77, 4);
			this->button31->Margin = System::Windows::Forms::Padding(4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(55, 40);
			this->button31->TabIndex = 58;
			this->button31->Text = L"@";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::LightBlue;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(77, 100);
			this->button43->Margin = System::Windows::Forms::Padding(4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(55, 40);
			this->button43->TabIndex = 77;
			this->button43->Text = L"\\";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::LightBlue;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->ForeColor = System::Drawing::Color::Black;
			this->button50->Location = System::Drawing::Point(488, 52);
			this->button50->Margin = System::Windows::Forms::Padding(4);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(55, 40);
			this->button50->TabIndex = 68;
			this->button50->Text = L"[";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::LightBlue;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(14, 4);
			this->button30->Margin = System::Windows::Forms::Padding(4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(55, 40);
			this->button30->TabIndex = 57;
			this->button30->Text = L"!";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::LightBlue;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(425, 52);
			this->button49->Margin = System::Windows::Forms::Padding(4);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(55, 40);
			this->button49->TabIndex = 69;
			this->button49->Text = L"}";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::LightBlue;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(14, 100);
			this->button41->Margin = System::Windows::Forms::Padding(4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(55, 40);
			this->button41->TabIndex = 76;
			this->button41->Text = L"|";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::LightBlue;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::Color::Black;
			this->button48->Location = System::Drawing::Point(362, 52);
			this->button48->Margin = System::Windows::Forms::Padding(4);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(55, 40);
			this->button48->TabIndex = 70;
			this->button48->Text = L"{";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::LightBlue;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(551, 52);
			this->button51->Margin = System::Windows::Forms::Padding(4);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(55, 40);
			this->button51->TabIndex = 67;
			this->button51->Text = L"]";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::LightBlue;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::Color::Black;
			this->button47->Location = System::Drawing::Point(299, 52);
			this->button47->Margin = System::Windows::Forms::Padding(4);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(55, 40);
			this->button47->TabIndex = 71;
			this->button47->Text = L"=";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::LightBlue;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::Black;
			this->button46->Location = System::Drawing::Point(236, 52);
			this->button46->Margin = System::Windows::Forms::Padding(4);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(55, 40);
			this->button46->TabIndex = 72;
			this->button46->Text = L"+";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::LightBlue;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->ForeColor = System::Drawing::Color::Black;
			this->button45->Location = System::Drawing::Point(173, 52);
			this->button45->Margin = System::Windows::Forms::Padding(4);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(55, 40);
			this->button45->TabIndex = 73;
			this->button45->Text = L"-";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::LightBlue;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(110, 52);
			this->button44->Margin = System::Windows::Forms::Padding(4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(55, 40);
			this->button44->TabIndex = 74;
			this->button44->Text = L"_";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::LightBlue;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(47, 52);
			this->button42->Margin = System::Windows::Forms::Padding(4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(55, 40);
			this->button42->TabIndex = 75;
			this->button42->Text = L"`";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::LightBlue;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(455, 100);
			this->button40->Margin = System::Windows::Forms::Padding(4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(55, 40);
			this->button40->TabIndex = 83;
			this->button40->Text = L"~";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel2->Controls->Add(this->button28);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button29);
			this->panel2->Location = System::Drawing::Point(1, 637);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(650, 54);
			this->panel2->TabIndex = 1;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::LightBlue;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(120, 4);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(416, 44);
			this->button28->TabIndex = 55;
			this->button28->Text = L" ";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Enigma::Alphabets);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::LightBlue;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Wingdings", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button21->Location = System::Drawing::Point(14, 4);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(99, 44);
			this->button21->TabIndex = 54;
			this->button21->Text = L"";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Enigma::Change_keyboard);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::LightBlue;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Wingdings", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button29->Location = System::Drawing::Point(544, 4);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(92, 44);
			this->button29->TabIndex = 56;
			this->button29->Text = L"";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Enigma::Clear);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->panel4->Controls->Add(this->button71);
			this->panel4->Controls->Add(this->button70);
			this->panel4->Controls->Add(this->button69);
			this->panel4->Controls->Add(this->button68);
			this->panel4->Controls->Add(this->button67);
			this->panel4->Controls->Add(this->button66);
			this->panel4->Controls->Add(this->button65);
			this->panel4->Controls->Add(this->button64);
			this->panel4->Controls->Add(this->button63);
			this->panel4->Controls->Add(this->button57);
			this->panel4->Location = System::Drawing::Point(1, 437);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(650, 50);
			this->panel4->TabIndex = 4;
			// 
			// button71
			// 
			this->button71->BackColor = System::Drawing::Color::LightBlue;
			this->button71->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button71->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button71->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button71->ForeColor = System::Drawing::Color::Black;
			this->button71->Location = System::Drawing::Point(581, 3);
			this->button71->Margin = System::Windows::Forms::Padding(4);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(55, 40);
			this->button71->TabIndex = 24;
			this->button71->Text = L"0";
			this->button71->UseVisualStyleBackColor = false;
			this->button71->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button70
			// 
			this->button70->BackColor = System::Drawing::Color::LightBlue;
			this->button70->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button70->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button70->ForeColor = System::Drawing::Color::Black;
			this->button70->Location = System::Drawing::Point(518, 4);
			this->button70->Margin = System::Windows::Forms::Padding(4);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(55, 40);
			this->button70->TabIndex = 23;
			this->button70->Text = L"9";
			this->button70->UseVisualStyleBackColor = false;
			this->button70->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button69
			// 
			this->button69->BackColor = System::Drawing::Color::LightBlue;
			this->button69->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button69->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button69->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button69->ForeColor = System::Drawing::Color::Black;
			this->button69->Location = System::Drawing::Point(455, 4);
			this->button69->Margin = System::Windows::Forms::Padding(4);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(55, 40);
			this->button69->TabIndex = 22;
			this->button69->Text = L"8";
			this->button69->UseVisualStyleBackColor = false;
			this->button69->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::LightBlue;
			this->button68->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button68->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button68->ForeColor = System::Drawing::Color::Black;
			this->button68->Location = System::Drawing::Point(392, 4);
			this->button68->Margin = System::Windows::Forms::Padding(4);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(55, 40);
			this->button68->TabIndex = 21;
			this->button68->Text = L"7";
			this->button68->UseVisualStyleBackColor = false;
			this->button68->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::Color::LightBlue;
			this->button67->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button67->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button67->ForeColor = System::Drawing::Color::Black;
			this->button67->Location = System::Drawing::Point(329, 4);
			this->button67->Margin = System::Windows::Forms::Padding(4);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(55, 40);
			this->button67->TabIndex = 20;
			this->button67->Text = L"6";
			this->button67->UseVisualStyleBackColor = false;
			this->button67->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::Color::LightBlue;
			this->button66->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button66->FlatAppearance->BorderSize = 5;
			this->button66->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button66->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button66->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button66->ForeColor = System::Drawing::Color::Black;
			this->button66->Location = System::Drawing::Point(266, 4);
			this->button66->Margin = System::Windows::Forms::Padding(4);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(55, 40);
			this->button66->TabIndex = 19;
			this->button66->Text = L"5";
			this->button66->UseVisualStyleBackColor = false;
			this->button66->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button65
			// 
			this->button65->BackColor = System::Drawing::Color::LightBlue;
			this->button65->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button65->FlatAppearance->BorderSize = 5;
			this->button65->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button65->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button65->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button65->ForeColor = System::Drawing::Color::Black;
			this->button65->Location = System::Drawing::Point(203, 4);
			this->button65->Margin = System::Windows::Forms::Padding(4);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(55, 40);
			this->button65->TabIndex = 18;
			this->button65->Text = L"4";
			this->button65->UseVisualStyleBackColor = false;
			this->button65->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::Color::LightBlue;
			this->button64->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button64->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button64->ForeColor = System::Drawing::Color::Black;
			this->button64->Location = System::Drawing::Point(140, 4);
			this->button64->Margin = System::Windows::Forms::Padding(4);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(55, 40);
			this->button64->TabIndex = 17;
			this->button64->Text = L"3";
			this->button64->UseVisualStyleBackColor = false;
			this->button64->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::LightBlue;
			this->button63->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button63->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button63->ForeColor = System::Drawing::Color::Black;
			this->button63->Location = System::Drawing::Point(77, 4);
			this->button63->Margin = System::Windows::Forms::Padding(4);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(55, 40);
			this->button63->TabIndex = 16;
			this->button63->Text = L"2";
			this->button63->UseVisualStyleBackColor = false;
			this->button63->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::LightBlue;
			this->button57->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button57->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->ForeColor = System::Drawing::Color::Black;
			this->button57->Location = System::Drawing::Point(14, 4);
			this->button57->Margin = System::Windows::Forms::Padding(4);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(55, 40);
			this->button57->TabIndex = 15;
			this->button57->Text = L"1";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &Enigma::Numbers);
			// 
			// button72
			// 
			this->button72->BackColor = System::Drawing::Color::LightBlue;
			this->button72->Enabled = false;
			this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button72->ForeColor = System::Drawing::Color::Black;
			this->button72->Location = System::Drawing::Point(197, 94);
			this->button72->Margin = System::Windows::Forms::Padding(4);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(49, 44);
			this->button72->TabIndex = 9;
			this->button72->Text = L"R1";
			this->button72->UseVisualStyleBackColor = false;
			this->button72->Click += gcnew System::EventHandler(this, &Enigma::Rotor1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(189, 40);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->MaxLength = 2;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(61, 46);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Enigma::Rotor1_key);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(104, 40);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->MaxLength = 2;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(61, 46);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Enigma::Rotor2_key);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(22, 40);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->MaxLength = 2;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 46);
			this->textBox3->TabIndex = 4;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Enigma::Rotor3_key);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(197, 261);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->MaxLength = 2147483647;
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox4->Size = System::Drawing::Size(440, 83);
			this->textBox4->TabIndex = 3;
			this->textBox4->WordWrap = false;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Enigma::Enter_message);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(186, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 26);
			this->label1->TabIndex = 87;
			this->label1->Text = L"Rotor 1";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(100, 14);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 26);
			this->label2->TabIndex = 86;
			this->label2->Text = L"Rotor 2";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(18, 14);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 26);
			this->label3->TabIndex = 85;
			this->label3->Text = L"Rotor 3";
			// 
			// button75
			// 
			this->button75->BackColor = System::Drawing::Color::LightBlue;
			this->button75->Enabled = false;
			this->button75->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button75->Font = (gcnew System::Drawing::Font(L"Elephant", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button75->ForeColor = System::Drawing::Color::Black;
			this->button75->Location = System::Drawing::Point(22, 170);
			this->button75->Margin = System::Windows::Forms::Padding(4);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(144, 35);
			this->button75->TabIndex = 11;
			this->button75->Text = L"SET ROTOR";
			this->button75->UseVisualStyleBackColor = false;
			this->button75->Visible = false;
			this->button75->Click += gcnew System::EventHandler(this, &Enigma::Start);
			// 
			// button76
			// 
			this->button76->BackColor = System::Drawing::Color::LightBlue;
			this->button76->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button76->Enabled = false;
			this->button76->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button76->Font = (gcnew System::Drawing::Font(L"Elephant", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button76->ForeColor = System::Drawing::Color::Black;
			this->button76->Location = System::Drawing::Point(22, 218);
			this->button76->Margin = System::Windows::Forms::Padding(4);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(144, 35);
			this->button76->TabIndex = 12;
			this->button76->Text = L"CANCEL";
			this->button76->UseVisualStyleBackColor = false;
			this->button76->Visible = false;
			this->button76->Click += gcnew System::EventHandler(this, &Enigma::Cancel);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(197, 170);
			this->textBox5->Margin = System::Windows::Forms::Padding(0);
			this->textBox5->MaxLength = 2147483647;
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox5->Size = System::Drawing::Size(440, 83);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"OPTION 1 FOR LETTER BY LETTER.\r\nOPTION 2 FOR WORDS OR PASTE TEXTS.";
			this->textBox5->WordWrap = false;
			this->textBox5->Click += gcnew System::EventHandler(this, &Enigma::textBox5_click);
			// 
			// button73
			// 
			this->button73->BackColor = System::Drawing::Color::LightBlue;
			this->button73->Enabled = false;
			this->button73->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button73->ForeColor = System::Drawing::Color::Black;
			this->button73->Location = System::Drawing::Point(111, 94);
			this->button73->Margin = System::Windows::Forms::Padding(4);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(49, 44);
			this->button73->TabIndex = 8;
			this->button73->Text = L"R2";
			this->button73->UseVisualStyleBackColor = false;
			this->button73->Click += gcnew System::EventHandler(this, &Enigma::Rotor2);
			// 
			// button74
			// 
			this->button74->BackColor = System::Drawing::Color::LightBlue;
			this->button74->Enabled = false;
			this->button74->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button74->ForeColor = System::Drawing::Color::Black;
			this->button74->Location = System::Drawing::Point(29, 94);
			this->button74->Margin = System::Windows::Forms::Padding(4);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(49, 44);
			this->button74->TabIndex = 7;
			this->button74->Text = L"R3";
			this->button74->UseVisualStyleBackColor = false;
			this->button74->Click += gcnew System::EventHandler(this, &Enigma::Rotor3);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"*.txt";
			this->saveFileDialog1->Filter = L"Text files (*.txt)|*.txt";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(359, 40);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 85);
			this->label4->TabIndex = 0;
			this->label4->Text = L"ROTOR HEAD CAN POINT\r\nBETWEEN 1 TO 68 ONLY\r\n";
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::Color::LightBlue;
			this->button77->Enabled = false;
			this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button77->Font = (gcnew System::Drawing::Font(L"Elephant", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button77->ForeColor = System::Drawing::Color::Black;
			this->button77->Location = System::Drawing::Point(22, 261);
			this->button77->Margin = System::Windows::Forms::Padding(4);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(144, 35);
			this->button77->TabIndex = 14;
			this->button77->Text = L"SAVE";
			this->button77->UseVisualStyleBackColor = false;
			this->button77->Visible = false;
			this->button77->Click += gcnew System::EventHandler(this, &Enigma::Save);
			// 
			// button78
			// 
			this->button78->BackColor = System::Drawing::Color::LightBlue;
			this->button78->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button78->Enabled = false;
			this->button78->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button78->Font = (gcnew System::Drawing::Font(L"Elephant", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button78->ForeColor = System::Drawing::Color::Black;
			this->button78->Location = System::Drawing::Point(22, 309);
			this->button78->Margin = System::Windows::Forms::Padding(4);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(144, 35);
			this->button78->TabIndex = 13;
			this->button78->Text = L"OK";
			this->button78->UseVisualStyleBackColor = false;
			this->button78->Visible = false;
			this->button78->Click += gcnew System::EventHandler(this, &Enigma::Ok);
			// 
			// button79
			// 
			this->button79->BackColor = System::Drawing::Color::LightBlue;
			this->button79->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button79->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button79->Font = (gcnew System::Drawing::Font(L"Elephant", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button79->ForeColor = System::Drawing::Color::Black;
			this->button79->Location = System::Drawing::Point(22, 170);
			this->button79->Margin = System::Windows::Forms::Padding(4);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(144, 83);
			this->button79->TabIndex = 1;
			this->button79->Text = L"1. ENTER LETTERS";
			this->button79->UseVisualStyleBackColor = false;
			this->button79->Click += gcnew System::EventHandler(this, &Enigma::Char_By_Char);
			// 
			// button80
			// 
			this->button80->BackColor = System::Drawing::Color::LightBlue;
			this->button80->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button80->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button80->Font = (gcnew System::Drawing::Font(L"Elephant", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button80->ForeColor = System::Drawing::Color::Black;
			this->button80->Location = System::Drawing::Point(22, 261);
			this->button80->Margin = System::Windows::Forms::Padding(4);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(144, 83);
			this->button80->TabIndex = 2;
			this->button80->Text = L"2. ENTER WORDS\r\nOR PASTE TEXT";
			this->button80->UseVisualStyleBackColor = false;
			this->button80->Click += gcnew System::EventHandler(this, &Enigma::String);
			// 
			// Enigma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(653, 692);
			this->Controls->Add(this->button80);
			this->Controls->Add(this->button79);
			this->Controls->Add(this->button78);
			this->Controls->Add(this->button76);
			this->Controls->Add(this->button77);
			this->Controls->Add(this->button75);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button74);
			this->Controls->Add(this->button73);
			this->Controls->Add(this->button72);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(671, 739);
			this->MinimumSize = System::Drawing::Size(671, 739);
			this->Name = L"Enigma";
			this->Text = L"Enigma";
			this->Load += gcnew System::EventHandler(this, &Enigma::Enigma_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Char b;
		int a = 0;
		int c = 0;
		int r1, r2, r3;

private: System::Void Alphabets(System::Object^ sender, System::EventArgs^ e) {
	Button^ Char = safe_cast<Button^>(sender);
	if (textBox4->Enabled == true && textBox4->ReadOnly == false)
	{
		if (a == 1)
		{
			textBox4->Text += Char->Text;
			if (Char->Text != " ")
			{
				b = message(Char->Text[0]);
				textBox5->Text += b.ToString();
				textBox1->Text = r1top.ToString();
				textBox2->Text = r2top.ToString();
				textBox3->Text = r3top.ToString();
			}
			else
			{
				textBox5->Text += Char->Text;
			}
			textBox4->SelectionStart = textBox4->Text->Length;
			textBox5->SelectionStart = textBox5->Text->Length;
			textBox5->ScrollToCaret();
		}
		else
		{
			c = textBox4->SelectionStart;
			textBox4->Text = textBox4->Text->Insert(c, Char->Text);
			textBox4->SelectionStart = c + 1;
		}
		textBox4->ScrollToCaret();
		textBox4->Focus();
	}
	else if (textBox1->Enabled == true)
	{
		textBox1->Focus();
	}
	else if (textBox2->Enabled == true)
	{
		textBox2->Focus();
	}
	else if (textBox3->Enabled == true)
	{
		textBox3->Focus();
	}
	else
	{
		label1->Focus();
	}
}
private: System::Void Change_keyboard(System::Object^ sender, System::EventArgs^ e) {
	if (panel1->Enabled == false)
	{
		panel1->Show();
		panel1->Enabled = true;
		panel3->Hide();
		panel3->Enabled = false;
	}
	else
	{
		panel3->Show();
		panel3->Enabled = true;
		panel1->Hide();
		panel1->Enabled = false;
	}
	if (textBox4->Enabled == true)
	{
		textBox4->Focus();
	}
	else if (textBox1->Enabled == true)
	{
		textBox1->Focus();
	}
	else if (textBox2->Enabled == true)
	{
		textBox2->Focus();
	}
	else if (textBox3->Enabled == true)
	{
		textBox3->Focus();
	}
	else
	{
		label1->Focus();
	}
}
private: System::Void Numbers(System::Object^ sender, System::EventArgs^ e) {
	Button^ Char = safe_cast<Button^>(sender);

	if (textBox1->Enabled == true)
	{
		if (textBox1->Text->Length < 2)
		{
			textBox1->Text += Char->Text;
		}
		textBox1->SelectionStart = textBox1->Text->Length;
		textBox1->Focus();
	}
	else if (textBox2->Enabled == true)
	{
		if (textBox2->Text->Length < 2)
		{
			textBox2->Text += Char->Text;
		}
		textBox2->SelectionStart = textBox2->Text->Length;
		textBox2->Focus();
	}
	else if (textBox3->Enabled == true)
	{
		if (textBox3->Text->Length < 2)
		{
			textBox3->Text += Char->Text;
		}
		textBox1->SelectionStart = textBox1->Text->Length;
		textBox1->Focus();
	}
	else if (textBox4->Enabled == true && textBox4->ReadOnly == false)
	{
		if (a == 1)
		{
			textBox4->Text += Char->Text;
			b = message(Char->Text[0]);
			textBox5->Text += b.ToString();
			textBox1->Text = r1top.ToString();
			textBox2->Text = r2top.ToString();
			textBox3->Text = r3top.ToString();
			textBox4->SelectionStart = textBox4->Text->Length;
			textBox5->SelectionStart = textBox5->Text->Length;
			textBox5->ScrollToCaret();
		}
		else
		{
			c = textBox4->SelectionStart;
			textBox4->Text = textBox4->Text->Insert(c, Char->Text);
			textBox4->SelectionStart = c + 1;
		}
		textBox4->ScrollToCaret();
		textBox4->Focus();
	}
	else
	{
		label1->Focus();
	}
}
private: System::Void Start(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "Please Specify Rotor 1 Head and\r"
		"\nPress R1 Or Enter Key";
	textBox1->Enabled = true;
	textBox1->Focus();
	button72->Enabled = true;
	textBox4->ReadOnly = false;
	textBox4->Text = "";
	textBox4->Enabled = false;
}
private: System::Void Rotor1(System::Object^ sender, System::EventArgs^ e) {
	c = textBox1->Text->Length > 0 ? int::Parse(textBox1->Text) : 0;
	if (c >= 1 && c <= 68)
	{
		textBox1->Enabled = false;
		button72->Enabled = false;
		r1 = r1top = c;
		textBox5->Text = "Please Specify Rotor 2 Head and\r"
			"\nPress R2 Or Enter Key";
		textBox2->Enabled = true;
		button73->Enabled = true;
		textBox2->Focus();
	}

	else
	{
		MessageBox::Show("Please Enter Rotor head between 1 to 68 Only");
		textBox1->Focus();
	}
}
private: System::Void Rotor2(System::Object^ sender, System::EventArgs^ e) {
	c = textBox2->Text->Length > 0 ? int::Parse(textBox2->Text) : 0;
	if (c >= 1 && c <= 68)
	{
		textBox2->Enabled = false;
		button73->Enabled = false;
		r2 = r2top = c;
		textBox5->Text = "Please Specify Rotor 3 Head and \r"
			"\nPress R3 Or Enter Key";
		textBox3->Enabled = true;
		button74->Enabled = true;
		textBox3->Focus();
	}

	else
	{
		MessageBox::Show("Please Enter Rotor head between 1 to 68 Only");
		textBox2->Focus();
	}
}
private: System::Void Rotor3(System::Object^ sender, System::EventArgs^ e) {
	c = textBox3->Text->Length > 0 ? int::Parse(textBox3->Text) : 0;
	if (c >= 1 && c <= 68)
	{
		textBox3->Enabled = false;
		button74->Enabled = false;
		r3 = r3top = c;
		textBox5->Text = "";
		textBox4->Enabled = true;
		textBox4->Focus();
		button77->Enabled = true;
		if (a == 2)
		{
			button78->Enabled = true;
		}
	}

	else
	{
		MessageBox::Show("Please Enter Rotor head between 1 to 68 Only");
		textBox3->Focus();
	}
}
private: System::Void Reference(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Enabled == true)
	{
		b = 38;
		if (textBox4->Enabled == true && textBox4->ReadOnly == false)
		{
			if (a == 1)
			{
				textBox4->Text += b;
				b = message(b);
				textBox5->Text += b.ToString();
				textBox1->Text = r1top.ToString();
				textBox2->Text = r2top.ToString();
				textBox3->Text = r3top.ToString();
				textBox4->SelectionStart = textBox4->Text->Length;
				textBox5->SelectionStart = textBox5->Text->Length;
				textBox5->ScrollToCaret();
			}
			else
			{
				c = textBox4->SelectionStart;
				textBox4->Text = textBox4->Text->Insert(c, b.ToString());
				textBox4->SelectionStart = c + 1;
			}
			textBox4->ScrollToCaret();
			textBox4->Focus();
		}
	}
	else if (textBox1->Enabled == true)
	{
		textBox1->Focus();
	}
	else if (textBox2->Enabled == true)
	{
		textBox2->Focus();
	}
	else if (textBox3->Enabled == true)
	{
		textBox3->Focus();
	}
	else
	{
		label1->Focus();
	}
}
private: System::Void Cancel(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox5->Text = "OPTION 1 FOR LETTER BY LETTER.\r" +
					 "\nOPTION 2 FOR WORDS OR PASTE TEXTS.";
	textBox4->Text = "";
	textBox4->ReadOnly = false;
	textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
	button72->Enabled = false;
	button73->Enabled = false;
	button74->Enabled = false;
	button75->Enabled = false;
	button76->Enabled = false;
	button77->Enabled = false;
	button78->Enabled = false;
	button75->Hide();
	button76->Hide();
	button77->Hide();
	button78->Hide();
	button79->Enabled = true;
	button80->Enabled = true;
	button79->Show();
	button80->Show();
	label1->Focus();
}
private: System::Void Enigma_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox5->ScrollToCaret();
	textBox5->SelectionStart = textBox5->Text->Length;
}
private: System::Void Rotor1_key(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	b = e->KeyChar;
	if (b == 13)
	{
		e->Handled = true;
		button72->PerformClick();
	}
	else if (!(b >= '0' && b <= '9') && b != 8)
	{
		e->Handled = true;
	}
	else if (b == 8)
	{
		e->Handled = true;
		Clear(".", e);
	}
	textBox1->SelectionStart = textBox1->Text->Length;
	textBox1->Focus();
}
private: System::Void Rotor2_key(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	b = e->KeyChar;
	if (b == 13)
	{
		e->Handled = true;
		button73->PerformClick();
	}
	else if (!(b >= '0' && b <= '9') && b != 8)
	{
		e->Handled = true;
	}
	else if (b == 8)
	{
		e->Handled = true;
		Clear(".", e);
	}
	textBox2->SelectionStart = textBox2->Text->Length;
	textBox2->Focus();
}
private: System::Void Rotor3_key(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	b = e->KeyChar;
	if (b == 13)
	{
		e->Handled = true;
		button74->PerformClick();
	}
	else if (!(b >= '0' && b <= '9') && b != 8)
	{
		e->Handled = true;
	}
	else if (b == 8)
	{
		e->Handled = true;
		Clear(".", e);
	}
	textBox3->SelectionStart = textBox3->Text->Length;
	textBox3->Focus();
}
private: System::Void Clear(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Enabled == true && textBox4->ReadOnly == false)
	{
		if (textBox4->Text->Length > 0)
		{
			if (a == 1)
			{
				b = textBox4->Text[textBox4->Text->Length - 1];
				textBox4->Text = textBox4->Text->Remove(textBox4->Text->Length - 1, 1);
				textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 1, 1);
				if (b >= 33 && b <= 126)
				{
					r1top--;
					if (r1top == 0)
					{
						r1top = 68;
						r2top--;
					}
					if (r2top == 0)
					{
						r2top = 68;
						r3top--;
					}
					if (r3top == 0)
					{
						r3top = 68;
					}
					textBox1->Text = r1top.ToString();
					textBox2->Text = r2top.ToString();
					textBox3->Text = r3top.ToString();
				}
				textBox4->SelectionStart = textBox4->Text->Length;
				textBox5->SelectionStart = textBox5->Text->Length;
				textBox5->ScrollToCaret();
			}
			else
			{
				c = textBox4->SelectionStart;
				if (c > 0)
				{
					textBox4->Text = textBox4->Text->Remove(c - 1, 1);
					textBox4->SelectionStart = c - 1;
				}
			}
		}
		textBox4->ScrollToCaret();
		textBox4->Focus();
	}
	else if (textBox1->Enabled == true)
	{
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
		textBox1->SelectionStart = textBox1->Text->Length;
		textBox1->Focus();
	}
	else if (textBox2->Enabled == true)
	{
		if (textBox2->Text->Length > 0)
		{
			textBox2->Text = textBox2->Text->Remove(textBox2->Text->Length - 1, 1);
		}
		textBox2->SelectionStart = textBox2->Text->Length;
		textBox2->Focus();
	}
	else if (textBox3->Enabled == true)
	{
		if (textBox3->Text->Length > 0)
		{
			textBox3->Text = textBox3->Text->Remove(textBox3->Text->Length - 1, 1);
		}
		textBox3->SelectionStart = textBox3->Text->Length;
		textBox3->Focus();
	}
	else
	{
		label1->Focus();
	}
}
private: System::Void Enter_message(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	b = e->KeyChar;
	if (textBox4->Enabled == true)
	{
		if (b == 13)
		{
			e->Handled = true;
			button77->PerformClick();
		}
		else if (b == 32)
		{
			textBox5->Text += b;
		}
		else if (b >= 33 && b <= 126)
		{
			if (a == 1)
			{
				b = message(b);
				textBox5->Text += b.ToString();
				textBox1->Text = r1top.ToString();
				textBox2->Text = r2top.ToString();
				textBox3->Text = r3top.ToString();
			}
		}
		else if (b == 8)
		{
			e->Handled = true;
			Clear(".", e);
		}
	}
	if (a == 1)
	{
		textBox4->SelectionStart = textBox4->Text->Length;
		textBox5->SelectionStart = textBox5->Text->Length;
		textBox5->ScrollToCaret();
	}
	textBox4->ScrollToCaret();
	textBox4->Focus();
}
private: System::Void Save(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text->Length > 0)
	{
		if(saveFileDialog1->ShowDialog()!=Windows::Forms::DialogResult::Cancel)
		{
			System::IO::File::WriteAllText(saveFileDialog1->FileName, "Rotor 1 Head : " + r1.ToString() + Char(13)
				+ "Rotor 2 Head : " + r2.ToString() + Char(13)
				+ "Rotor 3 Head : " + r3.ToString() + Char(13)
				+ "Resultant Message is : " + textBox5->Text);
		}
	}
	else
	{
		MessageBox::Show("Please enter some text");
	}
	textBox4->Focus();
}
private: System::Void Ok(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text->Length > 0)
	{
		for (int i = 0; i < textBox4->Text->Length; i++)
		{
			b = textBox4->Text[i];
			if (b >= 33 && b <= 126)
			{
				b = message(b);
			}

			textBox5->Text += b.ToString();
			textBox1->Text = r1top.ToString();
			textBox2->Text = r2top.ToString();
			textBox3->Text = r3top.ToString();
			textBox5->SelectionStart = textBox5->Text->Length;
			textBox5->ScrollToCaret();
		}
		button78->Enabled = false;
		textBox4->ReadOnly = true;
	}
	else
	{
		MessageBox::Show("Please enter some text");
	}
	textBox4->Focus();
}
private: System::Void Char_By_Char(System::Object^ sender, System::EventArgs^ e) {
	a = 1;
	textBox5->Text = "CLICK ON SET ROTOR";
	button79->Enabled = false;
	button80->Enabled = false;
	button79->Hide();
	button80->Hide();
	button75->Show();
	button76->Show();
	button77->Show();
	button78->Show();
	button75->Enabled = true;
	button76->Enabled = true;
	label1->Focus();
}
private: System::Void String(System::Object^ sender, System::EventArgs^ e) {
	a = 2;
	textBox5->Text = "CLICK ON SET ROTOR";
	button79->Enabled = false;
	button80->Enabled = false;
	button79->Hide();
	button80->Hide();
	button75->Show();
	button76->Show();
	button77->Show();
	button78->Show();
	button75->Enabled = true;
	button76->Enabled = true;
	label1->Focus();
}
private: System::Void textBox5_click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Enabled == true)
	{
		textBox1->Focus();
	}
	else if (textBox2->Enabled == true)
	{
		textBox2->Focus();
	}
	else if (textBox1->Enabled == true)
	{
		textBox3->Focus();
	}
	else if (textBox4->Enabled == true)
	{
		textBox4->Focus();
	}
	else
	{
		label1->Focus();
	}
}
};
}
