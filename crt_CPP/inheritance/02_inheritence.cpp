#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void setData()
    {
        x = 10;
        cout << "Base class A is called" << endl;
    }
};
class B : public A
{
    int y;

public:
    void setData()
    {
        A::setData(); // way to call the Base class method
        y = 20;
        cout << "Derived class B is called" << endl;
    }
};
int main()
{

    B b;
    b.setData();

    return 0;
}