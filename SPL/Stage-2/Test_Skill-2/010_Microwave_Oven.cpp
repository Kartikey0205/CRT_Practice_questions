/*
Microwave oven
A microwave oven manufacturer recommends to increase the heating time by 50% when two items are heated and to double the heating time when three items are heated. Heating more than three items at once is not recommended. Now, write a program to find out the recommended heating time.
INPUT FORMAT:

The first input is an integer which denotes the number of items

The second input is a floating point number which denotes the single item heating time.

OUTPUT FORMAT:

Print the recommended heating time in floating point with 2 decimal places.

If the number of items is more than three, print "Number of items is more".

Refer the sample output for formatting.

SAMPLE INPUT:

2

5.0

SAMPLE OUTPUT:

7.50

Input (stdin)
2
7.0

Output (stdout)
10.50
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Try out your code here
    int items;
    float heat_time, final_heat;
    cin >> items >> heat_time;
    if (items == 2)
    {
        final_heat = heat_time + ((heat_time * 50) / 100);
        cout << fixed << setprecision(2) << final_heat;
    }
    else if (items == 3)
    {
        final_heat = heat_time * 2;
        cout << fixed << setprecision(2) << final_heat;
    }
    else
    {
        cout << "Number of items is more";
    }
    return 0;
}