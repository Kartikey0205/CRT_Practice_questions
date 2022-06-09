
/*
Pattern V
Write a program to print the trapezium pattern.
Sample Input:

4

Sample Output:

1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11
Case 1
Case 2
Case 3
Input (stdin)
5

Output (stdout)
1*2*3*4*5*26*27*28*29*30
--6*7*8*9*22*23*24*25
----10*11*12*19*20*21
------13*14*17*18
--------15*16
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row, count = 1;
    cin >> row;
    for (int i = row; i >= 1; i--)
    {
        // space
        for (int j = 1; j <= (row - i); j++)
        {
            cout << "--";
        }
        // 1st traingle
        for (int j = 1; j <= i; j++)
        {
            cout << count << "*";
            count++;
        }

        /*
        4-> 17 i = 4 (17-4)=13 -> 4 + 13 = 4 + (4* 3)+ 1
        */
        int temp = (count - 1) + ((i * (i - 1)) + 1);
        // 2nd traingle
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << temp;
            }
            else
            {
                cout << temp << "*";
                temp++;
            }
        }

        cout << endl;
    }
    return 0;
}