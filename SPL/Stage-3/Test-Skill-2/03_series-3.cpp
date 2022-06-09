/*
Series III
Write a program to generate the first 'n' terms of the following series 6, 11, 21, 36, 56,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

6 11 21 36 56 81

Case 1
Case 2
Case 3
Input (stdin)
10

Output (stdout)
6 11 21 36 56 81 111 146 186 231

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int n;
    cin >> n;
    int num = 6;
    for (int i = 0; i < n; i++)
    {
        num = num + (5 * i);
        cout << num << " ";
    }
    return 0;
}