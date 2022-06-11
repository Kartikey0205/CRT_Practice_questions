#include <iostream>
using namespace std;
int gcd(int num1, int num2, int small)
{
    if (num1 % small == 0 && num2 % small == 0)
    {
        return small;
    }
    small--;
    gcd(num1, num2, small);
}
int gcdTwo(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        return gcdTwo(num2, num1 % num2);
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int small;
    if (num1 > num2)
    {
        small = num2;
    }
    else
    {
        small = num1;
    }
    cout << "G.C.D of " << num1 << " and " << num2 << " = " << gcd(num1, num2, small) << endl;

    cout << gcdTwo(num1, num2);
    return 0;
}
