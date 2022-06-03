#include <iostream>
using namespace std;
class data
{
    int a;

public:
    data(int a1)
    {
        a = a1;
        cout << "Constructor called " << a << endl;
    }

    ~data()
    {
        cout << "Destructor order called..." << a << endl;
    }
};
int main()
{

    data d1 = 10;
    data d2 = 20;
    data d3 = 30;

    return 0;
}