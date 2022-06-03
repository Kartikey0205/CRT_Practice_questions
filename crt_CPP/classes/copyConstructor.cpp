#include <iostream>
using namespace std;
class data
{
    int a, b;

public:
    data(int x = 0, int y = 0)
    {
        a = x;
        b = y;
        cout << " Default argument Constructor called \n";
    }

    // copy constructor
    data(const data &r)
    {
        a = r.a;
        b = r.b;
        cout << " Copy Constructor called \n";
    }
    void output()
    {
        cout << (a + b) << endl;
    }
};
int main()
{

    data d3(500, 100);
    data d4_copy = d3;

    return 0;
}