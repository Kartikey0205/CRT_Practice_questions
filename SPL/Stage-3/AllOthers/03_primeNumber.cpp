#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, div;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            div = i;
            break;
        }
        else
        {
            div = num;
        }
    }
    if (div == 1 || div == num)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Not eligible";
    }
    return 0;
}