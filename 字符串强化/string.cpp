
#include "String.h"


String::String()
{
	this->capacity = 100;
	this->size = 0;
	this->str = NULL;
	cout << "无参构造" << endl;
}

String::String(const char* Str)
{
	if (str == NULL)
	{
		return;
	}
	this->size = strlen(Str);
	this->capacity = 100;
	this->str = new char[strlen(Str) + 1];
	strcpy(this->str,Str);
	
}


int String::Size(void)
{

	return this->size;
}

char& String::operator[](int index)
{
	// TODO: 在此处插入 return 语句

	return this->str[index];
}





String::~String()
{
	if (this->str != NULL)
	{
		delete[] this->str;
		this->str = NULL;
	}
}
