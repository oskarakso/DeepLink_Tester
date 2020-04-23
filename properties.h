#pragma once
#include "includes.h"
using namespace std;

class clicked {
public:
	int status = 0;
};

class properties {
public:
	string adb_location;
	string packet_name;
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