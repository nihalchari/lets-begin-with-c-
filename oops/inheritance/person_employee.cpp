#include <iostream>
using namespace std;

class Person {
public:
  Person() : name(""), age(0), weight(0) { cout << "Person(void)\n"; }
  Person(string name, int age, int weight)
      : name(name), age(age), weight(weight) {
    cout << "Person(string, int)\n";
  };

  void printRecords() {
    cout << "name   : " << this->name << endl;
    cout << "age    : " << this->age << endl;
    cout << "weight : " << this->weight << endl;
  }

private:
  string name;
  int age;
  int weight;
};

class Employee {

public:
  Employee(void) : name(""), age(0), weight(0), empid(0), exp(0) {
    cout << "Employee(void) \n";
  }

  Employee(string name, int age, int weight, int empid, int exp)
      : name(name), age(age), weight(weight), empid(empid), exp(exp) {
    cout << "Employee(string , int , int , int, int) \n";
  }

  void showRecords() {
    cout << "name   : " << this->name << endl;
    cout << "age    : " << this->age << endl;
    cout << "weight : " << this->weight << endl;
    cout << "empid  : " << this->empid << endl;
    cout << "Exp    : " << this->exp << endl;
  }

private:
  string name;
  int age;
  int weight;
  int empid;
  int exp;
};

int main() {
  // Person p{};
  // Person p{"Peter", 25, 50};
  // cout << sizeof(p) << endl;
  // p.printRecords();

  // Employee emp{};
  Employee emp{"Peter", 25, 50, 123, 3};
  cout << sizeof(emp) << endl;
  emp.showRecords();
  return 0;
}