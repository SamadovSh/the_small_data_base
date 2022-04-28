#pragma once
#include <fstream>

namespace new_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(1191, 63);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(270, 403);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1228, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите цвет фона";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 18);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя файла";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 12);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(238, 45);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 160);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 19);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Фам";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 220);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 19);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Имя ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 302);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 19);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Отчество";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 370);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Группа";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 446);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 19);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Год рож.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 536);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 19);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Оценка";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 160);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(238, 34);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 218);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(238, 36);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 298);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(238, 35);
			this->textBox4->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 605);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 40);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Вносить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(396, 18);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox1->Size = System::Drawing::Size(454, 463);
			this->richTextBox1->TabIndex = 17;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(411, 517);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 50);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Читать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(694, 517);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 50);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Записать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(894, 35);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(65, 23);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L"Фам";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(894, 98);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(65, 23);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"Имя";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(894, 161);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 23);
			this->checkBox3->TabIndex = 22;
			this->checkBox3->Text = L"Отчество";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(894, 231);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(86, 23);
			this->checkBox4->TabIndex = 23;
			this->checkBox4->Text = L"Группа";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(894, 298);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(97, 23);
			this->checkBox5->TabIndex = 24;
			this->checkBox5->Text = L"Год рож.";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(894, 370);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(90, 23);
			this->checkBox6->TabIndex = 25;
			this->checkBox6->Text = L"Оценка";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(894, 425);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(278, 41);
			this->textBox8->TabIndex = 26;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(951, 484);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(164, 39);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Искать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"123-20", L"113-20", L"133-20", L"144-20", L"155-20"});
			this->comboBox1->Location = System::Drawing::Point(120, 368);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(238, 27);
			this->comboBox1->TabIndex = 28;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"5", L"4", L"3", L"2", L"1"});
			this->comboBox2->Location = System::Drawing::Point(120, 536);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(238, 27);
			this->comboBox2->TabIndex = 29;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(120, 446);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 27);
			this->dateTimePicker1->TabIndex = 30;
			this->dateTimePicker1->Value = System::DateTime(2021, 10, 6, 5, 26, 44, 0);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1474, 699);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Text = "Работы с данными";
				 array<String^>^ Цвета = Enum::GetNames(KnownColor::typeid);
				 listBox1->Items->Clear(); textBox1->Text = "2.txt";
				 listBox1->Items->AddRange(Цвета); listBox1->Sorted = true;
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->Text == "Transparent") return;
			 this->BackColor = Color::FromName(listBox1->Text);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Clear(); String^ filename; array<String^>^ Dannie;
			 if (textBox1->Text != ""){
			 filename = textBox1->Text;
			 auto Oqi = gcnew IO::StreamReader(filename);
			 richTextBox1->Text = Oqi->ReadToEnd();
			 Oqi->Close();
			 }
			 else MessageBox::Show("Введите название файла", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation );
				 
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ name_of_file; name_of_file = textBox1->Text;
			 if (textBox1->Text != ""){
				 auto Yoz = gcnew IO::StreamWriter(name_of_file, true); // если сделать false то он заменяет файл!!!
			 Yoz->Write(richTextBox1->Text); Yoz->Close();}
			 else MessageBox::Show("Введите название файла", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Clear();
			 richTextBox1->Text += textBox2->Text + "\n"; 
			 richTextBox1->Text += textBox3->Text + "\n";
			 richTextBox1->Text += textBox4->Text + "\n";
			 richTextBox1->Text += comboBox1->Text + "\n";
			 richTextBox1->Text += dateTimePicker1->Text + "\n";
			 richTextBox1->Text += comboBox2->Text + "\n";
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ filename;  
			 int n=0; richTextBox1->Clear(); 
			 array<String^>^ Fam={"", "", "", "", ""}; array<String^>^ Ism={"", "", "", "", ""}; array<String^>^ Sharfi={"", "", "", "", ""}; 
			 array<String^>^ Group={"", "", "", "", ""}; array<String^>^ Year={"", "", "", "", ""}; array<String^>^ Mark={"", "", "", "", ""}; 
			 if (textBox8->Text != ""){
				 filename = textBox1->Text;
				 auto Oqi = gcnew IO::StreamReader(filename);
			
			 while (!Oqi->EndOfStream){   
				 Fam[n] = Oqi->ReadLine() + "\n";  
				Ism[n] = Oqi->ReadLine() + "\n";
				Sharfi[n] = Oqi->ReadLine() + "\n";
				Group[n] = Oqi->ReadLine() + "\n";
				Year[n] = Oqi->ReadLine() + "\n";
				Mark[n] = Oqi->ReadLine() + "\n";
				n++;
			 } Oqi->Close();
			 
			 if (checkBox1->Checked) { for (int i=0; i<n; i++) {if (Fam[i]->Contains(textBox8->Text)) { richTextBox1->Text += Fam[i];
			 richTextBox1->Text += Ism[i]; richTextBox1->Text += Sharfi[i]; richTextBox1->Text += Group[i];
			 richTextBox1->Text += Year[i]; richTextBox1->Text += Mark[i];}}}

			 if (checkBox2->Checked) { for (int i=0; i<n; i++) {if (Ism[i]->Contains(textBox8->Text)) { richTextBox1->Text += Fam[i];
			 richTextBox1->Text += Ism[i]; richTextBox1->Text += Sharfi[i]; richTextBox1->Text += Group[i];
			 richTextBox1->Text += Year[i]; richTextBox1->Text += Mark[i];}}}

			 if (checkBox3->Checked) { for (int i=0; i<n; i++) {if (Sharfi[i]->Contains(textBox8->Text)) { richTextBox1->Text += Fam[i];
			 richTextBox1->Text += Ism[i]; richTextBox1->Text += Sharfi[i]; richTextBox1->Text += Group[i];
			 richTextBox1->Text += Year[i]; richTextBox1->Text += Mark[i];}}}

			 if (checkBox4->Checked) { for (int i=0; i<n; i++) {if (Group[i]->Contains(textBox8->Text)) { richTextBox1->Text += Fam[i];
			 richTextBox1->Text += Ism[i]; richTextBox1->Text += Sharfi[i]; richTextBox1->Text += Group[i];
			 richTextBox1->Text += Year[i]; richTextBox1->Text += Mark[i];}}}

			 if (checkBox5->Checked) { for (int i=0; i<n; i++) {if (Year[i]->Contains(textBox8->Text)) { richTextBox1->Text += Fam[i];
			 richTextBox1->Text += Ism[i]; richTextBox1->Text += Sharfi[i]; richTextBox1->Text += Group[i];
			 richTextBox1->Text += Year[i]; richTextBox1->Text += Mark[i];}}}

			 if (checkBox6->Checked) { for (int i=0; i<n; i++) {if (Mark[i]->Contains(textBox8->Text)) { richTextBox1->Text += Fam[i];
			 richTextBox1->Text += Ism[i]; richTextBox1->Text += Sharfi[i]; richTextBox1->Text += Group[i];
			 richTextBox1->Text += Year[i]; richTextBox1->Text += Mark[i];}}}
			 
			 } else MessageBox::Show("Введите данные для поиска", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		 }
 


private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}

