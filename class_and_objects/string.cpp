#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    auto s1 =string("String1");
    string s2{"String2"};

    
    cout << "size : " << s1.size() << " " << "length : " << s1.length() << endl; 

    auto s = s1+s2;
    cout << "s : " << s << endl;

    auto s4 = s1.append(s2);
    cout << "s4 : " << s4 << endl;

    s1.push_back('2');
    cout << s1 << endl;

    s1.pop_back();
    s1.pop_back();
    cout << s1 << endl;

    auto c1 = s1.at(0);
    auto c2 = s1.at(1);
    auto c3 = s1.at(2);
    cout << c1 << c2 << c3 << endl;

    auto it = s2.end()-1;
    cout << *it <<endl;

     auto ptr = s1.c_str();

    s1.clear();
    cout << s1 << endl;

    auto found = s1.find('i');
    cout << found << endl;

    return 0;
} 