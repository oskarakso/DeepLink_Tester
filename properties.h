#pragma once
#include "includes.h"
using namespace std;

#ifndef properties_H
#define properties_H

class clicked {
public:
	int status = 0;
	//void clean();
};

class message {
public:
	System::String^ get(string id);
	string adb = "";
	string packet = "Leave blank to use standard \"click";
	string deeplink = "Paste your deeplink here!";

};

class error_text {
public:
	System::String^ get(string id);
	string adb = "Missing ADB location";
	string deeplink = "Missing deeplink";
	string packet = "Wrong packet name";
};

class properties {
public:
	string adb_location;
	string packet_name;
	string openFileDialog1_default = "c:\\";
	System::String^ getdatapath(); // (openFileDialog1_default);
};
#endif


//auto givedatapath()
//{	
	//System::String^ systemString = msclr::interop::marshal_as<System::String^>(properties.openFileDialog1_default);
	//return systemString;
//}