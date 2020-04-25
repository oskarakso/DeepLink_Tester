//#include "includes.h"
#include <iostream>
#include <string.h> 

using namespace std;

char* dupa(){
	return "dupa";
}

string cleaner(string path) {
	string x = ("\\"); //bitch we lookin for - might be changed so variable
    size_t found = path.find_last_of(x); //find X going from the back
    return path.substr(0, found); //works? works. Dont ask why xD
}

string connector(string a, string b, string c) {
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

//"cd " - string a -" && " - adb shell am start -a " if = null then "android.intent.action.VIEW" else string b - " -d " "string c"