#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void func()
    {
        cout << "Base class A is called" << endl;
    }
};
class B : public A
{
    int y;

public:
    void func()
    {
        A::func(); // way to call the Base class method
        cout << "Derived class B is called" << endl;
    }
};
int main()
{
    A a;
    a.func();
    B b;
    b.func();

    return 0;
}