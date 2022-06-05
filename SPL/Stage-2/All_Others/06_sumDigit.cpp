
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, sum = 0, rem;
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    cout << sum;
    return 0;
}