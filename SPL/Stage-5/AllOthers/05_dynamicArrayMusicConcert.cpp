/*
Music Concert
Sid Sriram's concert is going to happen by this week. Event coordinators have sold all tickets, odd number tickets are given to males and even number tickets are given to females. Finally, they need a count of males and females to allocate seats separately in the auditorium.
Note: Use dynamic memory allocation

Input Format:

The first input contains an integer which denotes the total number of tickets

The remaining 'n' input denotes the ticket numbers

Output Format:

Print the count of male

Print the count of female

Sample Input:

5

67 89 34 56 33

Sample Output:

3

2

Case 1
Case 2
Case 3
Input (stdin)
10
6 45 37 89 46 32 44 98 54 21

Output (stdout)
4
6
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int ticket, count = 0;
    cin >> ticket;
    int *num = (int *)malloc(ticket * sizeof(int));
    for (int i = 0; i < ticket; i++)
    {
        cin >> *(num + i);
    }
    // checking male female
    for (int i = 0; i < ticket; i++)
    {
        if (*(num + i) % 2 == 0)
        {
            count++;
        }
    }
    cout << ticket - count << endl;
    cout << count;
    return 0;
}