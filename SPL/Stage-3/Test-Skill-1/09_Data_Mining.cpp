/*
Data mining
In the University examinations conducted during the past 5 years, the toppers registration numbers were 7126, 82417914, 7687 and 6657. Your father is an expert in data mining and he could easily infer a pattern in the toppers registration numbers. In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number. He termed the numbers that satisfy this property as Probable Topper Numbers. Now, write a program to find whether a given number is a probable topper number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

The output consists of a single line. Refer the sample output for details.

SAMPLE INPUT & OUTPUT:

143

Yes

Case 1
Case 2
Case 3
Input (stdin)
127

Output (stdout)
No

Input (stdin)
678

Output (stdout)
No
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num, sumEven = 0, sumOdd = 0;
    cin >> num;
    while (num != 0)
    {
        int rightMostDigit = num % 10;
        if (rightMostDigit % 2 == 0)
        {
            sumEven = sumEven + rightMostDigit;
        }
        else
        {
            sumOdd = sumOdd + rightMostDigit;
        }
        num = num / 10;
    }

    if (sumEven != sumOdd)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}