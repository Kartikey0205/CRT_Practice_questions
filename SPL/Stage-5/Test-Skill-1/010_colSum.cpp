/*
Maximum element in each column
In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and females are arranged in a column. Find the eldest women in each column. (Write a program to find the maximum element in each column of the matrix.)
Input Format:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then second row and so on.

Assume that the maximum value of m and n is 10.

Output Format:

Refer to the sample output for details.

Sample Input:

3

2

4 5

6 9

0 3

Sample Output:

6

9

Case 1
Case 2
Case 3
Input (stdin)
3
3
1 2 3
4 5 6
7 8 9

Output (stdout)
7
8
9
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row, col, sumCo = 0;
    cin >> row >> col;
    int sumCol[col] = {0};
    int party[row][col] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> party[i][j];
        }
    }

    // Max Col
    for (int i = 0; i < col; i++)
    {
        sumCo = 0;
        for (int j = 0; j < row; j++)
        {
            if (sumCo < party[j][i])
                sumCo = party[j][i];
            else
                sumCo = sumCo;
        }
        cout << sumCo << endl;
    }

    return 0;
}
