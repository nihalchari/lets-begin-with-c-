#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A ctor\n";
    }

    void funA()
    {
        cout << "A::funA\n";
    }
    virtual void virFunA()
    {
        cout << "A::virFunA\n";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B ctor\n";
    }
    void funB()
    {
        cout << "B::funB\n";
    }

    void virFunB()
    {
        cout << "B::virFunB\n";
    }
    void funA()
    {
        cout << "B::funA\n";
    }
    virtual void virFunA() final
    {
        cout << "B::virFunA\n";
    }
};

class C : public B
{
public:
    // virtual void virFunA() final
    // {
    //     cout << "B::virFunA\n";
    // }
};

int main()
{
    A a;
    B b;
    b.funA();
}

#if 0
int main4()
{
    A *aptr = new B{}; // upcasting
    aptr->funA();      // early binding
    aptr->virFunA();   // late binding
}

int main3()
{
    //this calls are resolve at runtime

    A *aptr = new A{};
    aptr->virFunA();

    B *bptr = new B{};
    bptr->virFunB();
}

int main2()
{
    // all call are resolve at compile time since funA() funB() is non-virtual;
    A *aptr = new A{};
    aptr->funA();

    A *aptr1 = new B{}; // upcasting
    aptr1->funA();

    B *bptr1 = new B{};
    bptr1->funB();
    bptr1->funA();
}

int main1()
{

    // all call are resolve at compile time since called on object hence early binding;
    // A obj;
    // obj.funA();
    // obj.virFunA();

    // B obj1;
    // obj1.funA();
    // obj1.funB();
    // obj1.virFunA();
    // obj1.virFunB();
}

#endif
