#include <iostream>
using namespace std;
class calculator
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    // sum function
    calculator sum(calculator c2)
    {
        calculator res;
        res.a = a + c2.a;
        res.b = b + c2.b;

        return res;
    }

    // sub function
    calculator sub(calculator c2)
    {
        calculator res;
        res.a = a - c2.a;
        res.b = b - c2.b;

        return res;
    }

    // mul function
    calculator mul(calculator c2)
    {
        calculator res;
        res.a = a * c2.a;
        res.b = b * c2.b;

        return res;
    }

    // div function
    calculator div(calculator c2)
    {
        calculator res;
        res.a = a / c2.a;
        res.b = b / c2.b;

        return res;
    }
    void outputData()
    {
        cout << "A = " << a << "\t"
             << "B = " << b << endl;
    }
};
int main()
{
    calculator c1, c2, sum, sub, div, mul;
    c1.setData(4, 5);
    c2.setData(2, 3);
    c1.outputData();
    c2.outputData();

    sum = c1.sum(c2);
    sub = c1.sub(c2);
    mul = c1.mul(c2);
    div = c1.div(c2);
    cout << endl;
    cout << "Sum will be " << endl;
    sum.outputData();
    cout << "Sub will be " << endl;

    sub.outputData();
    cout << "Mul will be " << endl;

    mul.outputData();
    cout << "Div will be " << endl;

    div.outputData();

    return 0;
}