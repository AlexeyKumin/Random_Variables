#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include "vectEta.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	using namespace std;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;


	private: System::Windows::Forms::GroupBox^  groupBox3;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label19;



	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-1, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1535, 567);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1527, 538);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задача 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(548, 7);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(952, 517);
			this->zedGraphControl1->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 215);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(507, 310);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ni";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"| I - I1 |";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"| I - I2 |";
			this->Column3->Name = L"Column3";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(9, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(507, 203);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(227, 81);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"значение интеграла";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 81);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(96, 172);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(290, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"k - коэффициент увеличения кол-ва точек";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(81, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"10";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(96, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(236, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Nmax - максимальное число точек";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(81, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"10000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(96, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"b - правая граница";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(81, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"25";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"a - левая граница";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(336, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"I = integral(f(x)) = (1/2)*(x + 2sin x + (sin x - 2x)cos x)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"f(x) = x*sin x + (cos x)^2";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1527, 538);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задача 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(510, 185);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(507, 310);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Ni";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"| I - I1 |";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"| I - I2 |";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Location = System::Drawing::Point(510, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(507, 169);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(242, 76);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 17);
			this->label13->TabIndex = 10;
			this->label13->Text = L"значение интеграла";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(426, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 81);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Запуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(96, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(290, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"k - коэффициент увеличения кол-ва точек";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 139);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(81, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(96, 110);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(236, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Nmax - максимальное число точек";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 107);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(81, 22);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"10000";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(96, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 17);
			this->label10->TabIndex = 3;
			this->label10->Text = L"R ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(9, 76);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(81, 22);
			this->textBox8->TabIndex = 2;
			this->textBox8->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(344, 17);
			this->label11->TabIndex = 1;
			this->label11->Text = L"I = integral((x^2+y^2+z^2)dxdydz), по области = 8*R;";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 18);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(240, 17);
			this->label12->TabIndex = 0;
			this->label12->Text = L"область: x =-R..R, y =-R..R, z=-R..R;";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1527, 538);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задача 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column5,
					this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->Column4
			});
			this->dataGridView3->Location = System::Drawing::Point(49, 215);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(614, 310);
			this->dataGridView3->TabIndex = 5;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"интервал";
			this->Column5->Name = L"Column5";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"eta среднее";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"v";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"f";
			this->Column4->Name = L"Column4";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->textBox15);
			this->groupBox3->Controls->Add(this->textBox14);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Location = System::Drawing::Point(49, 23);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(614, 169);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Справка";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(93, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 17);
			this->label15->TabIndex = 12;
			this->label15->Text = L"h - шаг вариации";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(6, 68);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(81, 22);
			this->textBox15->TabIndex = 11;
			this->textBox15->Text = L"0,001";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(521, 131);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(78, 22);
			this->textBox14->TabIndex = 10;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(417, 131);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(78, 22);
			this->textBox13->TabIndex = 9;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(311, 131);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(78, 22);
			this->textBox12->TabIndex = 8;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(213, 131);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(78, 22);
			this->textBox11->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(110, 131);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(78, 22);
			this->textBox9->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(9, 131);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(78, 22);
			this->textBox7->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(156, 100);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(265, 17);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Размах |   М    |    D    |     Mo    |     Me    |";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(461, 18);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 87);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Запуск";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(93, 40);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(296, 17);
			this->label17->TabIndex = 3;
			this->label17->Text = L"N - кл-во экспериментов моделирования св";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(6, 37);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(81, 22);
			this->textBox10->TabIndex = 2;
			this->textBox10->Text = L"1000";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(182, 18);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(182, 17);
			this->label19->TabIndex = 0;
			this->label19->Text = L"f(x) = 2exp(2x), x>0; 0, x<=0";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column6 });
			this->dataGridView4->Location = System::Drawing::Point(698, 23);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(295, 391);
			this->dataGridView4->TabIndex = 6;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"eta";
			this->Column6->Name = L"Column6";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1533, 561);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		double F(double x)
		{
			//return (x * sin(x) + cos(x)*cos(x));
			return pow(x, 4);
		}

		double F1(double x, double y, double z)
		{
			//return (x * x + z * z);
			return (x * x + y * y + z * z);
		}

		double intF1(double R)
		{
			//return 2 * M_PI * pow(R, 3);
			//return 4 * M_PI * pow(R, 5) / (double)5;
			return 8 * pow(R, 5);
		}

		double intF(double x)
		{
			//return  0.5 * (x + 2 * sin(x) + (sin(x) - 2 * x)*cos(x));
			return pow(x, 5) / 5;
		}

		double model(double a, double b)
		{
			return (a + ((b - a) / (double)RAND_MAX) * (double)rand());
		}

		double MK1(int N, double a, double b, double Fmax, double Fmin)
		{
			double x, f;
			int m1 = 0, m2 = 0;
			for (int i = 0; i < N; i++)
			{
				x = model(a, b);
				f = model(Fmin, Fmax);
				if ((f > 0) && (f <= F(x)))
					m1++;
				if ((f < 0) && (f >= F(x)))
					m2++;
			}

			return ((double)(m1 - m2) / (double)N)*(b - a)*(Fmax - Fmin);
		}

		double MK2_1(int N, const vector<double>& MaxXYZ, const vector<double>& MinXYZ)
		{
			double x = MinXYZ[0], y = MinXYZ[1], z = MinXYZ[2];
			double f;
			int m1 = 0, m2 = 0;
			double h = 0.01;
			double Fmax = 0, Fmin = 0;
			double Fi;

			while (x < MaxXYZ[0])
			{
				while (y < MaxXYZ[1])
				{
					while (z < MaxXYZ[2])
					{
						Fi = F1(x, y, z);
						if (Fi > Fmax)
							Fmax = Fi;
						if (Fi < Fmin)
							Fmin = Fi;
						z += h;
					}
					y += h;
				}
				x += h;
			}

			for (int i = 0; i < N; i++)
			{
				x = model(MinXYZ[0], MaxXYZ[0]);
				y = model(MinXYZ[1], MaxXYZ[1]);
				z = model(MinXYZ[2], MaxXYZ[2]);
				f = model(Fmin, Fmax);

				if((f > 0) && (f <= F1(x, y, z)))
					m1++;
				if ((f < 0) && (f >= F1(x, y, z)))
					m2++;
			}

			return ((double)m1 / (double)N)*(MaxXYZ[0] - MinXYZ[0])*(MaxXYZ[1] - MinXYZ[1])*(MaxXYZ[2] - MinXYZ[2])*(Fmax - Fmin);
		}

		double MK2_2(int N, const vector<double>& MaxXYZ, const vector<double>& MinXYZ)
		{
			double x, y, z;
			double Mx = 0;
			for (int i = 0; i < N; i++)
			{
				x = model(MinXYZ[0], MaxXYZ[0]);
				y = model(MinXYZ[1], MaxXYZ[1]);
				z = model(MinXYZ[2], MaxXYZ[2]);
				Mx += F1(x, y, z);
			}

			return (Mx * (MaxXYZ[0] - MinXYZ[0])*(MaxXYZ[1] - MinXYZ[1])*(MaxXYZ[2] - MinXYZ[2]) / (double)N);
		}

		double MK2(int N, double a, double b)
		{
			double x, f;
			double Mx = 0;
			for (int i = 0; i < N; i++)
			{
				x = model(a, b);
				Mx += F(x);
			}

			return Mx * (b - a) / (double)N;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);
		int Nmax = Convert::ToDouble(textBox3->Text);
		int k = Convert::ToDouble(textBox4->Text);

		double Fmax = 0, Fmin = 0;

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ F_list = gcnew ZedGraph::PointPairList();
		PointPairList^ MK_list = gcnew ZedGraph::PointPairList();
		PointPairList^ Q1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ Q2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ Q3_list = gcnew ZedGraph::PointPairList();
		PointPairList^ Q4_list = gcnew ZedGraph::PointPairList();

		double x = a;
		double f = Fmin;
		double h = 0.001;
		double Fi;
		//График Функции
		for (x = a; x < b; x += h)
		{
			Fi = F(x);
			if (Fi > Fmax)
				Fmax = Fi;
			if (Fi < Fmin)
				Fmin = Fi;

			F_list->Add(x, Fi);
		}

		//График Области разбрасывания точек
		for (x = a; x < b; x += h)
		{
			Q1_list->Add(x, Fmax);
			Q2_list->Add(x, Fmin);
		}

		for (f = Fmin; f < Fmax; f += h)
		{
			Q3_list->Add(a, f);
			Q4_list->Add(b, f);
		}

		//Разбрасывание точек и вычисление интеграла методами
		dataGridView1->Rows->Clear();
		srand(time(0));
		int Ni = 1;

		double I = 0;
		I = intF(b) - intF(a);
		label9->Text = Convert::ToString(I);

		double I1 = 0, I2 = 0;

		int row = 0;
		while (Ni < Nmax)
		{
			Ni *= k;

			I1 = MK1(Ni, a, b, Fmax, Fmin);
			I2 = MK2(Ni, a, b);

			dataGridView1->Rows->Add();
			dataGridView1->Rows[row]->Cells[0]->Value = Ni;
			dataGridView1->Rows[row]->Cells[1]->Value = abs(I - I1);
			dataGridView1->Rows[row]->Cells[2]->Value = abs(I - I2);
			row++;
		}

		for (int i = 0; i < 10; i++)
		{
			x = a + ((b - a) / (double)RAND_MAX) * (double)rand();
			f = Fmin + ((Fmax - Fmin) / (double)RAND_MAX) * (double)rand();
			MK_list->Add(x, f);
		}

		LineItem^ Curve1 = panel->AddCurve("F(x)", F_list, Color::Red, SymbolType::None);
		LineItem^ Curve2 = panel->AddCurve("", Q1_list, Color::Black, SymbolType::None);
		LineItem^ Curve3 = panel->AddCurve("", Q2_list, Color::Black, SymbolType::None);
		LineItem^ Curve4 = panel->AddCurve("", Q3_list, Color::Black, SymbolType::None);
		LineItem^ Curve5 = panel->AddCurve("", Q4_list, Color::Black, SymbolType::None);
		LineItem^ Curve6 = panel->AddCurve("", MK_list, Color::Blue, SymbolType::XCross);
		Curve6->Line->IsVisible = false;
		Curve6->Symbol->Size = 2;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}
			  
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		double R = Convert::ToDouble(textBox8->Text);
		int Nmax = Convert::ToDouble(textBox6->Text);
		int k = Convert::ToDouble(textBox5->Text);

		vector<double> MaxXYZ = { R, R, R };
		vector<double> MinXYZ = { -R, -R, -R };
		vector<double> XYZ = { -R, -R, -R };

		//Разбрасывание точек и вычисление интеграла методами
		dataGridView2->Rows->Clear();
		srand(time(0));

		int Ni = 1;
		int m1 = 0, m2 = 0;

		double I = 0;
		I = intF1(R);
		label13->Text = Convert::ToString(I);

		double I1 = 0, I2 = 0;

		int row = 0;

		while (Ni < Nmax)
		{
			Ni *= k;

			I1 = MK2_1(Ni, MaxXYZ, MinXYZ);
			I2 = MK2_2(Ni, MaxXYZ, MinXYZ);

			dataGridView2->Rows->Add();
			dataGridView2->Rows[row]->Cells[0]->Value = Ni;
			dataGridView2->Rows[row]->Cells[1]->Value = abs(I - I1);
			dataGridView2->Rows[row]->Cells[2]->Value = abs(I - I2);
			row++;
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView3->Rows->Clear();
		dataGridView4->Rows->Clear();
		int N = Convert::ToInt32(textBox10->Text);
		double h = Convert::ToDouble(textBox15->Text);
		vectEta Eta(N, h);

		for (int i = 0; i < Eta.x.size() - 1; i++)
		{
			dataGridView3->Rows->Add();
			dataGridView3->Rows[i]->Cells[0]->Value = Eta.x[i + 1];
			dataGridView3->Rows[i]->Cells[1]->Value = Eta.EtaMid[i];
			dataGridView3->Rows[i]->Cells[2]->Value = Eta.v[i];
			dataGridView3->Rows[i]->Cells[3]->Value = Eta.f[i];
		}

		for (int i = 0; i < Eta.Eta.size(); i++)
		{
			dataGridView4->Rows->Add();
			dataGridView4->Rows[i]->Cells[0]->Value = Eta.Eta[i];
		}

		textBox7->Text = Convert::ToString(Eta.Etamax - Eta.Etamin);
		textBox9->Text = Convert::ToString(Eta.M());
		textBox11->Text = Convert::ToString(Eta.D());
		textBox12->Text = Convert::ToString(Eta.Mo());
		textBox13->Text = Convert::ToString(Eta.Me());
		textBox14->Text = Convert::ToString(Eta.Norm());
	}
};
}
