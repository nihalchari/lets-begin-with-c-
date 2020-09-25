#ifndef MY_CLASS_HPP
#define MY_CLASS_HPP

// #include<string>

namespace testspace
{
    class TestClass
    {
            public:
            void setParam();
            void getParam();

            private:
            bool validateData();
        
            private:
            int id;
            float ht;
    };

}// end of testnamespace

#endif