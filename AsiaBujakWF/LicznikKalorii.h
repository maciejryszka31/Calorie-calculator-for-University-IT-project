#pragma once

namespace AsiaBujakWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LicznikKalorii
	/// </summary>
	public ref class LicznikKalorii : public System::Windows::Forms::Form
	{
	public:
		LicznikKalorii(void)
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
		~LicznikKalorii()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Calculate;
	private: System::Windows::Forms::TextBox^  weightTextBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  manRadioButton;

	private: System::Windows::Forms::RadioButton^  womanRadioButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  mediumActiveRadioButton;

	private: System::Windows::Forms::RadioButton^  activeRadioButton;

	private: System::Windows::Forms::RadioButton^  veryActiveRadioButton;
	private: System::Windows::Forms::RadioButton^  littleActiveRadioButton;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  heightTextBox;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  ageTextBox;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  resultLabel;



	protected:

	protected:

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
			this->Calculate = (gcnew System::Windows::Forms::Button());
			this->weightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->manRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->womanRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->littleActiveRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->mediumActiveRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->activeRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->veryActiveRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->heightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Calculate
			// 
			this->Calculate->Location = System::Drawing::Point(219, 218);
			this->Calculate->Name = L"Calculate";
			this->Calculate->Size = System::Drawing::Size(135, 23);
			this->Calculate->TabIndex = 0;
			this->Calculate->Text = L"Oblicz";
			this->Calculate->UseVisualStyleBackColor = true;
			this->Calculate->Click += gcnew System::EventHandler(this, &LicznikKalorii::Calculate_Click);
			// 
			// weightTextBox
			// 
			this->weightTextBox->Location = System::Drawing::Point(228, 59);
			this->weightTextBox->Name = L"weightTextBox";
			this->weightTextBox->Size = System::Drawing::Size(100, 20);
			this->weightTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(479, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Obliczanie dziennego zapotrzebowania kalorycznego.";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->manRadioButton);
			this->groupBox1->Controls->Add(this->womanRadioButton);
			this->groupBox1->Location = System::Drawing::Point(18, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(153, 78);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"P³eæ";
			// 
			// manRadioButton
			// 
			this->manRadioButton->AutoSize = true;
			this->manRadioButton->Location = System::Drawing::Point(7, 44);
			this->manRadioButton->Name = L"manRadioButton";
			this->manRadioButton->Size = System::Drawing::Size(78, 17);
			this->manRadioButton->TabIndex = 1;
			this->manRadioButton->TabStop = true;
			this->manRadioButton->Text = L"Mê¿czyzna";
			this->manRadioButton->UseVisualStyleBackColor = true;
			// 
			// womanRadioButton
			// 
			this->womanRadioButton->AutoSize = true;
			this->womanRadioButton->Location = System::Drawing::Point(7, 20);
			this->womanRadioButton->Name = L"womanRadioButton";
			this->womanRadioButton->Size = System::Drawing::Size(61, 17);
			this->womanRadioButton->TabIndex = 0;
			this->womanRadioButton->TabStop = true;
			this->womanRadioButton->Text = L"Kobieta";
			this->womanRadioButton->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->littleActiveRadioButton);
			this->groupBox2->Controls->Add(this->mediumActiveRadioButton);
			this->groupBox2->Controls->Add(this->activeRadioButton);
			this->groupBox2->Controls->Add(this->veryActiveRadioButton);
			this->groupBox2->Location = System::Drawing::Point(18, 126);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(153, 124);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Aktywnoœæ fizyczna";
			// 
			// littleActiveRadioButton
			// 
			this->littleActiveRadioButton->AutoSize = true;
			this->littleActiveRadioButton->Location = System::Drawing::Point(7, 92);
			this->littleActiveRadioButton->Name = L"littleActiveRadioButton";
			this->littleActiveRadioButton->Size = System::Drawing::Size(92, 17);
			this->littleActiveRadioButton->TabIndex = 3;
			this->littleActiveRadioButton->TabStop = true;
			this->littleActiveRadioButton->Text = L"Ma³o aktywny";
			this->littleActiveRadioButton->UseVisualStyleBackColor = true;
			this->littleActiveRadioButton->CheckedChanged += gcnew System::EventHandler(this, &LicznikKalorii::radioButton1_CheckedChanged);
			// 
			// mediumActiveRadioButton
			// 
			this->mediumActiveRadioButton->AutoSize = true;
			this->mediumActiveRadioButton->Location = System::Drawing::Point(7, 68);
			this->mediumActiveRadioButton->Name = L"mediumActiveRadioButton";
			this->mediumActiveRadioButton->Size = System::Drawing::Size(103, 17);
			this->mediumActiveRadioButton->TabIndex = 2;
			this->mediumActiveRadioButton->TabStop = true;
			this->mediumActiveRadioButton->Text = L"Œrednio aktywny";
			this->mediumActiveRadioButton->UseVisualStyleBackColor = true;
			// 
			// activeRadioButton
			// 
			this->activeRadioButton->AutoSize = true;
			this->activeRadioButton->Location = System::Drawing::Point(7, 44);
			this->activeRadioButton->Name = L"activeRadioButton";
			this->activeRadioButton->Size = System::Drawing::Size(65, 17);
			this->activeRadioButton->TabIndex = 1;
			this->activeRadioButton->TabStop = true;
			this->activeRadioButton->Text = L"Aktywny";
			this->activeRadioButton->UseVisualStyleBackColor = true;
			// 
			// veryActiveRadioButton
			// 
			this->veryActiveRadioButton->AutoSize = true;
			this->veryActiveRadioButton->Location = System::Drawing::Point(7, 20);
			this->veryActiveRadioButton->Name = L"veryActiveRadioButton";
			this->veryActiveRadioButton->Size = System::Drawing::Size(100, 17);
			this->veryActiveRadioButton->TabIndex = 0;
			this->veryActiveRadioButton->TabStop = true;
			this->veryActiveRadioButton->Text = L"Bardzo aktywny";
			this->veryActiveRadioButton->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(178, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Waga";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(178, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Wzrost";
			// 
			// heightTextBox
			// 
			this->heightTextBox->Location = System::Drawing::Point(228, 86);
			this->heightTextBox->Name = L"heightTextBox";
			this->heightTextBox->Size = System::Drawing::Size(100, 20);
			this->heightTextBox->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(178, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Wiek";
			// 
			// ageTextBox
			// 
			this->ageTextBox->Location = System::Drawing::Point(228, 113);
			this->ageTextBox->Name = L"ageTextBox";
			this->ageTextBox->Size = System::Drawing::Size(100, 20);
			this->ageTextBox->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(335, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"cm";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(335, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"kg";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(219, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Wynik: ";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(280, 157);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 13);
			this->resultLabel->TabIndex = 13;
			// 
			// LicznikKalorii
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 281);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ageTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->heightTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->weightTextBox);
			this->Controls->Add(this->Calculate);
			this->Name = L"LicznikKalorii";
			this->Text = L"LicznikKalorii";
			this->Load += gcnew System::EventHandler(this, &LicznikKalorii::LicznikKalorii_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//WSZYSTKO CO JEST WY¯EJ ZOSTA£O UTWORZONE AUTOMATYCZNIE PODCZAS TWORZENIA WIDOKU CZYLI JAK SOBIE PRZECI¥GA£EM IKONKI NA OKIENKA ¯EBY TO WYGL¥DA£O TAK JAK WYGL¥DA//
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void LicznikKalorii_Load(System::Object^  sender, System::EventArgs^  e) {
}
		 //Wykona siê gdy zostanie naciœniêty przycisk Oblicz 
private: System::Void Calculate_Click(System::Object^  sender, System::EventArgs^  e) {
	//zmienna do której bêdziemy zapisywaæ wynik obliczeñ
	double PPM = 0;
	//tutaj znowu zamieniamy sobie tekst który wpisujemy w bia³e kwadraty na liczbê tym razem zmiennoprzecinkow¹ podwójnej precyzji
	double Weight = double::Parse(this->weightTextBox->Text);
	double Height = double::Parse(this->heightTextBox->Text);
	//tutaj mamy wiek wiêc liczba nie musi byæ zmiennoprzecinkowa bo podajemy okr¹g³y wiek np 22 lata
	int Age = int::Parse(this->ageTextBox->Text);
	// Obliczenia które trzeba wykonaæ dla kobiety
	// Je¿eli zostanie wciœniêty przycisk kobieta
	if (this->womanRadioButton->Checked) {
		// tutaj wykonujemy dzia³ania wg wzorów znalezionych w internecie
		PPM = 665.09 + (9.56 * Weight) + (1.85 * Height) - (4.67 * Age);
		// W zale¿noœci od wybranego rodzaju aktywnoœci wymno¿enie przez odpowiedni¹ liczbê
		if (this->veryActiveRadioButton->Checked)
			PPM = PPM * 2;
		if (this->activeRadioButton->Checked)
			PPM = PPM * 1.75;
		if (this->mediumActiveRadioButton->Checked)
			PPM = PPM * 1.6;
		if (this->littleActiveRadioButton->Checked)
			PPM = PPM * 1.4;
	}
	// Je¿eli wybrano mê¿czyzne
	if (this->manRadioButton->Checked) {
		PPM = 66.47 + (13.75 * Weight) + (5 * Height) - (6.75 * Age);
		if (this->veryActiveRadioButton->Checked)
			PPM = PPM * 2;
		if (this->activeRadioButton->Checked)
			PPM = PPM * 1.75;
		if (this->mediumActiveRadioButton->Checked)
			PPM = PPM * 1.6;
		if (this->littleActiveRadioButton->Checked)
			PPM = PPM * 1.4;

	}
	// wypisujemy to co nam wysz³o jako string 
	this->resultLabel->Text = PPM.ToString();
}
};
}
