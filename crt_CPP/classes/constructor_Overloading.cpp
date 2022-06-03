#include <iostream>
using namespace std;
class data
{
    int a, b;

public:
    // default
    // data()
    // {
    //     a = 10;
    //     cout << "Zero Default \n";
    // }
    // 1 para

    // data(int a1)
    // {
    //     a = a1;
    //     cout << "One Parameterized\n";
    // }

    // instead of all these 1 constructor with default paramter
    // default right side se dena start krna h
    data(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    void output()
    {
        cout << (a + b) << endl;
    }
};
int main()
{
    data d1, d2(100);
    data d3(500, 100);

    d1.output();
    d2.output();
    d3.output();

    return 0;
}