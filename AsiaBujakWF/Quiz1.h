#pragma once

namespace AsiaBujakWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Quiz
	/// </summary>
	public ref class Quiz : public System::Windows::Forms::Form
	{
	public:
		Quiz(void)
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
		~Quiz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  firstTextBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  secondComboBox;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  thirdTextBox;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  checkButton;
	private: System::Windows::Forms::Label^  answer1;
	private: System::Windows::Forms::Label^  answer2;
	private: System::Windows::Forms::Label^  answer3;
	private: System::Windows::Forms::Label^  answer4;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Label^  answer5;

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
			this->firstTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->secondComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->thirdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkButton = (gcnew System::Windows::Forms::Button());
			this->answer1 = (gcnew System::Windows::Forms::Label());
			this->answer2 = (gcnew System::Windows::Forms::Label());
			this->answer3 = (gcnew System::Windows::Forms::Label());
			this->answer4 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->answer5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(11, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Podaj wynik : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(13, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1. 6 - 1 * 0 + 2 / 2 =";
			// 
			// firstTextBox
			// 
			this->firstTextBox->Location = System::Drawing::Point(142, 67);
			this->firstTextBox->Name = L"firstTextBox";
			this->firstTextBox->Size = System::Drawing::Size(100, 20);
			this->firstTextBox->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(13, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"2. 6 / 2 * ( 2 + 1) =";
			// 
			// secondComboBox
			// 
			this->secondComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"9", L"3" });
			this->secondComboBox->Location = System::Drawing::Point(142, 105);
			this->secondComboBox->Name = L"secondComboBox";
			this->secondComboBox->Size = System::Drawing::Size(100, 21);
			this->secondComboBox->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(13, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 119);
			this->label4->TabIndex = 5;
			this->label4->Text = L"3. Je¿eli : \r\n    2 = 6\r\n    3 = 12\r\n    4 = 20\r\n    5 = 30 \r\n    6 = 42\r\n    To "
				L"9 =\r\n";
			// 
			// thirdTextBox
			// 
			this->thirdTextBox->Location = System::Drawing::Point(142, 236);
			this->thirdTextBox->Name = L"thirdTextBox";
			this->thirdTextBox->Size = System::Drawing::Size(100, 20);
			this->thirdTextBox->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(13, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(391, 34);
			this->label5->TabIndex = 7;
			this->label5->Text = L"4. Cztery takie same krasnale ogrodowe wa¿¹ ³¹cznie 10 kg. \r\n     Ile by wa¿y³o 6"
				L" takich krasnali\?";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(42, 317);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 114);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"OdpowiedŸ:";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 91);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(52, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"16 kg";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(52, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"40 kg";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"15 kg";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(52, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"60 kg";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// checkButton
			// 
			this->checkButton->Location = System::Drawing::Point(343, 515);
			this->checkButton->Name = L"checkButton";
			this->checkButton->Size = System::Drawing::Size(75, 23);
			this->checkButton->TabIndex = 9;
			this->checkButton->Text = L"SprawdŸ!";
			this->checkButton->UseVisualStyleBackColor = true;
			this->checkButton->Click += gcnew System::EventHandler(this, &Quiz::checkButton_Click);
			// 
			// answer1
			// 
			this->answer1->AutoSize = true;
			this->answer1->Location = System::Drawing::Point(258, 68);
			this->answer1->Name = L"answer1";
			this->answer1->Size = System::Drawing::Size(0, 13);
			this->answer1->TabIndex = 10;
			// 
			// answer2
			// 
			this->answer2->AutoSize = true;
			this->answer2->Location = System::Drawing::Point(258, 109);
			this->answer2->Name = L"answer2";
			this->answer2->Size = System::Drawing::Size(0, 13);
			this->answer2->TabIndex = 11;
			// 
			// answer3
			// 
			this->answer3->AutoSize = true;
			this->answer3->Location = System::Drawing::Point(258, 243);
			this->answer3->Name = L"answer3";
			this->answer3->Size = System::Drawing::Size(0, 13);
			this->answer3->TabIndex = 12;
			// 
			// answer4
			// 
			this->answer4->AutoSize = true;
			this->answer4->Location = System::Drawing::Point(258, 365);
			this->answer4->Name = L"answer4";
			this->answer4->Size = System::Drawing::Size(0, 13);
			this->answer4->TabIndex = 13;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(12, 515);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(109, 23);
			this->saveButton->TabIndex = 14;
			this->saveButton->Text = L"Zapisz wynik";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Quiz::saveButton_Click);
			// 
			// answer5
			// 
			this->answer5->AutoSize = true;
			this->answer5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->answer5->Location = System::Drawing::Point(25, 476);
			this->answer5->Name = L"answer5";
			this->answer5->Size = System::Drawing::Size(0, 25);
			this->answer5->TabIndex = 15;
			// 
			// Quiz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 550);
			this->Controls->Add(this->answer5);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->answer4);
			this->Controls->Add(this->answer3);
			this->Controls->Add(this->answer2);
			this->Controls->Add(this->answer1);
			this->Controls->Add(this->checkButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->thirdTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->secondComboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->firstTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Quiz";
			this->Text = L"Quiz";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//WSZYSTKO CO JEST WY¯EJ ZOSTA£O UTWORZONE AUTOMATYCZNIE PODCZAS TWORZENIA WIDOKU CZYLI JAK SOBIE PRZECI¥GA£EM IKONKI NA OKIENKA ¯EBY TO WYGL¥DA£O TAK JAK WYGL¥DA//
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void checkButton_Click(System::Object^  sender, System::EventArgs^  e) {
		int score = 0;
		//warunek sprawdzaj¹cy, czy w okienkach zosta³o coœ wpisane, je¿eli nie to program nie wykona instrukcji znajduj¹cych siê w tym ifie 
		if (this->firstTextBox->Text->Length != 0 && this->secondComboBox->Text->Length != 0 && this->thirdTextBox->Text->Length != 0) {

			// TextBoxy bia³e kwadraty do których wpisujesz wyniki swoich obliczeñ zwracaj¹ "stringi", a nam bêdzie ³atwiej sprawdziæ czy wynik jest poprawny zamieniaj¹c to na int czyli liczbê dlatego 
			// te trzy linijki poni¿ej, one zamieniaj¹ stringi na inty
			int first = int::Parse(this->firstTextBox->Text);
			int second = int::Parse(this->secondComboBox->Text);
			int third = int::Parse(this->thirdTextBox->Text);
			// Tutaj zaczyna siê sprawdzanie czy odpowiedzi s¹ poprawne je¿eli to co wpiszemy do okienka pierwszego czyli "first" (przed chwil¹ zamienialiœmy to na int ze string) jest równe 7
			// to wejdzie do tego if'a i wykona operacje w nim zawarte
			if (first == 7) {
				// tutaj ustawiamy kolor odpowiedzi (s¹ one umieszczone obok miejsca na odpowiedzi) czyli je¿eli first == 7 czyli odpowiedŸ jest poprawna to ustawiamy pole tekstowe na kolor zielony
				// a raczej czionkê w tym polu i nastêpnie wypisujemy w tym polu tekstowym OK! (które bêdzie w kolorze zielonym)
				this->answer1->ForeColor = Color::Green;
				this->answer1->Text = "OK!";
				// instrukcja poni¿ej zwiêksza liczbê punktów o 1
				score++;
			}
			else {
				// to s¹ instrukcje, które wykonaj¹ siê kiedy odpowiedŸ bêdzie b³êdna, czyli ustawiamy kolor czcionki w polu tekstowym na czerwony i wypisujemy B³êdna odpowiedŸ
				this->answer1->ForeColor = Color::Red;
				this->answer1->Text = "B³êdna odpowiedŸ";
			}

			if (second == 9) {
				this->answer2->ForeColor = Color::Green;
				this->answer2->Text = "OK!";
				score++;
			}
			else {
				this->answer2->ForeColor = Color::Red;
				this->answer2->Text = "B³êdna odpowiedŸ";
			}

			if (third == 90) {
				this->answer3->ForeColor = Color::Green;
				this->answer3->Text = "OK!";
				score++;
			}
			else {
				this->answer3->ForeColor = Color::Red;
				this->answer3->Text = "B³êdna odpowiedŸ";
			}
			if (this->radioButton2->Checked) {
				this->answer4->ForeColor = Color::Green;
				this->answer4->Text = "OK!";
				score++;
			}
			else {
				this->answer4->ForeColor = Color::Red;
				this->answer4->Text = "B³êdna odpowiedŸ";
			}
			// tutaj mamy instrukcjê wyboru switch czyli:
			// je¿eli to co mamy w nawiasie czyli score bêdzie równe kolejno 1 , 2 , 3 , 4 lub 0 wykonaj¹ siê operacje które s¹ za tymi cyframi czyli je¿eli bêdzie równe 1 to wykonaj¹ siê instrukcje jak poni¿ej
			//	this->answer5->ForeColor = Color::Red;
			//this->answer5->Text = "S³abo, poæwicz! 1/4";
			//break;
			// i tak dla ka¿dego
			switch (score) {
				//je¿eli score = 1 
				// zmieniamy kolor czcionki w polu tekstowym na czerwony i wypisujemy S³abo poæwicz i tak dla ka¿dego
			case 1:
				this->answer5->ForeColor = Color::Red;
				this->answer5->Text = "S³abo, poæwicz! 1/4";
				break;
			case 2:
				this->answer5->ForeColor = Color::Orange;
				this->answer5->Text = "Mog³o byæ lepiej! 2/4";
				break;
			case 3:
				this->answer5->ForeColor = Color::Yellow;
				this->answer5->Text = "Dobrze! 3/4";
				break;
			case 4:
				this->answer5->ForeColor = Color::Green;
				this->answer5->Text = "Bezb³êdnie! 4/4";
				break;
			case 0:
				this->answer5->ForeColor = Color::Red;
				this->answer5->Text = ":((((( 0/4";
				break;
			}
		}// tutaj mamy operacje które wykonaj¹ siê je¿eli 
		else {
			this->answer5->ForeColor = Color::Red;
			this->answer5->Text = "Odpowiedz na wszystkie pytania !";
		}
		

	}// to odnosi siê do przyciœniêcia przycisku zapisz wynik
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//je¿eli d³ugoœæ tekstu w polu tekstowym które odpowiada za punktacje czyli wyœwietla punkty jest ró¿ny od 0 czyli coœ tam jest i ró¿ni siê od zdania 
	//Odpowiedz na wszystkie pytania to wykonaj¹ siê poni¿sze instrukcje
	if (this->answer5->Text->Length != 0 && this->answer5->Text != "Odpowiedz na wszystkie pytania !") {
		//utworzenie okna dialogowego do zapisu pliku 
		SaveFileDialog ^save = gcnew SaveFileDialog;
		//wyœwietlenie okna dialogowego
		save->ShowDialog();
		//utworzenie strumienia zapisu 
		StreamWriter ^sw = gcnew StreamWriter(save->FileName);
		//zapisanie pliku
		sw->WriteLine(answer5->Text);
		//zamkniêcie strumienia zapisu
		sw->Close();
	}

}
};
}
