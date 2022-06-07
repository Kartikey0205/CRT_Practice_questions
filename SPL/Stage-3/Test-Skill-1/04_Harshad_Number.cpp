/*
Harshad Number
Write a C++ program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is divisible by the sum of its digits.
INPUT & OUTPUT FORMAT:

Input consists of 1 integer. If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".

SAMPLE INPUT:

1729

SAMPLE OUTPUT:

Harshad Number

Case 1
Case 2
Case 3
Input (stdin)
1343

Output (stdout)
Not Harshad Number

Input (stdin)
64

Output (stdout)
Not Harshad Number
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, sum = 0, temp;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        temp = temp / 10;
        sum = sum + rem;
    }
    if (num % sum == 0)
    {
        cout << "Harshad Number";
    }
    else
    {
        cout << "Not Harshad Number";
    }
    return 0;
}