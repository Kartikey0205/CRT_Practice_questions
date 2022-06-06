/*
Perfect numbers in the range
Write a program to find the perfect numbers between a given range.
Input Format:

The first input contains an integer which denotes the starting number of the range

The second input contains an integer which denotes the ending number of the range

Output Format:

Print the perfect numbers in a given range

Sample Input:

1

10

Sample Output:

6

Case 1
Case 2
Case 3
Input (stdin)
1
20

Output (stdout)
6

Input (stdin)
1
100

Output (stdout)
6 28

Input (stdin)
1
500

Output (stdout)
6 28 496


Perfect number are those which is perfectly divisble by their all previous number(exculding itself) and sum of all that divisble number is equal to current number then it is perfect  number
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int first, last, temp;
    cin >> first >> last;
    for (int i = first + 1; i <= last; i++)
    {
        temp = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                temp = temp + j;
            }
        }
        if (temp == i)
        {
            cout << i << " ";
        }
    }
    return 0;
}