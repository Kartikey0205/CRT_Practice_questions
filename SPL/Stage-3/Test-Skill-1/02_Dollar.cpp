/*
Dollars & Cents
Write a C++ program to add two dollars and cents.
INPUT & OUTPUT FORMAT:

Input consists of 4 integers. First two inputs correspond to the value of the first dollar and cent. Next two inputs correspond to the value of the second dollar and cent. Output should print the sum of dollar and cent.

SAMPLE INPUT:

30

10

140

99

SAMPLE OUTPUT:

171

9

Case 1
Case 2
Case 3
Input (stdin)
45
23
123
100

Output (stdout)
169
23
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int d1, c1, d2, c2;
    cin >> d1 >> c1 >> d2 >> c2;
    if ((c1 + c2) >= 100)
    {
        cout << d1 + d2 + 1 << endl;
        cout << ((c1 + c2) - 100);
    }
    else
    {
        cout << d1 + d2 << endl;
        cout << (c1 + c2);
    }

    return 0;
}