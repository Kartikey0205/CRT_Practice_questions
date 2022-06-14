/*
Maximum element in the matrix
Raju is the maths teacher in high secondary school and provided mark sheet to students.In this class room, students are arranged in the form of rows and columns. Raju needs to find the highest mark in this class. Help him to find out.
INPUT FORMAT:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then the second row and so on.

Assume that the maximum value of m and n is 10.

OUTPUT FORMAT:

Refer to the sample output for details.

SAMPLE INPUT & OUTPUT:

3

2

4 5

6 9

0 3

The maximum element is 9

Case 1
Case 2
Case 3
Input (stdin)
3
3
2 4 6
14 16 18
8 10 12

Output (stdout)
The maximum element is 18
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row, col, sumCo = 0, max = 0;
    cin >> row >> col;
    int sumCol[row] = {0};
    int matrix[row][col] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Max in each Col
    for (int i = 0; i < col; i++)
    {
        sumCo = 0;
        for (int j = 0; j < row; j++)
        {
            if (sumCo < matrix[j][i])
            {

                sumCo = matrix[j][i];
            }

            else
                sumCo = sumCo;
        }
        sumCol[i] = sumCo;
    }

    // compare
    for (int i = 0; i < col; i++)
    {
        if (max < sumCol[i])
        {

            max = sumCol[i];
        }

        else
        {

            max = max;
        }
    }
    cout << "The maximum element is " << max;

    return 0;
}