#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A()
    {
        x = 0;
        cout << "Base class default Constructor A is called" << endl;
    }
    A(int x1)
    {
        x = x1;
        cout << "Base class parameterized Constructor A is called" << endl;
    }
    void output()
    {
        cout << " X = " << x << endl;
    }
};
class B : public A
{
    int y;

public:
    B() : A()
    {
        y = 0;
        cout << "Derived class default constructor B is called" << endl;
    }
    B(int y1, int x1) : A(x1)
    {
        y = y1;
        cout << "Derived class parameterized Constructor B is called" << endl;
    }
    void output()
    {
        A::output();
        cout << " Y = " << y << endl;
    }
};

class C : public B
{
    int z;

public:
    C() : B()
    {
        z = 0;
        cout << "Derived class default constructor C is called" << endl;
    }
    C(int z1, int y1, int x1) : B(y1, x1)
    {
        z = z1;
        cout << "Derived class parameterized Constructor C is called" << endl;
    }
    void output()
    {
        B::output();
        cout << " Z = " << z << endl;
    }
};
int main()
{

    C c;
    c.output();
    C c1(10, 20, 30);
    c1.output();
    return 0;
}