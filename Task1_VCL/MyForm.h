#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <tchar.h>
#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include <Windows.h>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <csignal>
#include <conio.h>
#include <cstdlib>
#include <sstream>
#include <msclr\marshal_cppstd.h>

#define DllExport  __declspec(dllexport)
#define DllImport  __declspec(dllimport)

namespace Task1VCL {

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

		std::string HWNDToString(HWND inputA)
		{
			std::stringstream stringstreamBuffer;
			stringstreamBuffer << inputA;
			return stringstreamBuffer.str();
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
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Кнопка Вызова Окна";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		HWND h = FindWindow(NULL, L"MyForm");
		HWND h1 = FindWindow(NULL, L"MyForm");				// находим дескриптор формы
		h = FindWindowEx(h, NULL, NULL, L"button1");
		//h1 = FindWindowEx(h, NULL, NULL, L"button1");
		std::string str = HWNDToString(h);
		str += HWNDToString(h1);
		System::String^ systemString = msclr::interop::marshal_as<System::String^>(str);
		
		MessageBoxButtons^ buttons = gcnew MessageBoxButtons();
		buttons = MessageBoxButtons::RetryCancel;

		System::Windows::Forms::DialogResult result = MessageBox::Show(systemString, "Descriptor",
			MessageBoxButtons::RetryCancel, MessageBoxIcon::Exclamation);
		if (result == System::Windows::Forms::DialogResult::Retry)
		{
			MessageBox::Show("Нажата кнопка Повтор");
		}
		if (result == System::Windows::Forms::DialogResult::Cancel)
		{
			MessageBox::Show("Нажата кнопка Отмена");
		}
		
	}
	};
}
