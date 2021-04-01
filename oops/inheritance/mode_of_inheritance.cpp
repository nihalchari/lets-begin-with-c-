#include <iostream>
using namespace std;

class Base
{
public:
  int publicBase;

protected:
  int protectedBase;

private:
  int privateBase;
};

class DirectDer : public Base
{
public:
  int publicDirectDer;

protected:
  int protectedDirectDer;

private:
  int privateDirectDer;
};

class IndirectDer : private DirectDer
{
public:
  int publicIndirectDer;

protected:
  int protectedIndirectDer;

private:
  int privateIndirectDer;
};