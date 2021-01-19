#include<iostream>
using  namespace std;

///@brief when copty ctor is called?/
///1. initialization of object using already existing object.
///2. pass by value
///3. return by value
///4. throw and catch?? will see in exceptions topic @todo


class TestClass
{
    public:
    int size;
    int *arr;

    TestClass()
    {
        cout << "ctor TestClass() parameterless " << this << endl;
        size=3;
        arr = new int[size];
    }

    TestClass(size_t size)
    {
        cout << "ctor TestClass(int val) parameterized " << this <<endl; 
        this->size =size; 
        arr = new int[size];  
    }

    TestClass(const TestClass& other)
    {
        cout << "copy ctor TestClass(const TestClass& other) " << this << endl;
        this->size = other.size;
        this->arr = new int[size];
        for(uint32_t i = 0; i<size; ++i)
        {
            arr[i] = other.arr[i];
        }        
    }

    ~TestClass()
    {
        std::cout <<  "dtor "<< this <<endl;
        delete[] arr;  
    }

};

TestClass fun(const TestClass& obj)
{
    return obj;
}

int getSize(const TestClass obj)
{
    return obj.size;
}


int main()
{
    TestClass testObj1{};
    // TestClass testObj2{5};
    // TestClass testObj3{testObj1};
    
    auto x =fun(testObj1);

    // fun(std::move(testObj1));

    return 0;
}