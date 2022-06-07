/*
Collatz problem
The rules for generating Collatz sequence are: If n is even: n = n / 2 If n is odd: n = 3n + 1 For example, if the starting number is 5 the sequence is: 5 -> 16 -> 8 -> 4 -> 2 -> 1 It has been proved for almost all integers, that the repeated application of the above rule will result in a sequence that ends in 1. Now, write a C++ program to generate the Collatz sequence.
INPUT & OUTPUT FORMAT:

The input is an integer 'n' which denotes the first term of the sequence.

As output, print the numbers in the sequence and also print the number of times the rule has to be applied in order to reach 1.

SAMPLE INPUT:

5

SAMPLE OUTPUT:

5

16

8

4

2

1

5

Case 1
Case 2
Case 3
Input (stdin)
18

Output (stdout)
18
9
28
14
7
22
11
34
17
52
26
13
40
20
10
5
16
8
4
2
1
20

Input (stdin)
1

Output (stdout)
1
0

Input (stdin)
3

Output (stdout)
3
10
5
16
8
4
2
1
7
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, count = 0;
    cin >> num;
    cout << num << endl;
    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            cout << num << endl;
        }
        else
        {
            num = (3 * num) + 1;
            cout << num << endl;
        }
        count++;
    }
    cout << count;
    return 0;
}
