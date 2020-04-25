#include "properties.h"

//properties& u
System::String^ properties::getdatapath()
{
	System::String^ systemString = msclr::interop::marshal_as<System::String^>(this->openFileDialog1_default);
	return systemString;
}

System::String^ message::get(string id) {
	System::String^ text = msclr::interop::marshal_as<System::String^>(id);
	return text;
}
System::String^ error_text::get(string id) {
	System::String^ text = msclr::interop::marshal_as<System::String^>(id);
	return text;
}

//void clicked::clean() {
//	this->status = 0;
//}