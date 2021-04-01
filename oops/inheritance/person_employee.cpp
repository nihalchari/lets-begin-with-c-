#include <iostream>
using namespace std;

// data member
// ctor
// static
// acess specifier
// shadowing
// mode of inheritance
// type of inheritance

//what is inherited?
//where it get stored?
// what is accessile

class Person
{
public:
  Person() : name(""), age(0), weight(0) { cout << "Person(void)\n"; }
  Person(string name, int age, int weight)
      : name(name), age(age), weight(weight)
  {
    cout << "Person(string, int)\n";
  };

  void printRecords()
  {
    cout << "name   : " << this->name << endl;
    cout << "age    : " << this->age << endl;
    cout << "weight : " << this->weight << endl;
  }

  static double s_data;
  static void s_baseFun() { cout << "Static member fun\n"; }

private:
  string name; //32
  int age;     //4
  int weight;  //4
};

double Person::s_data{21};

class Employee : public Person
{

public:
  Employee(void) : empid(0), exp(0)
  {
    cout << "Employee(void) \n";
  }

  Employee(string name, int age, int weight, int empid, int exp)
      : Person(name, age, weight), empid(empid), exp(exp)
  {
    cout << "Employee(string , int , int , int, int) \n";
  }

  void fun() {}

  void showRecords()
  {
    this->printRecords();
    // cout << "name   : " << this->name << endl;
    // cout << "age    : " << this->age << endl;
    // cout << "weight : " << this->weight << endl;
    cout << "empid  : " << this->empid << endl;
    cout << "Exp    : " << this->exp << endl;
  }

private:
  // string name; // 32+32
  // int age;     // 4+4
  // int weight;  // 4+4
  int empid; // 4
  int exp;   // 4
};

int main()
{
  Employee emp{"Peter", 25, 50, 123, 3};
  cout << sizeof(emp) << endl;
  // emp.showRecords();
  Employee::s_baseFun();
  cout << "Employee::s_data : " << Employee::s_data << endl;
  return 0;
}

int main1()
{
  // Employee emp{};
  Employee emp{"peter", 25, 50, 123, 3};
  cout << sizeof(emp) << endl;
  emp.showRecords();

  return 0;
}

int main2()
{
  Person p{};
  // Person p{"Peter", 25, 50};
  cout << sizeof(p) << endl;
  p.printRecords();
  // cout << "Person::s_data : " << Person::s_data << endl;
}

///@note both static and non static data gets inherited in derived class, but
/// only non-static data gets space inside obj of derived class.
///@note Non-static data member(public, protected, private) gets inherited will
/// get space inside object of derived class, but only public and protected can
/// be aceessed.
///@note from any ctor of dervied class, by default base class default ctor is
/// called
///@note by default mode of inheritance is private, in multiple inheritance
/// define mode for each.