#include<iostream>
#include<string>
#include<vector>
using namespace std;


class TestClass
{
    public:
    TestClass()
    {
        x=0;
    }

    TestClass(int val)
    {
        x=val;
    }

    int x;


};


int main()
{
    // int i;
    // cout << i << endl;

    // int y{};
    // cout << y << endl;

    // string s1;
    // cout << s1 << endl;

    // int arr[3];
    // for(auto x : arr)
    // {
    //     cout << x << endl;
    // }

    
    // TestClass testObj();
    // cout << testObj.x << endl;



    ///@note Prefer {} List initialization over alternatives unless you have a strong reason not to.
    vector<int> vec1 {1,2,3};
    for(const auto& element : vec1)
    {
        cout << element << endl;
    }

    cout << endl;

    vector<int> vec2(5,55);
    for(const auto& element : vec2)
    {
        cout << element << endl;
    }


}
