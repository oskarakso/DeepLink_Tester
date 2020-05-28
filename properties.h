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
	System::String^ get(string id); //convert string (id) to system string and return it
	string adb = "";
	string packet = "Leave blank to use standard \"click\"";
	string deeplink = "Paste your deeplink here!";
	string tooltip_clean = "Click to clean form";
	string log_location = "Leave blank for default (adb folder)";
	string log_name = "Leave blank for default (date_time)";
};

class error_text {
public:
	System::String^ get(string id); //convert string (id) to system string and return it
	string adb = "Missing ADB location";
	string packet = "Wrong packet name";
	string deeplink = "Missing deeplink";
};

class properties {
public:
	System::String^ getdatapath(); // convert string to system string and return it (openFileDialog1_default);
	string adb_location;
	string log_location;
	string packet_name;
	string log_name;
	string openFileDialog1_default = "c:\\";
};
#endif


//auto givedatapath()
//{	
	//System::String^ systemString = msclr::interop::marshal_as<System::String^>(properties.openFileDialog1_default);
	//return systemString;
//}