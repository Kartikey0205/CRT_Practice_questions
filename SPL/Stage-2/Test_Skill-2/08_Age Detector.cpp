/*
Age Detector
Ask a user for his/her birth year encoded as two digits (like "62") and for the current year, also encoded as two digits (like "99"). Write a program to find the users current age in years.
INPUT FORMAT:

Input consists of 2 integers.

The first integer corresponds to the last 2 digits of the birth year.

The second integer corresponds to the last 2 digits of the current year.

OUTPUT FORMAT:

Print the user's current age.

Refer below sample output for formatting.

SAMPLE INPUT:

62

00

SAMPLE OUTPUT:

38


SAMPLE INPUT:
01
07
SAMPLE OUTPUT:
6

SAMPLE INPUT:
80
32
SAMPLE OUTPUT:
52
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int b_year, c_year;
    cin >> b_year >> c_year;
    if (c_year == 0)
    {
        cout << (100 - b_year);
    }
    else if (c_year > b_year)
    {
        cout << (c_year - b_year);
    }
    else
    {
        cout << ((c_year + 100) - b_year);
    }
    return 0;
}