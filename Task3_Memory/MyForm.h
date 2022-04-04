#pragma once
#pragma hdrstop
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "cmath"
#include <string>
#include <sal.h>
#include <msclr\marshal_cppstd.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

namespace Task3Memory {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(483, 234);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Занять динамическую память";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(186, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 69);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Занять стековую память";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(356, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 69);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Занять регион виртуальной памяти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 321);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(235, 321);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(409, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 344);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 467);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// выделение памяти оператором new
		int* p; // указатель на int

		p = new int; // выделить память для указателя
		*p = 25; // записать значения в память

		// использование памяти, выделенной для указателя
		int d;
		d = *p; // d = 25
		String^ str = "d = " + d.ToString();

		label1->Text = str;

		// освободить память, выделенную для указателя - обязательно
		//delete p;
		d = *p;
		str = "delete p: " + d.ToString();
		label4->Text = str;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// стековая память
	std::string str1 = "first str";
	std::string str2 = "second str";
	std::vector<std::string> names;
	names.push_back(str1);
	names.push_back(str2);
	String^ systemStr = msclr::interop::marshal_as<System::String^>(names[1]);
	label2->Text = systemStr;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	LPVOID ptr = VirtualAlloc(NULL, 30000000, MEM_RESERVE, PAGE_READWRITE); //reserving memory
	ptr = VirtualAlloc(ptr, 30000000, MEM_COMMIT, PAGE_READWRITE); //commiting memory
	memset(ptr, 'a', 30000000);

	char* char_ptr = static_cast<char*>(ptr);
	std::string str(char_ptr);
	label3->Text = msclr::interop::marshal_as<System::String^>(str);

	//VirtualFree(ptr, 0, MEM_RELEASE); //releasing memory
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {	
	chart1->Series->Clear();
	DataVisualization::Charting::Series^ series1 = gcnew DataVisualization::Charting::Series(L"");
	DataVisualization::Charting::Series^ series2 = gcnew DataVisualization::Charting::Series(L"");
	DataVisualization::Charting::Series^ series3 = gcnew DataVisualization::Charting::Series(L"");
	DataVisualization::Charting::Series^ series4 = gcnew DataVisualization::Charting::Series(L"");
	// синяя линия
	series1->Color = Color::Blue;
	series1->IsVisibleInLegend = true;
	series1->IsXValueIndexed = false;

	chart1->Series->Add(series1);

	series2->Color = Color::Blue;
	series2->IsVisibleInLegend = true;
	series2->IsXValueIndexed = false;

	chart1->Series->Add(series2);

	series3->Color = Color::Blue;
	series3->IsVisibleInLegend = true;
	series3->IsXValueIndexed = false;

	chart1->Series->Add(series3);

	series4->Color = Color::Blue;
	series4->IsVisibleInLegend = true;
	series4->IsXValueIndexed = false;

	chart1->Series->Add(series4);

	MEMORYSTATUS theStatus;
	ZeroMemory(&theStatus, sizeof(theStatus));
	theStatus.dwLength = sizeof(theStatus);
	GlobalMemoryStatus(&theStatus);

	series1->AxisLabel = "Занято физ.памяти";
	series1->Color = Color::Red;

	series2->AxisLabel = "Свободно физ.памяти";
	series2->Color = Color::Blue;

	series3->AxisLabel = "Занято вирт.памяти";
	series3->Color = Color::Red;

	series4->AxisLabel = "Свободно вирт.памяти";
	series4->Color = Color::Blue;

	series1->Points->AddXY(1, theStatus.dwTotalPhys - theStatus.dwAvailPhys);
	series2->Points->AddXY(2, theStatus.dwAvailPhys);

	series3->Points->AddXY(3, theStatus.dwTotalVirtual - theStatus.dwAvailVirtual);
	series4->Points->AddXY(4, theStatus.dwAvailVirtual);
}
};
}
