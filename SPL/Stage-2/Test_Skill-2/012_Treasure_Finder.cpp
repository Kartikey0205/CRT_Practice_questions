/*
Treasure Finder
Lucy and Tina are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition. There Lucy and Tina play a game. In this game, there are three boxes with some number written on their top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers. So, now help Lucy and Tina to decode the code.
INPUT FORMAT:

Input consists of three integers. First input corresponds to the number of the first box. Second input corresponds to the number of the second box. Third input corresponds to the number of the third box.

SAMPLE INPUT:

2

4

6

SAMPLE OUTPUT:

The treasure is in the box which has number 4.

The code to open the box is 2.

Input (stdin)
7
5
6

Output (stdout)
The treasure is in box which has number 6
The code to open the box is 1


Input (stdin)
3
84
15

Output (stdout)
The treasure is in box which has number 15
The code to open the box is 3

*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int n1, n2, n3, max1 = 1, max2 = 1, max3 = 1, max;
    cin >> n1 >> n2 >> n3;
    if (n2 % n1 == 0 && n3 % n1 == 0)
    {
        max1 = n1;
    }
    if (n1 % n2 == 0 && n3 % n2 == 0)
    {
        max2 = n2;
    }
    if (n1 % n3 == 0 && n2 % n3 == 0)
    {
        max3 = n3;
    }

    if (max1 > max2 && max1 > max3)
    {
        max = max1;
    }
    else if (max2 > max1 && max2 > max3)
    {
        max = max2;
    }
    else if (max3 > max1 && max3 > max2)
    {
        max = max3;
    }
    else
    {
        max = 1;
    }
    if (n1 > n2 && n1 < n3 || n1 < n2 && n1 > n2)
    {
        cout << "The treasure is in box which has number " << n1 << endl;
        cout << "The code to open the box is " << max;
    }
    else if (n2 > n1 && n2 < n3 || n2 < n1 && n2 > n3)
    {
        cout << "The treasure is in box which has number " << n2 << endl;
        cout << "The code to open the box is " << max;
    }
    else
    {
        cout << "The treasure is in box which has number " << n3 << endl;
        cout << "The code to open the box is " << max;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Try out your code here
//     int n1, n2, n3, largest, max;
//     cin >> n1 >> n2 >> n3;
//     if (n1 > n2 && n1 > n3)
//     {
//         largest = n1;
//     }
//     else if (n2 > n1 && n2 > n3)
//     {
//         largest = n2;
//     }
//     else
//     {
//         largest = n3;
//     }

//     for (int i = largest; i >= 0; i--)
//     {
//         if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0)
//         {
//             max = i;
//             break;
//         }
//     }
//     if (n1 > n2 && n1 < n3 || n1 < n2 && n1 > n2)
//     {
//         cout << "The treasure is in box which has number " << n1 << endl;
//         cout << "The code to open the box is " << max;
//     }
//     else if (n2 > n1 && n2 < n3 || n2 < n1 && n2 > n3)
//     {
//         cout << "The treasure is in box which has number " << n2 << endl;
//         cout << "The code to open the box is " << max;
//     }
//     else
//     {
//         cout << "The treasure is in box which has number " << n3 << endl;
//         cout << "The code to open the box is " << max;
//     }
//     return 0;
// }
