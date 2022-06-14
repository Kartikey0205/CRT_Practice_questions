/*
Functions – Array type
Write a program to find the type of array using functions. An array is said to be “Even” if all the elements in the array are even. An array is said to be “Odd” if all the elements in the array are odd. An array is said to be “Mixed” if it contains some odd elements and some even elements. Refer function specifications for the function details. The first argument corresponds to the number of elements in the array. The second argument corresponds to the pointer to an array. The return value of the function should be 1 if the array is Even. The return value of the function should be 2 if the array is Odd. The return value of the function should be 3 if the array is Mixed.
Input & Output Format:

Input consists of n+1 integers where n corresponds to the number of elements in the array.

The first integer corresponds to n and the next n integers correspond to the elements in the array.

Assume that the maximum number of elements in the array is 20.

Refer to the sample input and output for formatting specifications.

Sample Input & Output:

Enter the number of elements in the array

5

Enter the elements in the array

2

4

1

3

5

The array is Mixed

Case 1
Case 2
Case 3
Input (stdin)
5
2
4
1
3
5

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
The array is Mixed
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, even = 0, odd = 0, mix = 0, i;
    cout << "Enter the number of elements in the array" << endl;
    cin >> num;
    int arr[num];
    int(*ptr)[num];
    ptr = &arr;
    cout << "Enter the elements in the array" << endl;
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even == 0 && odd > 0)
        cout << "The array is Odd";
    else if (odd == 0 && even > 0)
        cout << "The array is Even";
    else
        cout << "The array is Mixed";
    return 0;
}