#pragma once
#include "initializer.h"
#include "includes.h"
//legend at the end of the file

namespace DeepLinkTeser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Main
	/// </summary>

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ log_clean;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ log_get;
	private: System::Windows::Forms::TextBox^ log_name_textbox;
	private: System::Windows::Forms::TextBox^ log_location_textbox;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ focus_loser;
	private: System::Windows::Forms::Button^ log_location_button;
	private: System::Windows::Forms::CheckBox^ filterStatus;
	private: System::Windows::Forms::TextBox^ filterValue;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::CheckBox^ consoleStatus;
	private: System::Windows::Forms::Button^ screenshotTakeButton;
	private: System::Windows::Forms::Button^ takeScreenshotAndLogs;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code


		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		//DO NOT EDIT
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->log_clean = (gcnew System::Windows::Forms::Button());
			this->screenshotTakeButton = (gcnew System::Windows::Forms::Button());
			this->takeScreenshotAndLogs = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->log_get = (gcnew System::Windows::Forms::Button());
			this->log_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->log_location_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->focus_loser = (gcnew System::Windows::Forms::Label());
			this->log_location_button = (gcnew System::Windows::Forms::Button());
			this->filterStatus = (gcnew System::Windows::Forms::CheckBox());
			this->filterValue = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->consoleStatus = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(374, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADB Location";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Main::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(378, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(378, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"select location";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Main::openFileDialog1_FileOk_1);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(26, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Packet Name";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Main::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(26, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Deeplink";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(123, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Run";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(26, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Click += gcnew System::EventHandler(this, &Main::textBox2_click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Main::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(26, 136);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(287, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Click += gcnew System::EventHandler(this, &Main::textBox3_click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Main::textBox3_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(0, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(20, 20);
			this->button3->TabIndex = 10;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(0, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(20, 20);
			this->button4->TabIndex = 11;
			this->button4->Text = L"X";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Main::toolTip1_Popup);
			// 
			// log_clean
			// 
			this->log_clean->Location = System::Drawing::Point(594, 256);
			this->log_clean->Name = L"log_clean";
			this->log_clean->Size = System::Drawing::Size(105, 23);
			this->log_clean->TabIndex = 13;
			this->log_clean->Text = L"Clean Logs";
			this->toolTip1->SetToolTip(this->log_clean, L"Clean logs on device");
			this->log_clean->UseVisualStyleBackColor = true;
			this->log_clean->Click += gcnew System::EventHandler(this, &Main::log_clean_Click);
			// 
			// screenshotTakeButton
			// 
			this->screenshotTakeButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->screenshotTakeButton->Location = System::Drawing::Point(378, 186);
			this->screenshotTakeButton->Name = L"screenshotTakeButton";
			this->screenshotTakeButton->Size = System::Drawing::Size(141, 23);
			this->screenshotTakeButton->TabIndex = 29;
			this->screenshotTakeButton->Text = L"Take Screenshot";
			this->toolTip1->SetToolTip(this->screenshotTakeButton, L"Takes screenshot to logs folder (if exists), else: to adb location folder");
			this->screenshotTakeButton->UseVisualStyleBackColor = true;
			this->screenshotTakeButton->Click += gcnew System::EventHandler(this, &Main::screenshotTakeButton_Click);
			// 
			// takeScreenshotAndLogs
			// 
			this->takeScreenshotAndLogs->Location = System::Drawing::Point(763, 298);
			this->takeScreenshotAndLogs->Name = L"takeScreenshotAndLogs";
			this->takeScreenshotAndLogs->Size = System::Drawing::Size(105, 43);
			this->takeScreenshotAndLogs->TabIndex = 30;
			this->takeScreenshotAndLogs->Text = L"Get Logs && Take Screenshot";
			this->toolTip1->SetToolTip(this->takeScreenshotAndLogs, L"Both will be taken to \"log location folder\"");
			this->takeScreenshotAndLogs->UseVisualStyleBackColor = true;
			this->takeScreenshotAndLogs->Click += gcnew System::EventHandler(this, &Main::takeScreenshotAndLogs_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(352, 46);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(20, 20);
			this->button5->TabIndex = 12;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(664, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 31);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Get Logs";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Main::label4_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(96, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 23);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Send Deeplink";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &Main::label5_Click);
			// 
			// log_get
			// 
			this->log_get->Location = System::Drawing::Point(763, 256);
			this->log_get->Name = L"log_get";
			this->log_get->Size = System::Drawing::Size(105, 23);
			this->log_get->TabIndex = 16;
			this->log_get->Text = L"Get Logs";
			this->log_get->UseVisualStyleBackColor = true;
			this->log_get->Click += gcnew System::EventHandler(this, &Main::log_get_Click);
			// 
			// log_name_textbox
			// 
			this->log_name_textbox->Location = System::Drawing::Point(594, 98);
			this->log_name_textbox->Name = L"log_name_textbox";
			this->log_name_textbox->Size = System::Drawing::Size(287, 20);
			this->log_name_textbox->TabIndex = 17;
			this->log_name_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->log_name_textbox->Click += gcnew System::EventHandler(this, &Main::log_name_textbox_click);
			this->log_name_textbox->TextChanged += gcnew System::EventHandler(this, &Main::log_name_textbox_TextChanged);
			// 
			// log_location_textbox
			// 
			this->log_location_textbox->Location = System::Drawing::Point(594, 160);
			this->log_location_textbox->Name = L"log_location_textbox";
			this->log_location_textbox->Size = System::Drawing::Size(287, 20);
			this->log_location_textbox->TabIndex = 18;
			this->log_location_textbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->log_location_textbox->Click += gcnew System::EventHandler(this, &Main::log_location_textbox_click);
			this->log_location_textbox->TextChanged += gcnew System::EventHandler(this, &Main::log_location_textbox_TextChanged);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->Location = System::Drawing::Point(594, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(287, 31);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Log && Screenshot Name";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &Main::label6_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label7->Location = System::Drawing::Point(594, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(287, 25);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Log Location";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(568, 98);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(20, 20);
			this->button6->TabIndex = 21;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(568, 160);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(20, 20);
			this->button7->TabIndex = 22;
			this->button7->Text = L"X";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// focus_loser
			// 
			this->focus_loser->AutoSize = true;
			this->focus_loser->Location = System::Drawing::Point(438, 110);
			this->focus_loser->Name = L"focus_loser";
			this->focus_loser->Size = System::Drawing::Size(19, 13);
			this->focus_loser->TabIndex = 23;
			this->focus_loser->Text = L"    ";
			this->focus_loser->Click += gcnew System::EventHandler(this, &Main::focus_loser_Click);
			// 
			// log_location_button
			// 
			this->log_location_button->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->log_location_button->Location = System::Drawing::Point(594, 186);
			this->log_location_button->Name = L"log_location_button";
			this->log_location_button->Size = System::Drawing::Size(89, 23);
			this->log_location_button->TabIndex = 24;
			this->log_location_button->Text = L"select location";
			this->log_location_button->UseVisualStyleBackColor = true;
			this->log_location_button->Click += gcnew System::EventHandler(this, &Main::log_location_button_Click);
			// 
			// filterStatus
			// 
			this->filterStatus->AutoSize = true;
			this->filterStatus->Location = System::Drawing::Point(688, 215);
			this->filterStatus->Name = L"filterStatus";
			this->filterStatus->Size = System::Drawing::Size(15, 14);
			this->filterStatus->TabIndex = 25;
			this->filterStatus->UseVisualStyleBackColor = true;
			this->filterStatus->CheckedChanged += gcnew System::EventHandler(this, &Main::filterStatus_CheckedChanged);
			// 
			// filterValue
			// 
			this->filterValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->filterValue->Enabled = false;
			this->filterValue->Location = System::Drawing::Point(709, 209);
			this->filterValue->Name = L"filterValue";
			this->filterValue->Size = System::Drawing::Size(159, 20);
			this->filterValue->TabIndex = 26;
			this->filterValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->filterValue->TextChanged += gcnew System::EventHandler(this, &Main::filterValue_TextChanged);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(874, 209);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(20, 20);
			this->button8->TabIndex = 27;
			this->button8->Text = L"X";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// consoleStatus
			// 
			this->consoleStatus->AutoSize = true;
			this->consoleStatus->Location = System::Drawing::Point(378, 126);
			this->consoleStatus->Name = L"consoleStatus";
			this->consoleStatus->Size = System::Drawing::Size(105, 17);
			this->consoleStatus->TabIndex = 28;
			this->consoleStatus->Text = L"Enable console\?";
			this->consoleStatus->UseVisualStyleBackColor = true;
			this->consoleStatus->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox1_CheckedChanged);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 527);
			this->Controls->Add(this->takeScreenshotAndLogs);
			this->Controls->Add(this->screenshotTakeButton);
			this->Controls->Add(this->consoleStatus);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->filterValue);
			this->Controls->Add(this->filterStatus);
			this->Controls->Add(this->log_location_button);
			this->Controls->Add(this->focus_loser);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->log_location_textbox);
			this->Controls->Add(this->log_name_textbox);
			this->Controls->Add(this->log_get);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->log_clean);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//DO NOT EDIT

#pragma endregion
//not "coded" elements
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void log_name_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void log_location_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

//----------coded elements----------
	
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		//setting textboxes to default text
		textBox2->Text = text.get(text.packet);
		textBox3->Text = text.get(text.deeplink);
		log_location_textbox->Text = text.get(text.log_location);
		log_name_textbox->Text = text.get(text.log_name);
		filterValue->Text = text.get(text.filter);

		//tooltips over buttons
		toolTip1->SetToolTip(this->button3, text.get(text.tooltip_clean));
		toolTip1->SetToolTip(this->button4, text.get(text.tooltip_clean));
		toolTip1->SetToolTip(this->button5, text.get(text.tooltip_clean));
		toolTip1->SetToolTip(this->button6, text.get(text.tooltip_clean));
		toolTip1->SetToolTip(this->button7, text.get(text.tooltip_clean));
		toolTip1->SetToolTip(this->button8, text.get(text.tooltip_clean));
	}

//textboxes

	private: System::Void textBox2_click(System::Object^ sender, System::EventArgs^ e) { //packet name
		while (textbox2.status < 2) {
			textBox2->Text = "";
			textbox2.status++;
		}
	}
	private: System::Void textBox3_click(System::Object^ sender, System::EventArgs^ e) { //deeplink
		while (textbox3.status < 2) {
			textBox3->Text = "";
			textbox3.status++;
		}
	}
	private: System::Void log_name_textbox_click(System::Object^ sender, System::EventArgs^ e) {
		while (logname_textbox.status < 2) {
			log_name_textbox->Text = "";
			logname_textbox.status++;
		}
	}
	private: System::Void log_location_textbox_click(System::Object^ sender, System::EventArgs^ e) {
		while (loglocation_textbox.status < 2) {
			log_location_textbox->Text = "";
			loglocation_textbox.status++;
		}
	}
	private: System::Void filterValue_click(System::Object^ sender, System::EventArgs^ e) {
		while (filterValue_textbox.status < 2) {
			filterValue->Text = "";
			filterValue_textbox.status++;
		}
	}

	private: System::Void filterStatus_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (filterValue->Enabled == true)
			filterValue->Enabled = false;
		else
			filterValue->Enabled = true;
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (consoleStatus->Checked == true)
			AllocConsole();
		else if(consoleStatus->Checked == false)
			FreeConsole();
	}
//buttons "main"
	private: System::Void takeScreenshotAndLogs_Click(System::Object^ sender, System::EventArgs^ e) {
		user.adb_location = msclr::interop::marshal_as<std::string>(textBox1->Text); //set it to file location from textbox1
		user.log_location = msclr::interop::marshal_as<std::string>(log_location_textbox->Text); //set it to folder location from log_location_textbox
		user.filter = msclr::interop::marshal_as<std::string>(filterValue->Text); //set it to value from filterValue textbox
		user.log_name = msclr::interop::marshal_as<std::string>(log_name_textbox->Text); //set log name to value from log_name_textbox
		
		if (user.adb_location.length() <= 3) {
			MessageBox::Show(error.get(error.adb));
		}
		//Takes screenshot to logs folder (if exists), else: to adb location folder.
		else {
			if (user.log_location.length() > 2 && user.log_location != text.log_location) {
				//take SS
				takeScreenshot(user.adb_location, user.log_location, user.log_name);
				//getting logs logic and exectuion 
				if (filterStatus->Checked == true && filterValue->Text != gcnew String(text.filter.c_str()) && filterValue->Text != "") {
					system(logcat_get(user.adb_location, user.log_location, user.log_name, user.filter).c_str());
				}
				else {
					system(logcat_get(user.adb_location, user.log_location, user.log_name).c_str());
				}
				//summary
				MessageBox::Show("Screenshot taken and logs captured! \n Location: " + log_location_textbox->Text);
			}
			else {
				//take SS
				takeScreenshot(user.adb_location, user.log_name);
				//getting logs logic and exectuion 
				if (filterStatus->Checked == true && filterValue->Text != gcnew String(text.filter.c_str()) && filterValue->Text != "") {
					system(logcat_get(user.adb_location, user.log_location, user.log_name, user.filter).c_str());
				}
				else {
					system(logcat_get(user.adb_location, user.log_location, user.log_name).c_str());
				}
				//summary
				MessageBox::Show("Screenshot taken and logs captured! \n Location: Your adb folder");
			}
		}
		focus_loser->Focus();
	}
	private: System::Void screenshotTakeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		user.adb_location = msclr::interop::marshal_as<std::string>(textBox1->Text); //set it to file location from textbox1
		user.log_location = msclr::interop::marshal_as<std::string>(log_location_textbox->Text); //set it to folder location from log_location_textbox
		//Takes screenshot to logs folder (if exists), else: to adb location folder.
		if (user.adb_location.length() <= 3) {
			MessageBox::Show(error.get(error.adb));
		}
		else {
			if (user.log_location.length() > 2 && user.log_location != text.log_location) {
				takeScreenshot(user.adb_location, "", user.log_location);
				MessageBox::Show("Screenshot taken! \n Location: " + log_location_textbox->Text);
			}
			else {
				takeScreenshot(user.adb_location, "");
				MessageBox::Show("Screenshot taken! \n Location: Your adb folder");
			}
		}
		focus_loser->Focus();
	}
																					 


	private: System::Void log_clean_Click(System::Object ^ sender, System::EventArgs ^ e) {
		user.adb_location = msclr::interop::marshal_as<std::string>(textBox1->Text); //set it to file location from textbox1
		if (user.adb_location.length() <= 3) {
			MessageBox::Show(error.get(error.adb));
		}
		else {
			system(logcat_clean(user.adb_location).c_str());
			MessageBox::Show("Succes");
		}
		focus_loser->Focus();
	}
	private: System::Void log_get_Click(System::Object ^ sender, System::EventArgs ^ e) {
		user.adb_location = msclr::interop::marshal_as<std::string>(textBox1->Text); //set it to file location from textbox1 (adb)
		user.log_location = msclr::interop::marshal_as<std::string>(log_location_textbox->Text); //set it to folder location from log_location_textbox
		user.filter = msclr::interop::marshal_as<std::string>(filterValue->Text); //set it to value from filterValue textbox
		if (user.adb_location.length() <= 3) {
			MessageBox::Show(error.get(error.adb));
		}
		else {
			user.log_name = msclr::interop::marshal_as<std::string>(log_name_textbox->Text); //set log name to value from log_name_textbox
			if (filterStatus->Checked == true && filterValue->Text != gcnew String(text.filter.c_str()) && filterValue->Text != "") {
				system(logcat_get(user.adb_location, user.log_location, user.log_name, user.filter).c_str());
			}
			else {
				system(logcat_get(user.adb_location, user.log_location, user.log_name).c_str());
			}
			MessageBox::Show("Succes");
		}
		focus_loser->Focus();
	}
	private: System::Void log_location_button_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ folderBrowser = gcnew FolderBrowserDialog();
			folderBrowser->RootFolder = Environment::SpecialFolder::Desktop;
			folderBrowser->Description = "Select where to save logs";
		if (folderBrowser->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(folderBrowser->SelectedPath, "New log save location:");
		}
		log_location_textbox->Text = folderBrowser->SelectedPath;
		focus_loser->Focus();
}
	private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {

		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = user.getdatapath();
		openFileDialog1->AutoUpgradeEnabled = true;
		openFileDialog1->Filter = "exe files (*.exe)|*.exe|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = false;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(openFileDialog1->FileName, "ADB Location:");
		}
		textBox1->Text = openFileDialog1->FileName; //show file location in textbox
		focus_loser->Focus();
	}
	private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		user.adb_location = msclr::interop::marshal_as<std::string>(textBox1->Text); //set it to file location from textbox1
		if (user.adb_location.length() <= 3) {
			MessageBox::Show(error.get(error.adb));
		}
		else {
			user.packet_name = msclr::interop::marshal_as<std::string>(textBox2->Text); //get packet_name data from textBox2
			if (user.packet_name.length() != 0 && user.packet_name.length() <= 3) {
				MessageBox::Show(error.get(error.packet));
			}
			else {
				string deeplink = msclr::interop::marshal_as<std::string>(textBox3->Text); //set deeplink from textBox3
				if (deeplink.length() <= 1) {
					MessageBox::Show(error.get(error.deeplink));
				}
				else if (deeplink == text.deeplink) {
					MessageBox::Show(error.get(error.deeplink));
				}
				else {
					system((connector(user.adb_location, user.packet_name, deeplink)).c_str());
				}
			}
		}
		focus_loser->Focus();
	}

//buttons "cleaners"

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
		focus_loser->Focus();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = "";
		focus_loser->Focus();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		focus_loser->Focus();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		log_name_textbox->Text = "";
		focus_loser->Focus();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		log_location_textbox->Text = "";
		focus_loser->Focus();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		filterValue->Text = "";
		focus_loser->Focus();
	}
	private: System::Void focus_loser_Click(System::Object^ sender, System::EventArgs^ e) {
}
	

private: System::Void filterValue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	

};
}

/*
textBox1 = Adb Location 
textBox2 = Packet Name
textBox3 = Deeplink

button1 = Select ADB Location
button2 = Run
button3 = Clean packet name
button4 = Clean Deeplink

*/