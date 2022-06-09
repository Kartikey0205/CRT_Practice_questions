/*
Series I
Write a program to generate the first 'n' terms of the following series 0.5, 1.5, 4.5, 13.5, ...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

5

Sample Output:

0.5 1.5 4.5 13.5 40.5

Case 1
Case 2
Case 3
Input (stdin)
6

Output (stdout)
0.5 1.5 4.5 13.5 40.5 121.5

Input (stdin)
1

Output (stdout)
0.5
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Try out your code here
    int num;
    cin >> num;
    double n = 0.5;
    for (int i = 0; i < num; i++)
    {
        cout << n << " ";
        n = (n + pow(3, i));
    }
    return 0;
}