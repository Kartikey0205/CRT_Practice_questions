/*
Count of digits
Sara is studying in 2nd standard and she has to play event in her school. The number is displayed on the screen and she has to count the number of digits in the displayed number. Can you help her by writing the program for the above scenario?
Input Format:

The input consist of an integer

Output Format:

Print the number of digits in the given number

Sample Input:

1234

Sample Output:

4

Case 1
Case 2
Case 3
Input (stdin)
4567

Output (stdout)
4

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, count = 0;
    cin >> num;
    do
    {
        int rem = num % 10;
        count++;
        num = num / 10;
    } while (num != 0);

    cout << count;
    return 0;
}