#pragma once
#include "Quiz1.h"
#include "LicznikKalorii.h"
#include "Autor.h"

namespace AsiaBujakWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quizToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  licznikKaloriiToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quizToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->licznikKaloriiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->quizToolStripMenuItem,
					this->licznikKaloriiToolStripMenuItem, this->oAutorzeToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// quizToolStripMenuItem
			// 
			this->quizToolStripMenuItem->Name = L"quizToolStripMenuItem";
			this->quizToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->quizToolStripMenuItem->Text = L"Quiz";
			this->quizToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::quizToolStripMenuItem_Click);
			// 
			// licznikKaloriiToolStripMenuItem
			// 
			this->licznikKaloriiToolStripMenuItem->Name = L"licznikKaloriiToolStripMenuItem";
			this->licznikKaloriiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->licznikKaloriiToolStripMenuItem->Text = L"Licznik kalorii";
			this->licznikKaloriiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::licznikKaloriiToolStripMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oAutorzeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(86, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 44);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Quiz";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//WSZYSTKO CO JEST WY¯EJ ZOSTA£O UTWORZONE AUTOMATYCZNIE PODCZAS TWORZENIA WIDOKU CZYLI JAK SOBIE PRZECI¥GA£EM IKONKI NA OKIENKA ¯EBY TO WYGL¥DA£O TAK JAK WYGL¥DA//
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void menuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void quizToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		// tworzenie nowego okna do quizu po klikniêciu w górnym menu w Quiz
		Quiz ^quiz = gcnew Quiz;
		// pokazanie utworzonego okna
		quiz->Show();
	}
			 //dla tych dwóch to samo co wy¿ej
	private: System::Void licznikKaloriiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		LicznikKalorii ^licznik = gcnew LicznikKalorii;
		licznik->Show();
	}
	private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Autor ^autor = gcnew Autor;
		autor->Show();

	}
}; 
}
