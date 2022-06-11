/*
Swapping using call by reference
Read two integers as input and swap them using call by reference, without using a third variable.
Input (stdin)
6 5

Output (stdout)
Before swapping a= 6 and b=5
After swapping a= 5 and b=6
*/

#include <iostream>
using namespace std;
void swap(int &num1, int &num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Before swapping a= " << a << " and b=" << b << endl;
    swap(a, b);
    cout << "After swapping a= " << a << " and b=" << b;

    return 0;
}