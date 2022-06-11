/*
Jo's aptitude classes
Jo is an aptitude trainer. She takes classes for college students for placements. She teaches students to find out highest common factor of three numbers. She has given homework for them to find out the same. Kindly help her to check whether their answers are correct or not.


Case 1
Case 2
Case 3
Input (stdin)
15
30
90
15

Output (stdout)
Answer is correct.
*/

#include <iostream>
using namespace std;
void gcd(int num1, int num2, int num3, int small, int res)
{
    while (small >= 1)
    {

        if (num1 % small == 0 && num2 % small == 0 && num3 % small == 0)
        {
            if (small == res)
            {
                cout << "Answer is correct.";
                break;
            }
        }
        small--;
    }
    if (small != res)
    {
        cout << "Answer is wrong.";
    }
}
int main()
{
    // Try out your code here
    int num1, num2, num3, res;
    cin >> num1 >> num2 >> num3 >> res;
    int small;
    if (num1 > num2 && num1 < num3)
    {
        small = num2;
    }
    else if (num2 > num1 && num2 < num3)
    {
        small = num1;
    }
    else
    {
        small = num3;
    }
    gcd(num1, num2, num3, small, res);
    return 0;
}