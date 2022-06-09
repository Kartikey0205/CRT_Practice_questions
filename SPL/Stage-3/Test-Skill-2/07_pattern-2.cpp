/*
Pattern II
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
Case 1
Case 2
Case 3
Input (stdin)
6

Output (stdout)
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
21*20*19*18*17*16

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row;
    cin >> row;
    int k = 1;
    // 1st traiangle
    for (int i = 0; i < row; i++)
    {
        // even row
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    cout << "*" << k;
                    k++;
                }
            }
        }
        else
        { // odd rows
            for (int j = i; j >= 0; j--)
            {
                if (j == 0)
                {
                    cout << k + j + (j - i);
                    k++;
                }
                else
                {
                    cout << k + j + (j - i) << "*";
                    k++;
                }
            }
        }

        cout << endl;
    }
    return 0;
}