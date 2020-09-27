#include "test_class.hpp"
#include <iostream>
#include<string>

namespace testspace
{
    // using namespace testspace;
    using namespace std;

    void TestClass::setParam()
    {
        
        cout << "Enter name: " << endl;
        // cin >> name;
        cout << "Enter id: " << endl;
        cin >> m_id;
        cout << "Enter height: " << endl;
        cin >> m_height;
    }

    void TestClass::getParam()
    {
        if(validateData())
        {
            // cout << "Name   : "<< name << endl;
            cout << "Id     : "<< m_id << endl;
            cout << "Height : " << m_height << endl;
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




