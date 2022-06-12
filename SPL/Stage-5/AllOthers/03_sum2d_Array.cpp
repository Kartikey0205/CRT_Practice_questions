/*
Ashok's homework
Ashok is a ninth-grade schoolboy. Miss Sumaiya is a very strict teacher and she teaches math to all the students. On the first day of the academic year, Miss Sumaiya gave him homework to find the addition of two matrices. Can you help Ashok by writing a program for the same.
Input Format:

The first input contains an integer 'r' which denotes the number of rows

The second input contains an integer 'c' which denotes the number of columns

The remaining input denotes the inputs of matrix1 and matrix2

Output Format:

Print the addition of two matrices

Sample Input:

2

2

2 3

4 5

4 5

6 7

Sample Output:

6 8

10 12

Case 1
Case 2
Case 3
Input (stdin)
2
2
3 4
5 6
6 7
8 9

Output (stdout)
9 11
13 15
*/

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr1[row][col], arr2[row][col], sum[row][col];
    // 1st array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // 2nd array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }
    // sum array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // printing array sum
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}