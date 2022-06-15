/*
Sum of rows
Seenu have a fruit shop and arranged the some set of fruits in column and row wise. Seenu needs to find the total number of fruits in each rows. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 2 3

7 3 1

7 4 1

6

11

12

Case 1
Case 2
Case 3
Input (stdin)
3
3
1 11 12
2 14 15
3 16 17

Output (stdout)
24
31
36
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row, col, sumRo = 0;
    cin >> row >> col;
    int sumRow[row] = {0};
    int arr[row][col] = {0};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Sum Row

    for (int i = 0; i < row; i++)
    {
        int sumRo = 0;
        for (int j = 0; j < col; j++)
        {
            sumRo = sumRo + arr[i][j];
        }
        sumRow[i] = sumRo;
        cout << sumRow[i] << endl;
    }
    return 0;
}