// Function overloading  -- name same different argument

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}

int sum(int a, float b)
{
    return a + b;
}

int sum(float a, int b)
{
    return a + b;
}

int sum(float a, int b, double c)
{
    return a + b + c;
}
int main()
{
    cout << sum(2, 5) << endl;
    cout << sum(2.5f, 5.4f) << endl;
    cout << sum(2.9, 5.7) << endl;
    cout << sum(2, 5.4f) << endl;
    cout << sum(2.8f, 5) << endl;
    cout << sum(2.4f, 5, 4.0) << endl;

    return 0;
}