/*

Compute a^n
Write a program to compute a^n (a power n) using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers

Refer sample input and output for formatting specifications

SAMPLE INPUT & OUTPUT:

Enter the value of a

2

Enter the value of n

8

The value of 2 power 8 is 256

Case 1
Case 2
Case 3
Input (stdin)
6
5

Output (stdout)
Enter the value of a
Enter the value of n
The value of 6 power 5 is 7776
*/

#include <iostream>
using namespace std;
int pow(int, int);

int main()
{
    // Try out your code here
    int a, n;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The value of " << a << " power " << n << " is " << pow(a, n);
    return 0;
}

int pow(int base, int power)
{
    if (power == 0)
        return 1;
    else
        return base * pow(base, power - 1);
}