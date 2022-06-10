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
    int k, m, n, temp, i = 0, j = 0, count = 0, c, a, b, r1 = 0, r2 = 0, r3, r4;
    cin >> k;
    temp = k * k;
    m = temp;
    n = temp;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    if (count % 2 != 0)
    {
        c = count / 2;

        while (m > 0 && i <= c)
        {
            m = m / 10;
            i++;
            r1 = m;
        }
        while (n > 0 && j <= c)
        {
            b = n % 10;
            r2 = r2 + b * pow(10, j);
            n = n / 10;
            j++;
        }
    }

    else
    {
        c = count / 2;
        while (m > 0 && i < c)
        {
            m = m / 10;
            i++;
            r1 = m;
        }
        while (n > 0 && j < c)
        {
            b = n % 10;
            r2 = r2 + b * pow(10, j);
            n = n / 10;
            j++;
        }
    }

    if ((r1 + r2) == k)
        cout << "Kaprekar Number";
    else
        cout << "Not a Kaprekar Number";
    return 0;
}