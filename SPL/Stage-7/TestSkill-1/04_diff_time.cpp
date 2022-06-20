/*
Difference Between Two Time Periods
Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24

8 15 23

SAMPLE OUTPUT:

4:0:1

Case 1
Case 2
Case 3
Input (stdin)
8 12 21
6 10 21

Output (stdout)
2:2:0
*/

#include <iostream>
using namespace std;
struct time
{
    int hrs, min, sec;
};
int main()
{
    struct time t1, t2;
    cin >> t1.hrs >> t1.min >> t1.sec;
    cin >> t2.hrs >> t2.min >> t2.sec;
    if (t1.sec < t2.sec)
    {

        t1.sec = t1.sec + 60;
        t1.min = t1.min - 1;
    }
    if (t1.min < t2.min)
    {

        t1.min = t1.min + 60;
        t1.hrs = t1.hrs - 1;
    }

    int hrDif = t1.hrs - t2.hrs;
    int miDif = t1.min - t2.min;
    int seDif = t1.sec - t2.sec;

    cout << hrDif << ":" << miDif << ":" << seDif;
    return 0;
}