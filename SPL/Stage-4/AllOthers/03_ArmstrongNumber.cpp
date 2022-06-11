/*
Encrypt using Armstrong number
Nowadays, we use social media a lot. We usually send messages, pictures, etc to each other. So, encrypting and decrypting should be done properly to avoid hacking. Irin is developing a program for the same where color encrypting is done with the help of Armstrong numbers. Can you help Irin to write program to check whether a number is an Armstrong number or not.


Case 1
Case 2
Case 3
Input (stdin)
154

Output (stdout)
It is not an Armstrong number
*/

#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n)
{
    int digit = 0;
    while (n != 0)
    {
        n = n / 10;
        digit++;
    }
    return digit;
}
void arm(int num)
{
    int count = countDigit(num);
    int orginalNum = num;
    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        int rem = num % 10;
        num = num / 10;

        sum = sum + pow(rem, count);
    }
    if (sum == orginalNum)
    {
        cout << "Kindly proceed with encrypting";
    }
    else
    {
        cout << "It is not an Armstrong number";
    }
}
int main()
{
    // Try out your code here
    int num;
    cin >> num;
    arm(num);
    return 0;
}