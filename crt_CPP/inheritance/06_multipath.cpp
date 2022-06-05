#include <iostream>
using namespace std;
class P
{
    int w;

public:
    P()
    {
        w = 0;
        cout << "Base class default Constructor P is called" << endl;
    }
    P(int w1)
    {
        w = w1;
        cout << "Base class parameterized Constructor P is called" << endl;
    }
    void output()
    {
        cout << " W = " << w << endl;
    }
};
class A : public P
{
    int x;

public:
    A() : P()
    {
        x = 0;
        cout << "Base class default Constructor A is called" << endl;
    }
    A(int x1, int w1) : P(w1)
    {
        x = x1;
        cout << "Base class parameterized Constructor A is called" << endl;
    }
    void output()
    {
        P::output();
        cout << " X = " << x << endl;
    }
};
class B : public P
{
    int y;

public:
    B() : P()
    {
        y = 0;
        cout << "Derived class default constructor B is called" << endl;
    }
    B(int y1, int w2) : P(w2)
    {
        y = y1;
        cout << "Derived class parameterized Constructor B is called" << endl;
    }
    void output()
    {
        P::output();
        cout << " Y = " << y << endl;
    }
};

// isi order p call hoga
class C : public B, public A
{
    int z;

public:
    C() : B(), A()
    {
        z = 0;
        cout << "Derived class default constructor C is called" << endl;
    }
    C(int w1, int w2, int z1, int y1, int x1) : A(x1, w1), B(y1, w2)
    {
        z = z1;
        cout << "Derived class parameterized Constructor C is called" << endl;
    }
    void output()
    {
        A::output();
        B::output();
        cout << " Z = " << z << endl;
    }
};
int main()
{

    C c;
    c.output();
    C c1(40, 50, 10, 20, 30);
    c1.output();
    return 0;
}