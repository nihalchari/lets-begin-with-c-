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
        
            public:
            static int s_data;

            private:
            int m_id;
            // name;
            float m_height;
    };
}// end of testnamespace

#endif