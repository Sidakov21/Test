#pragma once 
//Сидаков Амир " Создание теста"

#include <fstream>
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>"

using namespace std;

string new_str = "";
string c2 = " ";
string prvk_str0 = "_____", prvk_str1 = "12345", prvk_str2 = "2", prvk_str3 = "3", prvk_str4 = "4"; //Чтобы нормально сравнивались строки


namespace Тест {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	//Создание Текстовой строки
	private: TextBox^ txtB = gcnew TextBox;
	
	//Создание CheckBox
	private: CheckBox^ chB1 = gcnew CheckBox;
	private: CheckBox^ chB2 = gcnew CheckBox;
	private: CheckBox^ chB3 = gcnew CheckBox;
	private: CheckBox^ chB4 = gcnew CheckBox;
	private: CheckBox^ chB5 = gcnew CheckBox;
	private: CheckBox^ chB6 = gcnew CheckBox;

	private: int c1 = 1; //Счетчик заданий
	private: double correct = 0; //Количество верных
	private: bool rb1 = false, rb2 = false, rb3 = false, rb4 = false; //Проверка правильного ответа
	private: bool B1 = false, B2 = false, B3 = false, B4 = false, B5 = false, B6 = false; //Проверка правильного ответа

	private: int crct_chB = 0; //Счетчик правильных ответов у CheckBox
	private: int chck_chB = 0; //Счетчик активынх CheckBox
	private: int curs = 0;		//Курсор который бегает по строчкам


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(88, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вопрос";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(115, 168);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(115, 246);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(115, 326);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(115, 399);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(281, 481);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 38);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сохранить и продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Количество вопросов";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(181, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(209, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(216, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(-3, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Тема";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(254, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(315, 36);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Для начала нажмите еще раз!";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 530);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//
	//Преобразование String в SystemString и наоборот
	//
	private: std::string SystemStringToStdString(System::String^ str)
	{
		return msclr::interop::marshal_as<std::string>(str);
	}
	private: System::String^ StdStringToSystemString(const std::string& str)
	{
		return  msclr::interop::marshal_as<System::String^>(str);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->button1->Text = L"Сохранить и продолжить";

		ifstream file;
		string tmp;

		bool flg = false;	//Проверка активности checkBox


		//Проверка правильных ответов и увеличение счетчика

		//Radio buttons
		if (this->radioButton1->Checked && rb1)
		{
			correct += 1;
			rb1 = false;
		}

		if (this->radioButton2->Checked && rb2)
		{
			correct += 1;
			rb2 = false;
		}

		if (this->radioButton3->Checked && rb3)
		{
			correct += 1;
			rb3 = false;
		}

		if (this->radioButton4->Checked && rb4)
		{
			correct += 1;
			rb4 = false;
		}


		//CheckBoxes

		//Проверяем количсетво активированных checkbox и количсетво верных
		if (chB1->Checked)
		{
			chck_chB += 1;
		}
		if (chB2->Checked)
		{
			chck_chB += 1;
		}
		if (chB3->Checked)
		{
			chck_chB += 1;
		}
		if (chB4->Checked)
		{
			chck_chB += 1;
		}
		if (chB5->Checked)
		{
			chck_chB += 1;
		}
		if (chB6->Checked)
		{
			chck_chB += 1;
		}

		if (chck_chB > crct_chB)
		{
			correct += 0;
		}
		else {
			if (chB1->Checked && B1)
			{
				correct += 0.5;
				B1 = false;
			}

			if (chB2->Checked && B2)
			{
				correct += 0.5;
				B2 = false;
			}

			if (chB3->Checked && B3)
			{
				correct += 0.5;
				B3 = false;
			}

			if (chB4->Checked && B4)
			{
				correct += 0.5;
				B4 = false;
			}

			if (chB5->Checked && B5)
			{
				correct += 0.5;
				B5 = false;
			}

			if (chB6->Checked && B6)
			{
				correct += 0.5;
				B6 = false;
			}
		}

		chck_chB = 0; //Идет обнуление выбранных checkBox
		crct_chB = 0; //Идет обнуление количсевта ответов(правильных) которые там могут быть

		//TextBox
		prvk_str0 = SystemStringToStdString(this->txtB->Text);	//Присваивает содержимое TextBox
		if (prvk_str1.compare(prvk_str0) == 0 ||
			prvk_str2.compare(prvk_str0) == 0 ||
			prvk_str3.compare(prvk_str0) == 0 ||
			prvk_str4.compare(prvk_str0) == 0)
		{
			prvk_str0 = "", prvk_str1 = "1", prvk_str2 = "2", prvk_str3 = "3", prvk_str4 = "4";
			txtB->Text = "";
			correct += 1.2;
		}


		//Завершение теста: результат
		file.open("RadioB.txt");

		this->label4->Text = c1.ToString();
		this->label6->Text = StdStringToSystemString(c2);

		c1 += 1;

		if (c1 == stoi(c2) + 1)
		{
			this->button1->Text = L"Завершить тест!";
		}

		if (c1 > stoi(c2) + 1)
		{
			this->label4->Text = StdStringToSystemString(c2);
			MessageBox::Show(L"Спасибо за прохождение теста! \n Вы набрали " + correct + "/" + stoi(c2) + " Балла(ов)!");
			MessageBoxButtons::OK;
			System::Environment::Exit(0);
		}
		

		//Работа с файлом - Вопросы и варианты ответов

		file.seekg(curs);

		file >> tmp;
		//this->label7->Text = StdStringToSystemString(tmp);	//Первый символ определяющий тип объекта
		file.seekg(curs);

		//
		//Работа с CheckBox
		//
		if (tmp == "#")
		{
			txtB->Visible = false;

			for (int i = 0; i < 8; i++)
			{
				getline(file, tmp);
				new_str = tmp + '\n';

				switch (i)
				{
				case 0:
				{
					this->label1->Text = StdStringToSystemString(new_str.substr(2));
					break;
				}
				case 1:
				{
					radioButton1->Visible = false;
					chB1->Visible = true;
					chB1->AutoSize = true;
					chB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					chB1->Location = System::Drawing::Point(115, 155);
					chB1->Size = System::Drawing::Size(50, 100);
					chB1->Text = StdStringToSystemString(new_str.substr(2));
					this->Controls->Add(chB1);

					if (!new_str.find('*'))
					{
						B1 = true;
						crct_chB += 1;
					}

					break;
				}

				case 2:
				{
					radioButton2->Visible = false;
					chB2->Visible = true;
					chB2->AutoSize = true;
					chB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					chB2->Location = System::Drawing::Point(115, 210);
					chB2->Size = System::Drawing::Size(50, 100);
					chB2->Text = StdStringToSystemString(new_str.substr(2));
					this->Controls->Add(chB2);

					if (!new_str.find('*'))
					{
						B2 = true;
						crct_chB += 1;
					}

					break;
				}

				case 3:
				{
					radioButton3->Visible = false;
					chB3->Visible = true;
					chB3->AutoSize = true;
					chB3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					chB3->Location = System::Drawing::Point(115, 265);
					chB3->Size = System::Drawing::Size(50, 100);
					chB3->Text = StdStringToSystemString(new_str.substr(2));
					this->Controls->Add(chB3);

					if (!new_str.find('*'))
					{
						B2 = true;
						crct_chB += 1;
					}
					break;
				}

				case 4:
				{
					radioButton4->Visible = false;
					chB4->Visible = true;
					chB4->AutoSize = true;
					chB4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					chB4->Location = System::Drawing::Point(115, 320);
					chB4->Size = System::Drawing::Size(50, 100);
					chB4->Text = StdStringToSystemString(new_str.substr(2));
					this->Controls->Add(chB4);

					if (!new_str.find('*'))
					{
						B4 = true;
						crct_chB += 1;
					}

					break;
				}

				case 5:
				{
					chB5->Visible = true;
					chB5->AutoSize = true;
					chB5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					chB5->Location = System::Drawing::Point(115, 375);
					chB5->Size = System::Drawing::Size(50, 100);
					chB5->Text = StdStringToSystemString(new_str.substr(2));
					this->Controls->Add(chB5);

					if (!new_str.find('*'))
					{
						B5 = true;
						crct_chB += 1;
					}

					break;
				}

				case 6:
				{
					chB6->Visible = true;
					chB6->AutoSize = true;
					chB6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					chB6->Location = System::Drawing::Point(115, 430);
					chB6->Size = System::Drawing::Size(50, 100);
					chB6->Text = StdStringToSystemString(new_str.substr(2));
					this->Controls->Add(chB6);


					if (!new_str.find('*'))
					{
						B6 = true;
						crct_chB += 1;
					}

					break;
				}
				default:
					break;
				}
				curs += new_str.length() + 1;
			}
		}

		//
		//Работа с TextBox
		//

		else if (tmp == "!")
		{
			flg = true;

			this->txtB->Visible = true;
			this->txtB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtB->Location = System::Drawing::Point(98, 203);
			this->txtB->Multiline = true;
			this->txtB->Size = System::Drawing::Size(299, 32);
			this->txtB->TabIndex = 15;

			for (int i = 0; i <= 5; i++)
			{
				getline(file, tmp);
				new_str = tmp;

				switch (i)
				{
				case 0:
					this->label1->Text = StdStringToSystemString(new_str.substr(2));
					break;
				case 1:
					radioButton1->Visible = false;
					prvk_str1 = new_str.substr(2);
					break;
				case 2:
					radioButton2->Visible = false;
					prvk_str2 = new_str.substr(2);
					break;
				case 3:
					radioButton3->Visible = false;
					prvk_str3 = new_str.substr(2);
					break;
				case 4:
					radioButton4->Visible = false;
					prvk_str4 = new_str.substr(2);
					break;
				default:
					break;
				}
				curs += new_str.length() + 2;
			}

			this->Controls->Add(txtB);
		}

		//
		//Работа с RadioButton
		//

		else if (tmp != "#")
		{

			flg = true;
			this->txtB->Visible = false;
					
			//Radio button
			for (int i = 0; i <= 5; i++)
			{
				getline(file, tmp);
				new_str = tmp + '\n';

				switch (i)
				{
				case 0:
					this->label1->Text = StdStringToSystemString(new_str);
					break;
				case 1:

					radioButton1->Visible = true;

					if (!new_str.find('*'))
					{
						rb1 = true;
					}
					
					this->radioButton1->Text = StdStringToSystemString(new_str.substr(2));
					break;
				case 2:
					radioButton2->Visible = true;
					if (!new_str.find('*'))
					{
						rb2 = true;
					}

					this->radioButton2->Text = StdStringToSystemString(new_str.substr(2));
					break;
				case 3:
					radioButton3->Visible = true;
					if (!new_str.find('*'))
					{
						rb3 = true;
					}
					

					this->radioButton3->Text = StdStringToSystemString(new_str.substr(2));
					break;
				case 4:
					radioButton4->Visible = true;
					if (!new_str.find('*'))
					{
						rb4 = true;
					}

					this->radioButton4->Text = StdStringToSystemString(new_str.substr(2));
					break;
				default:
					break;
				}
				curs += new_str.length() + 1;
			}
		}

		//Проверка CheckBox
		if (flg)
		{
			chB1->Visible = false;
			chB1->Checked = false;

			chB2->Visible = false;
			chB2->Checked = false;

			chB3->Visible = false;
			chB3->Checked = false;

			chB4->Visible = false;
			chB4->Checked = false;

			chB5->Visible = false;
			chB5->Checked = false;

			chB6->Visible = false;
			chB6->Checked = false;
		}

		/*this->label8->Text = correct.ToString(); *///Подсчет который ведется сразу в тесте для демонстрации

		file.close();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ifstream file;
	string theme, count;
	
	//Запись основной темы и количества вопросов
	file.open("RadioB.txt");

	file.seekg(curs);

	getline(file, theme);
	this->label2->Text = StdStringToSystemString(theme); //Считывание темы
	curs += theme.length();

	getline(file, count);
	c2 = count;			//Считывание количества вопроосов
	curs += count.length();

	curs += 6;
	this->button1->Text = L"Приступить!";

	file.close();
	this->Controls->Remove(button2);
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
