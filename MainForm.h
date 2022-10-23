#pragma once
#include <Windows.h>
#include <stdlib.h>
#include <fmod.h>
#include <fmod_codec.h>
#include <fmod_common.h>
#include <fmod_dsp.h>
#include <fmod_dsp_effects.h>
#include <fmod_errors.h>
#include <fmod_output.h>
#include <fmod.hpp>
#include <conio.h>
#include <msclr/marshal.h>
#include <chrono>
#include <bass.h>

namespace Project1 {
	
	
	//using namespace audiere;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ addTrackToolStripMenuItem;



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;




	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteTrackToolStripMenuItem;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::HelpProvider^ helpProvider1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button11;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->addTrackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteTrackToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(43, 504);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 36);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(56, 448);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 40);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(300, 514);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 93);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			this->button1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::button1_KeyUp);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addTrackToolStripMenuItem,
					this->deleteTrackToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(138, 48);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::contextMenuStrip1_Opening);
			// 
			// addTrackToolStripMenuItem
			// 
			this->addTrackToolStripMenuItem->Name = L"addTrackToolStripMenuItem";
			this->addTrackToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->addTrackToolStripMenuItem->Text = L"Add Track";
			this->addTrackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::addTrackToolStripMenuItem_Click);
			// 
			// deleteTrackToolStripMenuItem
			// 
			this->deleteTrackToolStripMenuItem->Name = L"deleteTrackToolStripMenuItem";
			this->deleteTrackToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->deleteTrackToolStripMenuItem->Text = L"Delete Track";
			this->deleteTrackToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deleteTrackToolStripMenuItem_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(1153, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(28, 24);
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog1_FileOk);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::Color::DimGray;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(858, 67);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(290, 520);
			this->listBox1->TabIndex = 11;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox1_SelectedIndexChanged);
			this->listBox1->MouseEnter += gcnew System::EventHandler(this, &MainForm::listBox1_MouseEnter);
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->BackColor = System::Drawing::Color::DimGray;
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->Enabled = false;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::Transparent;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(858, 600);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(290, 16);
			this->listBox2->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(478, 514);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 93);
			this->button5->TabIndex = 13;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			this->button5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::button5_KeyDown);
			this->button5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::button5_KeyUp);
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button5_MouseDown);
			this->button5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button5_MouseUp);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->Enabled = false;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(176, 514);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 93);
			this->button6->TabIndex = 14;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			this->button6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::button6_KeyDown);
			this->button6->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::button6_KeyUp);
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button6_MouseDown);
			this->button6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button6_MouseUp);
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->trackBar1->Location = System::Drawing::Point(795, 492);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(45, 139);
			this->trackBar1->TabIndex = 15;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 70;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MainForm::trackBar1_Scroll);
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->progressBar1->ForeColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(39, 616);
			this->progressBar1->MarqueeAnimationSpeed = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(751, 5);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 16;
			this->progressBar1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::progressBar1_MouseDown);
			this->progressBar1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::progressBar1_MouseMove);
			this->progressBar1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::progressBar1_MouseUp);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(990, 20);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(76, 32);
			this->button7->TabIndex = 18;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(1072, 20);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(76, 32);
			this->button8->TabIndex = 19;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(718, 263);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label3->Size = System::Drawing::Size(92, 15);
			this->label3->TabIndex = 22;
			this->label3->Text = L"0:00:00/0:00:00";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(30, 401);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 30);
			this->label1->TabIndex = 23;
			this->label1->Text = L"No song";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(34, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 15);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Next";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(35, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Previous";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(33, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 18);
			this->label5->TabIndex = 26;
			this->label5->Text = L"No song";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(33, 351);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 18);
			this->label6->TabIndex = 27;
			this->label6->Text = L"No song";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(35, 593);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 15);
			this->label7->TabIndex = 30;
			this->label7->Text = L"0:00:00";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(732, 592);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label8->Size = System::Drawing::Size(48, 15);
			this->label8->TabIndex = 31;
			this->label8->Text = L"0:00:00";
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->Enabled = false;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(43, 544);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(78, 43);
			this->button9->TabIndex = 32;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(851, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 29);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Queue";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(728, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 29);
			this->label10->TabIndex = 33;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DimGray;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(672, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(42, 50);
			this->button10->TabIndex = 34;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click_1);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(154, 112);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(512, 100);
			this->panel1->TabIndex = 36;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->Enabled = false;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Javanese Text", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(417, 514);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 93);
			this->button12->TabIndex = 37;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DimGray;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(130, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(42, 37);
			this->button11->TabIndex = 38;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DimGray;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(176, 7);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(47, 47);
			this->button13->TabIndex = 39;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::DimGray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Javanese Text", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LEAFplayer";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		int* cnt_arr = new int[4];
		int cnt = 0;
		bool paused = false;
		bool del_track = false;
#pragma endregion
	
			  array<String^>^ arr;

	private: System::Void addTrackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


		openFileDialog1->Multiselect = true;
		openFileDialog1->Filter = "mp3 files (*.mp3)|*.mp3|wav files (*.wav)|*.wav|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			array <String^>^ arr = openFileDialog1->SafeFileNames;
			for (int i = 0; i < arr->Length; i++)
			{
				if (!listBox1->Items->Contains(openFileDialog1->SafeFileNames[i]))
				{
					listBox1->Items->Add(openFileDialog1->SafeFileNames[i]);
					listBox2->Items->Add(openFileDialog1->FileNames[i]);
				}
			}
			
			track_count = listBox1->Items->Count;
		}
		bool pl = false;
		
		if (listBox1->Items->Count != 0 && pl)
		{
			Selection();
		}
	}
private: System::Void deleteTrackToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void cross_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   String^ path0;
	   int track_count = 0;
	private: System::Void b0_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   
		   bool create_syst = false;
		   void* extradriverdata = 0;
		   unsigned int* version;
		   float* length;
		   int* numsubsounds;
		   
		   String^ current_song = ";lk";
		   String^ prev_song = ";lk";
		   String^ next_song = ";lk";
		   

		   Color r;
		   void Play_Current(const char* path)
		   {
			   chan = BASS_StreamCreateFile(FALSE, path, 0, 0, 0);
			   BASS_ChannelPlay(chan, FALSE);
			   paused = false;
		   }
		   void Activate_Buttons()
		   {
			   button2->Enabled = true;
			   button3->Enabled = true;
			   button5->Enabled = true;
			   button6->Enabled = true;
			   button9->Enabled = true;
			   button12->Enabled = true;
		   }
		   HSAMPLE samp;
		   HSTREAM chan;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count == 0)
	{
		MessageBox::Show("There are no tracks!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		if (listBox1->SelectedItem != current_song)
		{
			if (listBox1->SelectedIndex != -1 && listBox1->Items->Count != 0)
			{
				listBox2->SetSelected(listBox1->SelectedIndex, true);
			}
			else
			{
				listBox1->SetSelected(0, true);
			}
			BASS_ChannelStop(chan);
			listBox2->SetSelected(listBox1->SelectedIndex, true);
			path0 = listBox2->SelectedItem->ToString();
			random = false;
			Activate_Buttons();
			marshal_context^ marshal = gcnew marshal_context();
			const char* native;
			current_song = listBox1->SelectedItem->ToString();
			native = marshal->marshal_as<const char*>(path0);
			Play_Current(native);
			double time = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetLength(chan, BASS_POS_BYTE));
			time = time * 1000;
			progressBar1->Maximum = time;
			Selection();
			BASS_SetVolume((float)trackBar1->Value / 100);
			button1->BackgroundImage = Image::FromFile("buttons4\\play_dgr.png");
			timer1->Start();

		}
		else if (listBox1->SelectedItem == current_song && BASS_ChannelIsActive(chan) != BASS_ACTIVE_PLAYING && !paused)
		{
			Activate_Buttons();
			marshal_context^ marshal = gcnew marshal_context();
			const char* native;
			native = marshal->marshal_as<const char*>(path0);
			Play_Current(native);
		}
		else if (paused)
		{
			double pos = BASS_ChannelGetPosition(chan, BASS_POS_BYTE);
			BASS_ChannelPlay(chan, FALSE);
			BASS_ChannelSetPosition(chan, pos, BASS_POS_BYTE);
			paused = false;
			if (isDark)
			{
				button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
				button1->BackgroundImage = Image::FromFile("buttons4\\play_dgr.png");
			}
			else
			{
				button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
				button1->BackgroundImage = Image::FromFile("buttons4\\play_dgr.png");
			}
			
		}
	}


}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	BASS_ChannelStop(chan);
	paused = false;
	random = false;
	listBox1->Enabled = true;
	button5->Enabled = false;
	if (isDark)
	{
		button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
		button1->BackgroundImage = Image::FromFile("buttons4\\play4.png");
		button3->BackgroundImage = Image::FromFile("buttons4\\loop4.png");
		button9->BackgroundImage = Image::FromFile("buttons4\\rand5.png");
	}
	else
	{
		button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
		button1->BackgroundImage = Image::FromFile("buttons4\\play6.png");
		button3->BackgroundImage = Image::FromFile("buttons4\\loop6.png");
		button9->BackgroundImage = Image::FromFile("buttons4\\rand6.png");
	}
	button9->Enabled = false;
	button12->Enabled = false;
	button6->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button1->Enabled = true;
}

private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
	   void Selection()
	   {
		   listBox1->SelectedItem = current_song;
		   if (listBox1->SelectedIndex + 1 == track_count && listBox1->Items->Count != 1)
		   {
			   listBox1->SelectedIndex = listBox1->SelectedIndex - 1;
			   prev_song = listBox1->SelectedItem->ToString();
			   listBox1->SelectedIndex = 0;
			   next_song = listBox1->SelectedItem->ToString();
		   }
		   else if (listBox1->SelectedIndex - 1 == -1 && listBox1->Items->Count != 1)
		   {
			   listBox1->SelectedIndex = listBox1->SelectedIndex + 1;
			   next_song = listBox1->SelectedItem->ToString();
			   listBox1->SelectedIndex = track_count - 1;
			   prev_song = listBox1->SelectedItem->ToString();
		   }
		   else if (listBox1->Items->Count == 1)
		   {
			   prev_song = current_song;
			   next_song = current_song;
		   }
		   else
		   {
			   listBox1->SelectedIndex = listBox1->SelectedIndex + 1;
			   next_song = listBox1->SelectedItem->ToString();
			   listBox1->SelectedIndex = listBox1->SelectedIndex - 2;
			   prev_song = listBox1->SelectedItem->ToString();
		   }
		   listBox1->SelectedItem = current_song;
	   }
private: System::Void deleteTrackToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {

	if (listBox1->SelectedIndex == -1)
	{
		MessageBox::Show("No track selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		track_count--;
		if (listBox1->SelectedItem == current_song)
		{
			BASS_ChannelStop(chan);
			paused = false;
			random = false;
			listBox1->Enabled = true;
			button5->Enabled = false;
			if (isDark)
			{
				button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
				button1->BackgroundImage = Image::FromFile("buttons4\\play4.png");
				button3->BackgroundImage = Image::FromFile("buttons4\\loop4.png");
				button9->BackgroundImage = Image::FromFile("buttons4\\rand5.png");
			}
			else
			{
				button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
				button1->BackgroundImage = Image::FromFile("buttons4\\play6.png");
				button3->BackgroundImage = Image::FromFile("buttons4\\loop6.png");
				button9->BackgroundImage = Image::FromFile("buttons4\\rand6.png");
			}
			button9->Enabled = false;
			button12->Enabled = false;
			button6->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button1->Enabled = true;
			listBox2->Items->RemoveAt(listBox1->SelectedIndex);
			listBox1->Items->Remove(listBox1->SelectedItem);
		}
		else
		{
			listBox2->Items->RemoveAt(listBox1->SelectedIndex);
			listBox1->Items->Remove(listBox1->SelectedItem);
			listBox1->SelectedItem = current_song;
			Selection();
		}
	}
}
private: System::Void listBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
}
	   void Next()
	   {
		   BASS_ChannelStop(chan);
		   paused = false;
		   listBox1->SelectedItem = current_song;
		   listBox2->SetSelected(listBox1->SelectedIndex, true);
		   //label1->Text = "" + track_count;
		   if (!random)
		   {


			   if ((listBox1->SelectedIndex + 1) == track_count)
			   {
				   listBox1->SetSelected(0, true);
				   listBox2->SetSelected(0, true);
			   }
			   else
			   {
				   listBox1->SetSelected(listBox1->SelectedIndex + 1, true);
				   listBox2->SetSelected(listBox2->SelectedIndex + 1, true);
			   }
		   }
		   else
		   {
			   int r = rand() % track_count;
			   while (r == listBox1->SelectedIndex)
			   {
				   r = rand() % track_count;
			   }
			   listBox1->SetSelected(r, true);
			   listBox2->SetSelected(listBox1->SelectedIndex, true);


		   }
		   path0 = listBox2->SelectedItem->ToString();
		   marshal_context^ marshal = gcnew marshal_context();
		   const char* native;
		   current_song = listBox1->SelectedItem->ToString();
		   native = marshal->marshal_as<const char*>(path0);
		   Play_Current(native);
		   
		   BASS_SetVolume((float)trackBar1->Value / 100);
		   
		   double time = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetLength(chan, BASS_POS_BYTE));
		   time = time * 1000;
		  
		   progressBar1->Maximum = time;
		   Selection();
		   if (isDark)
		   {
			   button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
			  
		   }
		   else
		   {
			   button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
		   }
		   button1->BackgroundImage = Image::FromFile("buttons4\\play_dgr.png");
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Next();
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	
	BASS_SetVolume((float)trackBar1->Value / 100);
}
	   void draw1()
	   {
		   float fft[512];
		   BASS_ChannelGetData(chan, fft, BASS_DATA_FFT1024);
		   float length = 128;
		   unsigned int read = 128;
		   int Step = panel1->Width / 512;
		   Pen^ redPen = gcnew Pen(Color::Red);
		   Graphics^ g = panel1->CreateGraphics();
		   if (isDark)
		   {
			   g->FillRectangle(Brushes::DimGray, (float)0, (float)0, (float)panel1->Width, (float)panel1->Height);
		   }
		   else
		   {
			   g->FillRectangle(Brushes::White, (float)0, (float)0, (float)panel1->Width, (float)panel1->Height);
		   }

		   for (int i = 0; i < 512; i = i + Step) {
			   redPen = gcnew Pen(colorDialog1->Color);

			   fft[i] = fft[i] * 1000;
			   int hg = panel1->Height - fft[i];
			   if (hg < 0)
			   {
				   hg = 10;
			   }
			   if (hg >= 99)
			   {
				   hg = 99;
			   }
			   g->DrawLine(redPen, i, panel1->Height, (i + Step), hg);
		   }
	   }
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	float fft[4096];
	unsigned int ms = 0;
	unsigned int length = 0;
	unsigned int read = 0;

	unsigned int lenms = 0;
	bool playing = false;
	bool paused = false;
	double posi = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetPosition(chan, BASS_POS_BYTE));
	posi = posi * 1000;
	double time = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetLength(chan, BASS_POS_BYTE));
	time = time * 1000;
	label1->Text = current_song;
	label5->Text = prev_song;
	label6->Text = next_song;
	label3->Text = "Time " + ((int)posi / 1000 / 60) + ":" + ((int)posi / 1000 % 60) + ":" + ((int)posi / 10 % 100) + "/" + ((int)time / 1000 / 60) + ":" + ((int)time / 1000 % 60) + ":" + ((int)time / 10 % 100);
	progressBar1->Value = posi;
	label7->Text = ((int)posi / 1000 / 60) + ":" + ((int)posi / 1000 % 60) + ":" + ((int)posi / 10 % 100);
	label8->Text = ((int)time / 1000 / 60) + ":" + ((int)time / 1000 % 60) + ":" + ((int)time / 10 % 100);
	draw1();



	if (!loop && posi == time)
	{

		Next();

	}
	else if (loop && posi == time)
	{
		marshal_context^ marshal = gcnew marshal_context();
		const char* native;
		current_song = listBox1->SelectedItem->ToString();
		native = marshal->marshal_as<const char*>(path0);
		Play_Current(native);
		BASS_SetVolume((float)trackBar1->Value / 100);
		double time = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetLength(chan, BASS_POS_BYTE));
		time = time * 1000;
		progressBar1->Maximum = time;
		Selection();
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	BASS_ChannelStop(chan);
	paused = false;
	listBox1->SelectedItem = current_song;
	listBox2->SetSelected(listBox1->SelectedIndex, true);
	if (!random)
	{


		if ((listBox1->SelectedIndex - 1) == -1)
		{
			listBox1->SetSelected(track_count - 1, true);
			listBox2->SetSelected(track_count - 1, true);
		}
		else
		{
			listBox1->SetSelected(listBox1->SelectedIndex - 1, true);
			listBox2->SetSelected(listBox2->SelectedIndex - 1, true);
		}
	}
	else
	{
		int r = rand() % track_count;
		while (r == listBox1->SelectedIndex)
		{
			r = rand() % track_count;
		}
		listBox1->SetSelected(r, true);
		listBox2->SetSelected(listBox1->SelectedIndex, true);
	}
	path0 = listBox2->SelectedItem->ToString();
	marshal_context^ marshal = gcnew marshal_context();
	const char* native;
	current_song = listBox1->SelectedItem->ToString();
	native = marshal->marshal_as<const char*>(path0);
	Play_Current(native);
	BASS_SetVolume((float)trackBar1->Value / 100);
	double time = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetLength(chan, BASS_POS_BYTE));
	time = time * 1000;
	progressBar1->Maximum = time;
	Selection();
	if (isDark)
	{
		button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
	}
	else
	{
		button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
	}
	button1->BackgroundImage = Image::FromFile("buttons4\\play_dgr.png");
}
private: System::Void progressBar1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	unsigned int currLength = 0;
	double posi = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetPosition(chan, BASS_POS_BYTE));
	posi = posi * 1000;
	toolTip1->SetToolTip(progressBar1, "" + ((int)posi / 1000 / 60) + ":" + ((int)posi / 1000 % 60) + ":" + ((int)posi / 10 % 100));
}
private: System::Void progressBar1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	double time = BASS_ChannelBytes2Seconds(chan, BASS_ChannelGetLength(chan, BASS_POS_BYTE));
	time = time * 1000;
	BASS_ChannelSetPosition(chan, BASS_ChannelSeconds2Bytes(chan, (e->X * (time / progressBar1->Width)) / 1000), BASS_POS_BYTE);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ s;
	String^ s1;
	int ind = 0;
	s = listBox1->SelectedItem->ToString();
	listBox2->SetSelected(listBox1->SelectedIndex, true);
	s1 = listBox2->SelectedItem->ToString();
	ind = listBox1->SelectedIndex + 1;
	if (ind >= track_count)
	{
		listBox1->Items->RemoveAt(ind - 1);
		listBox2->Items->RemoveAt(ind - 1);
		listBox1->Items->Insert(0, s);
		listBox2->Items->Insert(0, s1);
		listBox1->SetSelected(0, true);
		listBox2->SetSelected(0, true);
		if (listBox1->Items->Count != 0 && BASS_ChannelIsActive(chan) == BASS_ACTIVE_PLAYING)
		{
			Selection();
		}
		listBox1->SetSelected(0, true);
		listBox2->SetSelected(0, true);
	}
	else
	{
		listBox1->Items->RemoveAt(ind - 1);
		listBox2->Items->RemoveAt(ind - 1);
		listBox1->Items->Insert(ind, s);
		listBox2->Items->Insert(ind, s1);
		listBox1->SetSelected(ind, true);
		listBox2->SetSelected(ind, true);
		if (listBox1->Items->Count != 0 && BASS_ChannelIsActive(chan) == BASS_ACTIVE_PLAYING)
		{
			Selection();
		}
		listBox1->SetSelected(ind, true);
		listBox2->SetSelected(ind, true);
	}



	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s;
	String^ s1;
	int ind = 0;
	s = listBox1->SelectedItem->ToString();
	listBox2->SetSelected(listBox1->SelectedIndex, true);
	s1 = listBox2->SelectedItem->ToString();
	ind = listBox1->SelectedIndex - 1;
	if (ind <= -1)
	{
		listBox1->Items->RemoveAt(ind + 1);
		listBox2->Items->RemoveAt(ind + 1);
		listBox1->Items->Insert(track_count - 1, s);
		listBox2->Items->Insert(track_count - 1, s1);
		listBox1->SetSelected(track_count - 1, true);
		listBox2->SetSelected(track_count - 1, true);
		if (listBox1->Items->Count != 0 && BASS_ChannelIsActive(chan) == BASS_ACTIVE_PLAYING)
		{
			Selection();
		}
		listBox1->SetSelected(track_count - 1, true);
		listBox2->SetSelected(track_count - 1, true);
	}
	else
	{
		listBox1->Items->RemoveAt(ind + 1);
		listBox2->Items->RemoveAt(ind + 1);
		listBox1->Items->Insert(ind, s);
		listBox2->Items->Insert(ind, s1);
		listBox1->SetSelected(ind, true);
		listBox2->SetSelected(ind, true);
		if (listBox1->Items->Count != 0 && BASS_ChannelIsActive(chan) == BASS_ACTIVE_PLAYING)
		{
			Selection();
		}
		listBox1->SetSelected(ind, true);
		listBox2->SetSelected(ind, true);
	}
	
}
	   bool random = false;
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!random)
	{
		random = true;
		button9->BackgroundImage = Image::FromFile("buttons4\\rand_dark_red.png");
	}
	else
	{
		random = false;
		if (isDark)
		{
			button9->BackgroundImage = Image::FromFile("buttons4\\rand5.png");
		}
		else
		{
			button9->BackgroundImage = Image::FromFile("buttons4\\rand6.png");
		}
	}
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	BASS_Init(-1, 44100, BASS_DEVICE_3D, 0, NULL);
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}


	   bool loop = false;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!loop)
	{
		loop = true;
		button3->BackgroundImage = Image::FromFile("buttons4\\loop_dark_red.png");
	}
	else
	{
		loop = false;
		if (isDark)
		{
			button3->BackgroundImage = Image::FromFile("buttons4\\loop4.png");
		}
		else
		{
			button3->BackgroundImage = Image::FromFile("buttons4\\loop6.png");
		}
	}
}

private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!paused)
	{
		BASS_ChannelPause(chan);
		paused = true;
		button12->BackgroundImage = Image::FromFile("buttons4\\pause_dgr.png");
		if (isDark)
		{
			button1->BackgroundImage = Image::FromFile("buttons4\\play4.png");
		}
		else
		{
			button1->BackgroundImage = Image::FromFile("buttons4\\play6.png");
		}
	}
	else
	{
		double pos = BASS_ChannelGetPosition(chan, BASS_POS_BYTE);
		BASS_ChannelPlay(chan, FALSE);
		BASS_ChannelSetPosition(chan, pos, BASS_POS_BYTE);
		
		if (isDark)
		{
			button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
		}
		else
		{
			button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
		}
		button1->BackgroundImage = Image::FromFile("buttons4\\play_dgr.png");
		paused = false;
	}
}

private: System::Void button5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	button5->BackgroundImage = Image::FromFile("buttons4\\right_dr.png");
}
private: System::Void button5_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isDark)
	{
		button5->BackgroundImage = Image::FromFile("buttons4\\next4.png");
	}
	else
	{
		button5->BackgroundImage = Image::FromFile("buttons4\\right6.png");
	}
}
private: System::Void button6_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	button6->BackgroundImage = Image::FromFile("buttons4\\left_dr.png");
}
private: System::Void button6_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void button6_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	if (isDark)
	{
		button6->BackgroundImage = Image::FromFile("buttons4\\prev4.png");
	}
	else
	{
		button6->BackgroundImage = Image::FromFile("buttons4\\left6.png");
	}
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
	   bool isDark = true;
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackgroundImage = Image::FromFile("buttons4\\font4_w.png");

	this->BackColor = r.White;
	this->ForeColor = r.DimGray;
	listBox1->BackColor = r.White;
	listBox1->ForeColor = r.DimGray;
	label1->ForeColor = r.DimGray;
	label2->ForeColor = r.DimGray;
	label3->ForeColor = r.DimGray;
	label4->ForeColor = r.DimGray;
	label5->ForeColor = r.DimGray;
	label6->ForeColor = r.DimGray;
	label7->ForeColor = r.DimGray;
	label8->ForeColor = r.DimGray;
	label9->ForeColor = r.DimGray;
	button10->BackColor = r.White;
	button11->BackColor = r.White;
	button13->BackColor = r.White;
	button3->BackgroundImage = Image::FromFile("buttons4\\loop6.png");
	button5->BackgroundImage = Image::FromFile("buttons4\\right6.png");
	button12->BackgroundImage = Image::FromFile("buttons4\\pause6.png");
	button1->BackgroundImage = Image::FromFile("buttons4\\play6.png");
	button6->BackgroundImage = Image::FromFile("buttons4\\left6.png");
	button9->BackgroundImage = Image::FromFile("buttons4\\rand6.png");
	button2->BackgroundImage = Image::FromFile("buttons4\\stop6.png");
	button10->BackgroundImage = Image::FromFile("buttons4\\paint6.png");
	button8->BackgroundImage = Image::FromFile("buttons4\\up6.png");
	button7->BackgroundImage = Image::FromFile("buttons4\\down6.png");
	button13->BackgroundImage = Image::FromFile("buttons4\\sun6.png");
	button11->BackgroundImage = Image::FromFile("buttons4\\moon6.png");
	label10->ForeColor = r.DimGray;
	isDark = false;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackgroundImage = Image::FromFile("buttons4\\font4.png");
	this->BackColor = r.DimGray;
	this->ForeColor = r.White;
	listBox1->BackColor = r.DimGray;
	listBox1->ForeColor = r.White;
	button10->BackColor = r.DimGray;
	button11->BackColor = r.DimGray;
	button13->BackColor = r.DimGray;
	label1->ForeColor = r.White;
	label2->ForeColor = r.White;
	label3->ForeColor = r.White;
	label4->ForeColor = r.White;
	label5->ForeColor = r.White;
	label6->ForeColor = r.White;
	label7->ForeColor = r.White;
	label8->ForeColor = r.White;
	label9->ForeColor = r.White;
	label10->ForeColor = r.White;
	button3->BackgroundImage = Image::FromFile("buttons4\\loop4.png");
	button6->BackgroundImage = Image::FromFile("buttons4\\prev4.png");
	button12->BackgroundImage = Image::FromFile("buttons4\\pause4.png");
	button1->BackgroundImage = Image::FromFile("buttons4\\play4.png");
	button5->BackgroundImage = Image::FromFile("buttons4\\next4.png");
	button9->BackgroundImage = Image::FromFile("buttons4\\rand5.png");
	button2->BackgroundImage = Image::FromFile("buttons4\\q.png");
	button10->BackgroundImage = Image::FromFile("buttons4\\paint.png");
	button13->BackgroundImage = Image::FromFile("buttons4\\sun_yellow.png");
	button11->BackgroundImage = Image::FromFile("buttons4\\moon_blue.png");
	button8->BackgroundImage = Image::FromFile("buttons4\\up5.png");
	button7->BackgroundImage = Image::FromFile("buttons4\\down5.png");
	isDark = true;
}
};
}
