/*
Meera has passed her exam or not
Meera wrote SBI PO exam and was waiting for her result. After a week, SBI released the results on its website. On the website, she needs to click the results after that she will get a pdf. In that pdf, test passed candidate register numbers are displayed. Then, Meera has to check whether her register number is there or not. If her register number is found, then she has passed her exam. Otherwise, she failed.
Input Format:

The first input contains an integer 'n' which denotes the number of candidates who have passed the exam

The remaining input denotes register number of 'n' candidates separated by spaces

The last input contains an integer which denotes the register number of Meera

Output Format:

If the register number is found, print "She passed her exam".Otherwise, print "She failed".

Sample Input:

5

34 46 52 32 265

32

Sample Output:

She passed her exam

Case 1
Case 2
Case 3
Input (stdin)
6
34 56 78 98 23
45

Output (stdout)
She failed
*/

#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int student;
    bool found = false;
    cin >> student;
    int registerNum[student];
    int mark;
    for (int i = 0; i < student; i++)
    {
        cin >> registerNum[i];
    }
    cin >> mark;

    for (int i = 0; i < student; i++)
    {
        if (registerNum[i] == mark)
        {
            found = true;
        }
    }
    if (found == true)
    {
        cout << "She passed her exam";
    }
    else
    {
        cout << "She failed";
    }
    return 0;
}