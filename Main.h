#pragma once
#include "includes.h"



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
	/*to do: make .h that initializes every needed class */
	clicked textbox2; 
	properties user;
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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
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

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code


		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(722, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADB Location";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Main::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(726, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(726, 73);
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
			this->label2->Location = System::Drawing::Point(26, 42);
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
			this->button2->Location = System::Drawing::Point(204, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(26, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"Leave blank to use standard \"click\"\r\n";
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
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Main::textBox3_TextChanged);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(893, 527);
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
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = user.getdatapath(user); 
		openFileDialog1->AutoUpgradeEnabled = true;
		openFileDialog1->Filter = "exe files (*.exe)|*.exe|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = false;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			MessageBox::Show(openFileDialog1->FileName, "ADB Location:");
		}
		//System::String^ managed = openFileDialog1->FileName;
		//std::string unmanaged = msclr::interop::marshal_as<std::string>(managed); //convert
		//user.adb_location = unmanaged; //set it to file location
		textBox1->Text = openFileDialog1->FileName; //show file location in textbox
	}
	private: System::Void openFileDialog1_FileOk_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		user.adb_location = msclr::interop::marshal_as<std::string>(textBox1->Text); //set it to file location from textbox1
		if (user.adb_location.length() <= 1) {
			//add error message
		}
		else {
		user.packet_name = msclr::interop::marshal_as<std::string>(textBox2->Text); //get packet_name data from textBox2
		string deeplink = msclr::interop::marshal_as<std::string>(textBox3->Text); //set deeplink from textBox3
		if (deeplink.length() <= 1) {
			//add error message
		}
		else {
			system((connector(user.adb_location, user.packet_name, deeplink)).c_str());
			}
		}
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) { //packet name
		
	}
private: System::Void textBox2_click(System::Object^ sender, System::EventArgs^ e) { //packet name
	while (textbox2.status < 2) {
		textBox2->Text = "";
			textbox2.status++;
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) { //deeplink
}

};
}
	