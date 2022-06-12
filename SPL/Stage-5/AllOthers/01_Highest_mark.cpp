/*
Highest mark in the class
The teacher who handles science for 3rd-standard class distributes the mark sheets to her students, she needs to find the highest mark among the "n" students. Help the teacher to find the maximum mark.
﻿Input Format:

The first input contains an integer 'n' which denotes the number of students

The remaining input denotes mark of 'n' students separated by spaces

Output Format:

Print the highest mark

Sample Input:

5

45 67 89 34 22

Sample Output:

89

Case 1
Case 2
Case 3
Input (stdin)
7
34 23 14 56 78 32 94

Output (stdout)
94
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];

    for (int i = 1; i < num; i++)
    {
        if (max > arr[i])
        {
            max = max;
        }
        else
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}