/*
Add two distances in inch-feet system
Write a program to add two distances in inch feet system using Structure
INPUT FORMAT:

Input 1: Inch1 and feet1

Input 2 : Inch2 and feet2

OUTPUT FORMAT:

Sum of Distance

SAMPLE INPUT:

23

4.7

22

7.5

SAMPLE OUTPUT:

44'-6.7"

Case 1
Case 2
Case 3
Input (stdin)
22
4.7
23
7.9

Output (stdout)
46'-0.6"
*/

#include <iostream>
using namespace std;
struct dist
{
    int inch;
    float ft;
};
int main()
{
    struct dist d1, d2;
    cin >> d1.inch >> d1.ft;
    cin >> d2.inch >> d2.ft;
    int sumIn;
    float sumFt;
    if (d1.ft + d2.ft > 12)
    {

        sumFt = (float)((d1.ft + d2.ft) - 12);
        sumIn = d1.inch + d2.inch + 1;
    }
    if (d1.ft + d2.ft < 12)
    {

        sumFt = (float)((d1.ft + d2.ft));
        sumIn = d1.inch + d2.inch;
    }

    cout << sumIn << "'-"
         << sumFt << "\"";
    return 0;
}