/*
Factorial
Write a program to compute the factorial of a number using recursion.
INPUT AND OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT

5

The factorial of 5 is 120

Case 1
Case 2
Case 3
Input (stdin)
10

Output (stdout)
The factorial of 10 is 3628800
*/

#include <iostream>
using namespace std;
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return (num * fact(num - 1));
}
int main()
{
    // Try out your code here
    int num;
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num);
    return 0;
}