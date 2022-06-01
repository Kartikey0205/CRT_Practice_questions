#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void setData(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void getData()
    {
        cout << "Enter the value of real and imag " << endl;
        cin >> real >> imag;
    }
    // sum function
    complex sum(complex c2)
    {
        complex res;
        res.real = this->real + c2.real;
        res.imag = this->imag + c2.imag;

        return res;
    }

    // sub function
    complex sub(complex c2)
    {
        complex res;
        res.real = this->real - c2.real;
        res.imag = this->imag - c2.imag;

        return res;
    }

    // mul function
    complex mul(complex c2)
    {
        complex res;
        res.real = this->real * c2.real;
        res.imag = this->imag * c2.imag;

        return res;
    }

    // div function
    complex div(complex c2)
    {
        complex res;
        res.real = this->real / c2.real;
        res.imag = this->imag / c2.imag;

        return res;
    }
    void outputData()
    {
        cout << real << " + "
             << imag << "i " << endl;
    }
};
int main()
{
    complex c1, c2, sum, sub, div, mul;
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
