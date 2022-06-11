/*
Fibonacci Series
Write a program to find the nth term in the Fibonacci series using recursion. Note that the first 2 terms in the Fibonacci Series are 0 and 1.
INPUT & OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

All text in bold corresponds to the input and the rest corresponds to output.

SAMPLE INPUT & OUTPUT:

5

The term 5 in the fibonacci series is 3

Case 1
Case 2
Case 3
Input (stdin)
8

Output (stdout)
The term 8 in the fibonacci series is 13
*/

#include <iostream>
using namespace std;
int fibo(int term)
{
    if (term == 0)
        return 0;
    else if (term == 1)
        return 1;
    else
        return (fibo(term - 1) + fibo(term - 2));
}
int main()
{
    // Try out your code here
    int term;
    cin >> term;
    cout << "The term " << term << " in the fibonacci series is " << fibo(term - 1);
    return 0;
}