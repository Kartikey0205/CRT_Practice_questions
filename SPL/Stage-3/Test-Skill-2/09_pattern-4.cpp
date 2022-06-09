/*
Patternu IV
Write a program to print the given below pattern.
Sample Input:

5

Sample Output:

11112
32222
33334
54444
55556
Case 1
Case 2
Case 3
Input (stdin)
3

Output (stdout)
112
322
334
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i % 2 == 0)
            {
                if (j == row - 1)
                {
                    cout << i + 2;
                }
                else
                {
                    cout << i + 1;
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << i + 2;
                }
                else
                {
                    cout << i + 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}