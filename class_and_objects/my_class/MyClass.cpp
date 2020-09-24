#include "MyClass.hpp"
#include <iostream>
#include<string>

namespace testspace
{
    using namespace std;

    void TestClass::setparam()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter id: " << endl;
        cin >> id;
        cout << "Enter height: " << endl;
        cin >> ht;

    }

    void TestClass::getparam()
    {
        cout << "Name   : "<< name << endl;
        cout << "Id     : "<< id << endl;
        cout << "Height : " << ht << endl;

    }
}