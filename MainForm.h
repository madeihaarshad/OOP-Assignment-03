#pragma once
#include"Studentwise.h"
#include"Teacherwise.h"
#include"Classroomwise.h"
#include"Sectionwise.h"
#include"RoomArranger.h"

namespace Project132 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button6;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(206, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Studentwise";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(206, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Teacherwise";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(206, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Classroomwise";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(206, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Sectionwise";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(206, 368);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 48);
			this->button5->TabIndex = 4;
			this->button5->Text = L"RoomArranger";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(116, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Bahria University H-11 Campus";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(216, 445);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(517, 551);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	 Studentwise obj;
		obj.ShowDialog();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Teacherwise obj;
		obj.ShowDialog();
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Classroomwise obj;
		obj.ShowDialog();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Sectionwise obj;
		obj.ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show a message box with a confirmation dialog
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to Quit? ", "Confirmation", MessageBoxButtons::OKCancel, MessageBoxIcon::Question);

		// Check if the user clicked OK
		if (result == System::Windows::Forms::DialogResult::OK) {
			// If yes, exit the application
			Application::Exit();
		}
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomArranger obj;
		obj.ShowDialog();
	}
	};
}
