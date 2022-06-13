/*
Queue
A bus stop queue has n groups of people. The i-th group from the beginning has ai people. Every 30 minutes an empty bus arrives at the bus stop, it can carry at most m people. Naturally, the people from the first group enter the bus first. Then go the people from the second group and so on. Note that the order of groups in the queue never changes. Moreover, if some group cannot fit all of its members into the current bus, it waits for the next bus together with other groups standing after it in the queue. Your task is to determine the number of buses needed to transport all n groups to the dacha countryside. FUNCTIONAL REQUIREMENTS: void queue(int,int,int*); .
Input Format:

The first line contains two integers n and m (1 ≤ n, m ≤ 100). The next line contains n integers: a1, a2, ..., an (1 ≤ ai ≤ m).

Output Format:

Print a single integer — the number of buses needed to transport all n groups to the dacha countryside.

Sample Input:

4 3

2 3 2 1

Sample Output:

3

Case 1
Case 2
Case 3
Input (stdin)
3 3
1 2 3

Output (stdout)
3
*/
#include <iostream>
using namespace std;
void queue(int rowGrp, int maxPeople, int *que)
{
    int sum = 0;
    for (int i = 1; i <= rowGrp; i++)
    {
        sum = sum + que[i];
    }
    if (sum % maxPeople == 0 && (rowGrp != maxPeople))
        cout << (sum / maxPeople);
    else
        cout << (sum / maxPeople) + 1;
}
int main()
{
    // Try out your code here
    int rowGrp, maxPeople;
    cin >> rowGrp >> maxPeople;
    int que[rowGrp];
    for (int i = 1; i <= rowGrp; i++)
    {
        cin >> que[i];
    }
    queue(rowGrp, maxPeople, que);
    return 0;
}
