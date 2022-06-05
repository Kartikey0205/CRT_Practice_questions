
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, rem, new_digit = 0, temp;
    cin >> num;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        new_digit = new_digit * 10 + rem;
        num = num / 10;
    }
    if (new_digit == temp)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    return 0;
}