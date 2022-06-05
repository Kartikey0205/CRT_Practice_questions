/*
Factorial of a number
Remya is studying in 10th std and she was not good at maths. Her maths teacher asked to find a factorial of the given number. Can you help Remya by writing a program for the same.
Input Format:

The input consist of an integer

Output Format:

Print the factorial of a number which denotes an integer

Sample Input:

5

Sample Output:

120



Case 1
Case 2
Case 3
Input (stdin)
6

Output (stdout)
720

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, fact = 1;
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}