/*
Series V
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
INPUT & OUTPUT FORMAT:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Print the series and refer the sample output for formatting.

SAMPLE INPUT:

4

SAMPLE OUTPUT:

121 225 361 529

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
        int base = 11 + (i * 4);
        cout << pow(base, 2) << " ";
    }
    return 0;
}