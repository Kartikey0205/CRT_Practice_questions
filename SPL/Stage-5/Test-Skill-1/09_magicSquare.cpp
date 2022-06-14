/*
QUESTION 1 OF 1
Magic square
A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.
Input Format:

The input consists of (n*n+1) integers.

The first integer corresponds to the number of rows/columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then second row and so on.

Assume that the maximum value of m and n is 5.

Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

Sample Input:

2

4 5

5 4

Sample Output:

No

Case 1
Case 2
Case 3
Input (stdin)
4
1 2 3 4
5 6 7 8
9 10 11 12

Output (stdout)
No

Magic Square -
 sum of row == sum of col == sum of diagonal
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row, sumRo = 0, sumCo = 0, sumDia1 = 0, sumDia2 = 0;
    cin >> row;
    int sumRow[row] = {0}, sumCol[row] = {0}, sumDiag1[row] = {0}, sumDiag2[row] = {0};
    int magic[row][row] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> magic[i][j];
        }
    }

    // Sum Row
    for (int i = 0; i < row; i++)
    {
        int sumRo = 0;
        for (int j = 0; j < row; j++)
        {
            sumRo = sumRo + magic[i][j];
        }
        sumRow[i] = sumRo;
    }

    // Sum Col
    for (int i = 0; i < row; i++)
    {
        int sumCo = 0;
        for (int j = 0; j < row; j++)
        {
            sumCo = sumCo + magic[j][i];
        }
        sumCol[i] = sumCo;
    }
    // Sum Diagnol
    for (int i = 0; i < row; i++)
    {
        int sumDia1 = 0;
        int sumDia2 = 0;

        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                sumDia1 = sumDia1 + magic[i][j];
            }
            else if (i + j == (row - 1))
            {
                sumDia2 = sumDia2 + magic[i][j];
            }
        }
        sumDiag1[i] = sumDia1;
        sumDiag2[i] = sumDia2;
    }

    sumRo = 0;
    sumDia1 = 0;
    sumDia2 = 0;
    sumCo = 0;
    for (int i = 0; i < row; i++)
    {
        sumDia1 = sumDia1 + sumDiag1[i];
        sumDia2 = sumDia2 + sumDiag2[i];

        sumRo = sumRo + sumRow[i];
        sumCo = sumCo + sumCol[i];
    }

    if (sumRo == sumDia1 && sumCo == sumRo && sumRo == sumDia2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}