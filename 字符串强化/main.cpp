#include <iostream>
using namespace std;

#include "String.h"

#pragma warning(disable:4996)

ostream& operator<<(ostream& out, String& op)
{
    out << op.str << endl;;
    return out;

}
istream& operator>>(istream& in, String& op)
{
    char buf[1024] = "";
    in >> buf;

    if (strlen(buf) > op.capacity)
    {
        cout << "������Χ" << endl;
        
    }
    op.str = new char[strlen(buf) + 1];
    strcpy(op.str,buf);
    op.size = strlen(buf);

    cout << "�����Ѿ�����" << endl;
    return in;

}



int main()
{
    String string("hasDUHFUIASBUFI");

    cout << string << endl;
    cout << "hello world" << endl;


    cout << string[2] << endl;


    String str;
    cout << "�������������" << endl;
    cin >> str;
    cout << "���������" << endl;
    cout << str;

    cout << str[5] << endl;

    system("pause");
    return 0;
}