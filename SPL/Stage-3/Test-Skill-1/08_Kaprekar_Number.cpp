/*
Kaprekar number
Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar number as 2972 = 88209 & 88 + 209 = 297 Write a program to find whether the given number is a Kaprekar number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

Refer sample output for details.

SAMPLE INPUT & OUTPUT:

9

Kaprekar Number

Case 1
Case 2
Case 3
Input (stdin)
3

Output (stdout)
Not a Kaprekar Number

Input (stdin)
45

Output (stdout)
Kaprekar Number
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Try out your code here
    int digit, sum = 0, sqr, sumSqr = 0;
    cin >> digit;
    sqr = pow(digit, 2);
    while (digit != 0)
    {
        int rem = digit % 10;
        sum = sum + rem;
        digit = digit / 10;
    }
    while (sqr != 0)
    {
        int rem = sqr % 10;
        sumSqr = sumSqr + rem;
        sqr = sqr / 10;
    }
    if (sumSqr == sum)
    {
        cout << "Kaprekar Number";
    }
    else
    {
        cout << "Not a Kaprekar Number";
    }
    return 0;
}