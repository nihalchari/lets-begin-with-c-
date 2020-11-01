#ifndef MY_CLASS_HPP
#define MY_CLASS_HPP

#include<string>
using namespace std;

///@brief brief info about class testclass
namespace testspace
{
    class TestClass
    {
            public:
            void setParam();
            void getParam();

            private:
            bool validateData();
        
            public:
            static int s_dataMax;

            private:
            int m_id;
            string name;
            float m_height;

    };// end of TestClass 

}// end of testnamespace

#endif


