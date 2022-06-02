/*
Vicky's birthday
Vicky's birthday is on February 29th. He can only celebrate his birthdays in leap year. Can you help Vicky to determine whether he can celebrate his birthday in the year mentioned by him.
Input should be an integer. (Usage : nested if)

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int year;
    cin >> year;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << "Vicky can celebrate his birthday.";
        }
        else
        {
            cout << "Vicky can't celebrate.";
        }
    }
    else if (year % 4 == 0)
    {
        cout << "Vicky can celebrate his birthday.";
    }
    else
    {
        cout << "Vicky can't celebrate.";
    }
    return 0;
}