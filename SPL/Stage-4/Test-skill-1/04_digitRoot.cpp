/*
Digit root of a given number
Write a program to find the repeated sum of digits of a number until it becomes a single-digit number.
Input Format:

The input contains an integer which denotes 'n'

Output Format:

Print the single digit number

Sample Input

88

Sample Output

7

Explanation:

Step 1: 8+8 = 16

Step 2: 1+6 = 7

sum of digits of a number until it becomes a single-digit number which is 7 here.

Case 1
Case 2
Case 3
Input (stdin)
772

Output (stdout)
7
*/

#include <iostream>
using namespace std;
int digitRoot(int num, int sum)
{
    if (num < 10)
    {
        return (sum + num);
    }
    else
    {
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
        return digitRoot(num, sum);
    }
}
int main()
{
    // Try out your code here
    int num;
    cin >> num;
    int sum = 0;
    int root = digitRoot(num, sum);
    if (root >= 10)
        cout << digitRoot(root, sum);
    else
        cout << root;
    return 0;
}