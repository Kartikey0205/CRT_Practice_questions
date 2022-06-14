/*
Array insertion
Arun and Ram were playing cards. Arun has 5 cards. Ram wants to insert a new card in between Arun's cards. Ram wants to find the position to insert the card. So help him to find the position to insert a certain card. If Ram inserts a card in a position other than the position of 5 cards, the game will be over. So play carefully. EXAMPLE: For example, consider an array having three elements in it initially and a[0] = 1, a[1] = 2 and a[2] = 3 and you want to insert a number 45 at location 1 i.e. a[0] = 45, so we have to move elements one step below after insertion a[1] = 1 , and a[2] = 2 and a[3] = 3.
Input & Output Format:

Assume that the maximum number of elements in the array is 20.

Sample Input:

Enter the number of elements in the array

5

Enter the elements in the array

1

2

3

4

5

Enter the location where you wish to insert an element

4

Enter the value to insert

10

Sample Output:

Array after insertion is

1

2

3

10

4

5

Case 1
Case 2
Case 3
Input (stdin)
5
1
2
3
4
5
4
10

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
Enter the location where you wish to insert an element
Enter the value to insert
Array after insertion is
1
2
3
10
4
5

Input (stdin)
4
1
2
3
4
8

Output (stdout)
Enter the number of elements in the array
Enter the elements in the array
Enter the location where you wish to insert an element
Invalid Input
*/

#include <iostream>
using namespace std;
int main()
{
    int num, loc, value;
    cout << "Enter the number of elements in the array" << endl;
    cin >> num;
    int card[num];
    cout << "Enter the elements in the array" << endl;
    for (int i = 1; i <= num; i++)
    {
        cin >> card[i];
    }
    cout << "Enter the location where you wish to insert an element" << endl;
    cin >> loc;
    if (loc < num)
    {

        cout << "Enter the value to insert" << endl;
        cin >> value;
        cout << "Array after insertion is" << endl;
        for (int i = 1; i <= num + 1; i++)
        {
            if (i == loc)
            {
                int diff = (num + 1) - i;
                while (diff != 0)
                {
                    card[loc + diff] = card[(loc + diff) - 1];
                    diff--;
                }
                card[loc] = value;
            }
            cout << card[i] << endl;
        }
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}