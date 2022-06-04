/*
Time sheet
Jeevitha just started to work as a programming trainer for UIT's Placement Cell. She is paid Rs.100 an hour, with a few exceptions. She earns an extra Rs.15 an hour for any part of a day where she works for more than 8 hours, and an extra Rs.25 an hour for hours beyond 40 in any one week. Also, she earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. And there is no bonus for working more than 40 hours in a week. You'll be given the number of hours Jeevitha worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute her salary for the week.
INPUT & OUTPUT FORMAT:

Input consists of 7 integers less than or equal to 24 on separate lines

Print Jeevith's salary for a week.

SAMPLE INPUT:

0

8

8

8

10

6

0

SAMPLE OUTPUT:

4030

Case 1
Case 2
Case 3
Input (stdin)
4
5
0
8
0
6
0

Output (stdout)
2500

Input (stdin)
4
0
0
0
0
6
0

Output (stdout)
1200
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int sun, mon, tue, wed, thr, fri, sat, salary;
    cin >> sun >> mon >> tue >> wed >> thr >> fri >> sat;
    int total = mon + tue + wed + thr + fri;
    int extra_40 = 0, sun_sal = 0, mon_sal = 0, tue_sal = 0, wed_sal = 0, thr_sal = 0, fri_sal = 0, sat_sal = 0;
    // 40 hr exatrs case
    if (total > 40)
    {
        extra_40 = (total - 40) * 25;
    }
    // sunday case
    if (sun > 0)
    {

        sun_sal = (sun * 100) + ((sun * 100) * 0.5);
    }
    // mon case
    if (mon > 0)
    {
        if (mon > 8)
        {
            mon_sal = (mon * 100) + ((mon - 8) * 15);
        }
        else
        {
            mon_sal = (mon * 100);
        }
    }

    // tue case
    if (tue > 0)
    {
        if (tue > 8)
        {
            tue_sal = (tue * 100) + ((tue - 8) * 15);
        }
        else
        {
            tue_sal = (tue * 100);
        }
    }

    // wed case
    if (wed > 0)
    {
        if (wed > 8)
        {
            wed_sal = (wed * 100) + ((wed - 8) * 15);
        }
        else
        {
            wed_sal = (wed * 100);
        }
    }

    // thr case
    if (thr > 0)
    {
        if (thr > 8)
        {
            thr_sal = (thr * 100) + ((thr - 8) * 15);
        }
        else
        {
            thr_sal = (thr * 100);
        }
    }

    // fri case
    if (fri > 0)
    {
        if (fri > 8)
        {
            fri_sal = (fri * 100) + ((fri - 8) * 15);
        }
        else
        {
            fri_sal = (fri * 100);
        }
    }

    // sat case
    if (sat > 0)
    {
        sat_sal = (sat * 100) + (int)((sat * 100) * 0.25);
    }

    salary = extra_40 + sun_sal + mon_sal + tue_sal + wed_sal + thr_sal + fri_sal + sat_sal;
    cout << salary;
    return 0;
}