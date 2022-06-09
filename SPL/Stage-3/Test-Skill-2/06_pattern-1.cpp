/*
Pattern I
Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3
44
555
6666
6666
555
44
3
Case 1
Case 2
Case 3
Input (stdin)
5

Output (stdout)
5
66
777
8888
8888
777
66
5
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num;
    cin >> num;
    // 1st triangle
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (num + i);
        }
        cout << endl;
    }
    // 2nd triangle
    for (int i = 4; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (num + (i - 1));
        }
        cout << endl;
    }
    return 0;
}