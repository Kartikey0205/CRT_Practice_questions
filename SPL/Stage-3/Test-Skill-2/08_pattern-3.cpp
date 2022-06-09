/*
Pattern III
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
Case 1
Case 2
Case 3
Input (stdin)
4

Output (stdout)
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row;
    cin >> row;
    // 1st traiangle
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == 0)
            {
                cout << i + 1;
            }
            else
            {
                if (j == 0)
                {
                    cout << i + 1;
                }
                else
                {
                    cout << "*" << i + 1;
                }
            }
        }
        cout << endl;
    }
    // 2nd traingle
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (i == 0)
            {
                cout << i + 1;
            }
            else
            {
                if (j == 0)
                {
                    cout << i;
                }
                else
                {
                    cout << "*" << i;
                }
            }
        }
        cout << endl;
    }
    return 0;
}