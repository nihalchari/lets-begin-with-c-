#include "test_class.hpp"
#include <iostream>
#include<string>
  
namespace testspace
{
    using namespace std;

    void TestClass::setParam()
    {
        cout << "Enter name: " << endl;
        // cin >> name;
        cout << "Enter id: " << endl;
        cin >> id;
        cout << "Enter height: " << endl;
        cin >> ht;
    }

    void TestClass::getParam()
    {
        if(validateData())
        {
            // cout << "Name   : "<< name << endl;
            cout << "Id     : "<< id << endl;
            cout << "Height : " << ht << endl;
        }
        else
        {
            cout << "no valid data available" << endl;
        }
        
    }

    bool TestClass::validateData()
    {
        ///logic for data validation
        cout << "Validating data...." << endl;
        return true;
    }
    
}



