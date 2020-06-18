#pragma once
//#include "includes.h"
#include <iostream>
#include <string.h> 
#include <iomanip>
#include <ctime>
#include <sstream>
#include "properties.h"


message text_functions;

using namespace std;
/*
char* dupa(){ //testing purposes
	return "dupa";
}
*/

string cleaner(string path) {
	string x = ("\\"); //element we lookin for - might be changed so variable
    size_t found = path.find_last_of(x); //finds X going from the back
    return path.substr(0, found); //works? works. Dont ask why and how xD
}

string date_time_get() {
		auto t = std::time(nullptr);
		auto tm = *std::localtime(&t);
		std::ostringstream oss;
		oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
		auto time = oss.str();
		return time;
}

string connector(string a, string b, string c) { //connects all needed elements to run deeplink tesing command in ADB
	// a -> Location of before cutting
	// b -> packet to open
	// c -> deeplink

	string cmd; // final one to return
	string cd = "cd ";
	string and = " && ";
	a = cleaner(a); //cleaning it to get pure path without "adb.exe"
	string adb_command = "adb shell am start -a "; //adb command to run
	string adb_d = " -d "; //adb parameter
	//check status of "packet name" texbox
	if (b == "") {
		b = "android.intent.action.VIEW";
	}
	else 
	b = b;

	cmd.append(cd);
	cmd.append(a);
	cmd.append(and);
	cmd.append(adb_command);
	cmd.append(b);
	cmd.append(adb_d);
	cmd.append(c);
	//cout << cmd; //for testing purposes only
	return cmd; //return it to run in system()
	/*old version, needs char* function */
	//char* cmd_fix = new char[cmd.length() + 1]; //allocate memory 
	//strcpy(cmd_fix, cmd.c_str()); //convert ready string to char*
}

string logcat_get(string adb, string log_loc, string name, string filter) {
	//adb logcat -d -v time >.\"name".txt
	//Add to fully suypport text fields
	//string location
	//string name
	// date (01_01_0001-11:11:11)
	if (name.length() == 0 || name == (text_functions.log_name)) {
		name = date_time_get();
	}

	if (log_loc.length() == 0 || log_loc == (text_functions.log_location)) {
		log_loc = "";
	}


	adb = cleaner(adb);
	string cd = "cd ";
	string and = " && ";
	string start;

	if (log_loc == "") {
		// <filter>:D *:F -d -v time
		start = "adb logcat " + filter + ":D *:F -d -v time >.\\";
	}
	else {
		start = "adb logcat " + filter + ":D *:F -d -v time >";
		start.append(log_loc);
		start.append("/");
		// adb logcat -d > <path-where-you-want-to-save-file>/filename.txt
	}

	string end = ".txt";
	string cmd;

	cmd.append(cd);
	cmd.append(adb);
	cmd.append(and);
	cmd.append(start);
	cmd.append(name);
	cmd.append(end);
	//cout << cmd;
	return cmd;
}

string logcat_get(string adb, string log_loc, string name) {
	//adb logcat -d -v time >.\"name".txt
	//Add to fully suypport text fields
	//string location
	//string name
	// date (01_01_0001-11:11:11)
	if (name.length() == 0 || name == (text_functions.log_name)) {
		name = date_time_get();
	}
	
	if (log_loc.length() == 0 || log_loc == (text_functions.log_location)) {
		log_loc = "";
	}
	

	adb = cleaner(adb);
	string cd = "cd ";
	string and = " && ";
	string start;

	if (log_loc == "") {
	start = "adb logcat -d -v time >.\\";
	}
	else {
		start = "adb logcat -d -v time >";
		start.append(log_loc);
		start.append("/");
	// adb logcat -d > <path-where-you-want-to-save-file>/filename.txt
	}

	string end = ".txt";
	string cmd;

	cmd.append(cd);
	cmd.append(adb);
	cmd.append(and);
	cmd.append(start);
	cmd.append(name);
	cmd.append(end);
	//cout << cmd;
	return cmd;
}

string logcat_clean(string adb) {
	adb = cleaner(adb);
	string cmd;

	string cd = "cd ";
	string and = " && ";
	string clean = "adb logcat -c";
	
	cmd.append(cd);
	cmd.append(adb);
	cmd.append(and);
	cmd.append(clean);
	
	//cout << cmd;
	return cmd;

}

//"cd " - string a -" && " - adb shell am start -a " if = null then "android.intent.action.VIEW" else string b - " -d " "string c"

/*
string logcat_get(string adb, string log_loc, string name) {
	//adb logcat -d -v time >.\"name".txt
	//Add to fully suypport text fields
	//string location
	//string name
	// date (01_01_0001-11:11:11)
	if (name.length() == 0) {
		name = date_time_get();
	}
	else if (name == (text_functions.log_name)) {
		name = date_time_get();
	}
	

adb = cleaner(adb);
string cd = "cd ";
string and = " && ";
string start = "adb logcat -d -v time >.\\";
string end = ".txt";
string cmd;

cmd.append(cd);
cmd.append(adb);
cmd.append(and);
cmd.append(start);
cmd.append(name);
cmd.append(end);
//cout << cmd;
return cmd;
}
*/