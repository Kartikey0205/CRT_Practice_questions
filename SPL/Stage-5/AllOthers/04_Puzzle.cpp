/*
Puzzle
Raju has a square-shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the elements of a row into a column element and column element into a row element. Help Raju to solve this puzzle.
Input Format:

The first input contains an integer 'r' which denotes the number of rows in puzzle

The second input contains an integer 'c' which denotes the number of columns in puzzle

The remaining input denotes the numbers on square shaped puzzle

Output Format:

Print the solved puzzle

Sample Input:

2

2

2 3

4 5

Sample Output:

2 4

3 5

Case 1
Case 2
Case 3
Input (stdin)
2
3
1 2 3
4 5 6

Output (stdout)
1 4
2 5
3 6

*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int row, col;
    cin >> row >> col;
    int arr[row][col], newArr[col][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // new Array
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            newArr[i][j] = arr[j][i];
        }
    }
    // print
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}