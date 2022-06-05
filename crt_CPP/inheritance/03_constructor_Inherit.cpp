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
int main()
{

    B b;
    B b1(10, 20);
    b1.output();
    return 0;
}