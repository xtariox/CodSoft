#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnerase;
	protected:

	private: System::Windows::Forms::TextBox^ textdisplay;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btndivide;
	private: System::Windows::Forms::Button^ btnmultiply;





	private: System::Windows::Forms::Button^ btndigit7;
	private: System::Windows::Forms::Button^ btndigit8;
	private: System::Windows::Forms::Button^ btndigit9;
	private: System::Windows::Forms::Button^ btnsubstract;




	private: System::Windows::Forms::Button^ btndigit4;
	private: System::Windows::Forms::Button^ btndigit5;
	private: System::Windows::Forms::Button^ btndigit6;
	private: System::Windows::Forms::Button^ btnadd;




	private: System::Windows::Forms::Button^ btndigit1;
	private: System::Windows::Forms::Button^ btndigit2;
	private: System::Windows::Forms::Button^ btndigit3;
	private: System::Windows::Forms::Button^ btnequal;




	private: System::Windows::Forms::Button^ btnpoint;

	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btndigit0;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnerase = (gcnew System::Windows::Forms::Button());
			this->textdisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btndivide = (gcnew System::Windows::Forms::Button());
			this->btnmultiply = (gcnew System::Windows::Forms::Button());
			this->btndigit7 = (gcnew System::Windows::Forms::Button());
			this->btndigit8 = (gcnew System::Windows::Forms::Button());
			this->btndigit9 = (gcnew System::Windows::Forms::Button());
			this->btnsubstract = (gcnew System::Windows::Forms::Button());
			this->btndigit4 = (gcnew System::Windows::Forms::Button());
			this->btndigit5 = (gcnew System::Windows::Forms::Button());
			this->btndigit6 = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->btndigit1 = (gcnew System::Windows::Forms::Button());
			this->btndigit2 = (gcnew System::Windows::Forms::Button());
			this->btndigit3 = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btnpoint = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btndigit0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnerase
			// 
			this->btnerase->BackColor = System::Drawing::Color::Thistle;
			this->btnerase->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnerase->Location = System::Drawing::Point(12, 89);
			this->btnerase->Name = L"btnerase";
			this->btnerase->Size = System::Drawing::Size(80, 80);
			this->btnerase->TabIndex = 0;
			this->btnerase->Text = L"";
			this->btnerase->UseVisualStyleBackColor = false;
			this->btnerase->Click += gcnew System::EventHandler(this, &MyForm::btnerase_Click);
			// 
			// textdisplay
			// 
			this->textdisplay->BackColor = System::Drawing::Color::White;
			this->textdisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textdisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textdisplay->Location = System::Drawing::Point(12, 12);
			this->textdisplay->Multiline = true;
			this->textdisplay->Name = L"textdisplay";
			this->textdisplay->Size = System::Drawing::Size(338, 71);
			this->textdisplay->TabIndex = 1;
			this->textdisplay->Text = L"0";
			this->textdisplay->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textdisplay_Click);
			this->textdisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::Thistle;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(98, 89);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(80, 80);
			this->btnC->TabIndex = 0;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btndivide
			// 
			this->btndivide->BackColor = System::Drawing::Color::Thistle;
			this->btndivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndivide->Location = System::Drawing::Point(270, 89);
			this->btndivide->Name = L"btndivide";
			this->btndivide->Size = System::Drawing::Size(80, 80);
			this->btndivide->TabIndex = 0;
			this->btndivide->Text = L"/";
			this->btndivide->UseVisualStyleBackColor = false;
			this->btndivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnmultiply
			// 
			this->btnmultiply->BackColor = System::Drawing::Color::Thistle;
			this->btnmultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmultiply->Location = System::Drawing::Point(270, 175);
			this->btnmultiply->Name = L"btnmultiply";
			this->btnmultiply->Size = System::Drawing::Size(80, 80);
			this->btnmultiply->TabIndex = 0;
			this->btnmultiply->Text = L"x";
			this->btnmultiply->UseVisualStyleBackColor = false;
			this->btnmultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btndigit7
			// 
			this->btndigit7->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit7->Location = System::Drawing::Point(12, 175);
			this->btndigit7->Name = L"btndigit7";
			this->btndigit7->Size = System::Drawing::Size(80, 80);
			this->btndigit7->TabIndex = 0;
			this->btndigit7->Text = L"7";
			this->btndigit7->UseVisualStyleBackColor = false;
			this->btndigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btndigit8
			// 
			this->btndigit8->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit8->Location = System::Drawing::Point(98, 175);
			this->btndigit8->Name = L"btndigit8";
			this->btndigit8->Size = System::Drawing::Size(80, 80);
			this->btndigit8->TabIndex = 0;
			this->btndigit8->Text = L"8";
			this->btndigit8->UseVisualStyleBackColor = false;
			this->btndigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btndigit9
			// 
			this->btndigit9->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit9->Location = System::Drawing::Point(184, 175);
			this->btndigit9->Name = L"btndigit9";
			this->btndigit9->Size = System::Drawing::Size(80, 80);
			this->btndigit9->TabIndex = 0;
			this->btndigit9->Text = L"9";
			this->btndigit9->UseVisualStyleBackColor = false;
			this->btndigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnsubstract
			// 
			this->btnsubstract->BackColor = System::Drawing::Color::Thistle;
			this->btnsubstract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsubstract->Location = System::Drawing::Point(270, 261);
			this->btnsubstract->Name = L"btnsubstract";
			this->btnsubstract->Size = System::Drawing::Size(80, 80);
			this->btnsubstract->TabIndex = 0;
			this->btnsubstract->Text = L"-";
			this->btnsubstract->UseVisualStyleBackColor = false;
			this->btnsubstract->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btndigit4
			// 
			this->btndigit4->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit4->Location = System::Drawing::Point(12, 261);
			this->btndigit4->Name = L"btndigit4";
			this->btndigit4->Size = System::Drawing::Size(80, 80);
			this->btndigit4->TabIndex = 0;
			this->btndigit4->Text = L"4";
			this->btndigit4->UseVisualStyleBackColor = false;
			this->btndigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btndigit5
			// 
			this->btndigit5->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit5->Location = System::Drawing::Point(98, 261);
			this->btndigit5->Name = L"btndigit5";
			this->btndigit5->Size = System::Drawing::Size(80, 80);
			this->btndigit5->TabIndex = 0;
			this->btndigit5->Text = L"5";
			this->btndigit5->UseVisualStyleBackColor = false;
			this->btndigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btndigit6
			// 
			this->btndigit6->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit6->Location = System::Drawing::Point(184, 261);
			this->btndigit6->Name = L"btndigit6";
			this->btndigit6->Size = System::Drawing::Size(80, 80);
			this->btndigit6->TabIndex = 0;
			this->btndigit6->Text = L"6";
			this->btndigit6->UseVisualStyleBackColor = false;
			this->btndigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::Color::Thistle;
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->Location = System::Drawing::Point(270, 347);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(80, 80);
			this->btnadd->TabIndex = 0;
			this->btnadd->Text = L"+";
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btndigit1
			// 
			this->btndigit1->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit1->Location = System::Drawing::Point(12, 347);
			this->btndigit1->Name = L"btndigit1";
			this->btndigit1->Size = System::Drawing::Size(80, 80);
			this->btndigit1->TabIndex = 0;
			this->btndigit1->Text = L"1";
			this->btndigit1->UseVisualStyleBackColor = false;
			this->btndigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btndigit2
			// 
			this->btndigit2->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit2->Location = System::Drawing::Point(98, 347);
			this->btndigit2->Name = L"btndigit2";
			this->btndigit2->Size = System::Drawing::Size(80, 80);
			this->btndigit2->TabIndex = 0;
			this->btndigit2->Text = L"2";
			this->btndigit2->UseVisualStyleBackColor = false;
			this->btndigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btndigit3
			// 
			this->btndigit3->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit3->Location = System::Drawing::Point(184, 347);
			this->btndigit3->Name = L"btndigit3";
			this->btndigit3->Size = System::Drawing::Size(80, 80);
			this->btndigit3->TabIndex = 0;
			this->btndigit3->Text = L"3\r\n";
			this->btndigit3->UseVisualStyleBackColor = false;
			this->btndigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::Color::Thistle;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(270, 433);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(80, 80);
			this->btnequal->TabIndex = 0;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnequal_Click);
			// 
			// btnpoint
			// 
			this->btnpoint->BackColor = System::Drawing::Color::Thistle;
			this->btnpoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpoint->Location = System::Drawing::Point(184, 433);
			this->btnpoint->Name = L"btnpoint";
			this->btnpoint->Size = System::Drawing::Size(80, 80);
			this->btnpoint->TabIndex = 0;
			this->btnpoint->Text = L".";
			this->btnpoint->UseVisualStyleBackColor = false;
			this->btnpoint->Click += gcnew System::EventHandler(this, &MyForm::btndecimal_Click);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::Color::Thistle;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(184, 89);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(80, 80);
			this->btnCE->TabIndex = 0;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btndigit0
			// 
			this->btndigit0->BackColor = System::Drawing::Color::DarkGray;
			this->btndigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndigit0->Location = System::Drawing::Point(98, 433);
			this->btndigit0->Name = L"btndigit0";
			this->btndigit0->Size = System::Drawing::Size(80, 80);
			this->btndigit0->TabIndex = 0;
			this->btndigit0->Text = L"0";
			this->btndigit0->UseVisualStyleBackColor = false;
			this->btndigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(366, 548);
			this->Controls->Add(this->textdisplay);
			this->Controls->Add(this->btndigit0);
			this->Controls->Add(this->btnpoint);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btndigit3);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->btndigit6);
			this->Controls->Add(this->btnsubstract);
			this->Controls->Add(this->btndigit2);
			this->Controls->Add(this->btndigit9);
			this->Controls->Add(this->btndigit5);
			this->Controls->Add(this->btnmultiply);
			this->Controls->Add(this->btndigit1);
			this->Controls->Add(this->btndigit8);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btndigit4);
			this->Controls->Add(this->btndivide);
			this->Controls->Add(this->btndigit7);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnerase);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstOper, secondOper, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void EnterNum(System::Object^ sender, System::EventArgs^ e) {
		Button^ num = safe_cast<Button^>(sender);

		if (textdisplay->Text == "0") {
			textdisplay->Text = num->Text;
		}
		else {
			textdisplay->Text = textdisplay->Text + num->Text;

		}

	}

	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ numops = safe_cast<Button^>(sender);
		firstOper = Double::Parse(textdisplay->Text);
		textdisplay->Text = "";
		operators = numops->Text;
	}
	private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {

		secondOper = Double::Parse(textdisplay->Text);

		if (operators == "+") {
			result = firstOper + secondOper;
			textdisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "-") {
			result = firstOper - secondOper;
			textdisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "x") {
			result = firstOper * secondOper;
			textdisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "/") {
			result = firstOper / secondOper;
			textdisplay->Text = System::Convert::ToString(result);
		}

	}
	private: System::Void btndecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!textdisplay->Text->Contains(".")) {
			textdisplay->Text = textdisplay->Text + ".";
		}
	}
	private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
		textdisplay->Text = "0";
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
		textdisplay->Text = "0";
	}
	private: System::Void btnerase_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textdisplay->Text->Length > 0) {
			textdisplay->Text = textdisplay->Text->Remove(textdisplay->Text->Length - 1, 1);
		}
		if (textdisplay->Text == "") {
			textdisplay->Text = "0";
		}
	}
	
private: System::Void textdisplay_Click(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
};
}