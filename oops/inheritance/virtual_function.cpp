#include <iostream>
using namespace std;

class Product
{
public:
  virtual void acceptRecord()
  {
    cout << "Name : ";
    cin >> name;
    cout << "Price  : ";
    cin >> price;
  }

  virtual void printRecord() const
  {
    cout << this->name << endl;
    cout << this->price << endl;
  }

private:
  string name;
  int price;
};

class Book : public Product
{
public:
  void acceptRecord()
  {
    Product::acceptRecord();
    cout << "pages  : ";
    cin >> pages;
  }

  void printRecord() const
  {
    Product::printRecord();
    cout << this->pages << endl;
  }

private:
  int pages;
};

class Tape : public Product
{
public:
  void acceptRecord()
  {
    Product::acceptRecord();
    cout << "playTime  : ";
    cin >> playTime;
  }

  void printRecord() const
  {
    Product::printRecord();
    cout << this->playTime << endl;
  }

private:
  int playTime;
};

int main()
{
  int choice = 1;

  while (choice)
  {
    cout << "Enter Choice\n";
    cout << "1. Book\n2. Tape\n0.Exit\n";

    cin >> choice;

    // Book *bptr = nullptr;
    // Tape *tptr = nullptr;
    Product *ptr = nullptr;

    switch (choice)
    {
    case 1:
      ptr = new Book{};
      break;
    case 2:
      ptr = new Tape{};
      break;
    }
    if (ptr != nullptr)
    {
      ptr->acceptRecord();
      ptr->printRecord();
    }
  }
}

int main1()
{
  Product *ptr = new Tape{};
  ptr->acceptRecord();
  ptr->printRecord();

  Tape *tptr = (Tape *)ptr;
  tptr->acceptRecord();
  tptr->printRecord();

  return 0;
}

int main2()
{
  // Book *ptr = new Book{};

  Tape *ptr = new Tape{};
  ptr->acceptRecord();
  ptr->printRecord();
}
