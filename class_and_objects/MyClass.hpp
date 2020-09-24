#ifndef MY_CLASS_HPP
#define MY_CLASS_HPP

#include<string>

namespace testspace
{
    class TestClass
    {
            public:
            void setparam();
            void getparam();
        
            int id;
            std::string name;
            float ht;

    };

}// end of testnamespace


#endif