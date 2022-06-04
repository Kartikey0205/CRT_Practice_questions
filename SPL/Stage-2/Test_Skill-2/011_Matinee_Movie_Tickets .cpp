/*
Matinee movie tickets
According to a 24-hour clock, the show timings are 10.15, 13.30, 18.00 and 22.00. The normal price of an adult ticket is $8.00. However, the price of an adult ticket for the matinee show is $5.00. Adults are those over 13 years. The normal price of a child ticket is $4.00. However, the price of a child ticket for the matinee show is $2.00. Write a program that determines the price of a movie ticket.
INPUT FORMAT:

The first input is an integer which denotes the age.

The second input is a floating point number which denotes the show timing.

OUTPUT FORMAT:

Print the price of a movie ticket.

Refer the sample output for formatting.

SAMPLE INPUT:

16

10.15

SAMPLE OUTPUT:

$8.00


Input (stdin)
19
13.30

Output (stdout)
$5.00


Input (stdin)
10
13.30

Output (stdout)
$2.00

Input (stdin)
10
10.15

Output (stdout)
$4.00
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code
    int age;
    float time;
    cin >> age >> time;
    if (age > 13 && time == (float)13.30)
    {
        cout << "$5.00";
    }
    else if (age < 13 && time == (float)13.30)
    {
        cout << "$2.00";
    }
    else if (age > 13 && time != (float)13.30)
    {
        cout << "$8.00";
    }
    else
    {
        cout << "$4.00";
    }
    return 0;
}