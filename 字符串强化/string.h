#pragma once
#include <iostream>
using namespace std;
#pragma warning(disable:4996)


class String
{
	friend ostream& operator<<(ostream& out, String& op);
	friend istream& operator>>(istream& in, String& op);
private:
	char* str;
	int size;
	int capacity;
public:
	String();
	String(const char* str);

	int Size(void);

	char& operator[](int index);

	~String();

};
