#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>
#include "properties.h"

//char* dupa();
std::string connector(std::string a, std::string b, std::string c);
std::string cleaner(std::string path);
std::string logcat_get(std::string adb, std::string log_loc, std::string name);
std::string logcat_clean(std::string adb);