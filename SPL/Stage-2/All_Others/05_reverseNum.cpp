/*
Reverse Number
Need to design a program wherein when the human enters an integer, the computer should return an integer in the reversed manner. Write a program to calculate the reverse of the given number.
Note: Take care of the leading zeros (e.g. 5200 gives 25). It means reversed number never has any trailing zeros.

Sample Input:

4235

Sample Output:

5324

Case 1
Case 2
Case 3
Input (stdin)
678

Output (stdout)
876

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, rem;
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        // rev = rev * 10 + rem;
        if (rem > 0)
        {
            cout << rem;
        }
    }
    return 0;
}