/*
Sum of even numbers and sum of odd numbers
Arun and Kalai were playing a puzzle game with a given set of numbers. They need to find the odd and even numbers and find the sum of the odd numbers and the sum of the even numbers. Write a program to help them to solve the puzzle game and to win the mobile phone.
Input Format:

Input consists of n+1 integers.

The first integer corresponds to ‘n’, the size of the array.

The next ‘n’ integers correspond to the elements in the array.

Assume that the maximum value of n is 15.

Output Format:

Refer to sample output for details.

Sample Input:

5

2

3

6

8

-1

Sample Output:

The sum of the even numbers in the array is 16

The sum of the odd numbers in the array is 2

Case 1
Case 2
Case 3
Input (stdin)
3
1
2
3

Output (stdout)
The sum of the even numbers in the array is 2
The sum of the odd numbers in the array is 4
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int number, sumEven = 0, sumOdd = 0;
    cin >> number;
    int game[number];
    for (int i = 0; i < number; i++)
    {
        cin >> game[i];
    }
    for (int i = 0; i < number; i++)
    {
        if (game[i] % 2 == 0)
            sumEven = sumEven + game[i];
        else
            sumOdd = sumOdd + game[i];
    }
    cout << "The sum of the even numbers in the array is " << sumEven << endl;
    cout << "The sum of the odd numbers in the array is " << sumOdd << endl;
    return 0;
}