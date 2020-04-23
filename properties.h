#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>

using namespace std;
//string adb_location;


class properties {
public:
	string adb_location;
	string openFileDialog1_default = "c:\\";
	System::String^ getdatapath(properties&u); // (openFileDialog1_default);
};

System::String^ properties::getdatapath(properties& u)
{	
	System::String^ systemString = msclr::interop::marshal_as<System::String^>(u.openFileDialog1_default);
	return systemString;
}


//auto givedatapath()
//{	
	//System::String^ systemString = msclr::interop::marshal_as<System::String^>(properties.openFileDialog1_default);
	//return systemString;
//}

/*
//public::string openFileDialog1_default = "c:\\";


void user_adb() {
properties user_adb;
user_adb.adb_location = "";
//= user_adb.get_location();
}
/*
string properties::get_location(){
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "exe files (*.exe)|*.exe|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		MessageBox::Show(openFileDialog1->FileName, "ADB Location:");
	}
	
	System::String^ managed = openFileDialog1->FileName;
	std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
	return unmanaged;
}
*/