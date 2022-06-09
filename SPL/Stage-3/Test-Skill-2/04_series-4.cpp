/*
Series IV
Write a program to generate the following series 0,2,8,14,...,34.
Input format:

The input is an integer which denotes 'n'.

Output format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

0 2 8 14 24 34

Case 1
Case 2
Case 3
Input (stdin)
10

Output (stdout)
0 2 8 14 24 34 48 62 80 98
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Try out your code here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << (pow((i + 1), 2) - 1) << " ";
        }
        else
        {
            cout << (pow((i + 1), 2) - 2) << " ";
        }
    }
    return 0;
}