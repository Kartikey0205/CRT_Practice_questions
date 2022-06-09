/*
Series II
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

4

Sample Output:

121 225 361 529

Case 1
Case 2
Case 3
Input (stdin)
4

Output (stdout)
121 225 361 529

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Try out your code here
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int base = 11 + (i * 4);
        cout << pow(base, 2) << " ";
    }
    return 0;
}