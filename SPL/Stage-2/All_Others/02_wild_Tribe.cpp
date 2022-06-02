/*
Wild Tribe Ranch
Florence is in Wild tribe ranch. Wild tribe ranch is Adventure Park for adults. Florence is in front of a live cave. The mouth of cave is like a pothole. The guideline of the park mentions the maximum weight of a person who can go through the mouth of the cave. If the candidate’s weight is just same as maximum weight, then the candidate might require to have a rope with them. Florence has to determine whether she will be able to get through the pothole or not. Can you help her?
The input should be the maximum weight and weight of Florence.

Input (stdin)
85
54

Output (stdout)
Yes, you can enter.
*/

#include <iostream>
using namespace std;
int main()
{
    int max_wt, wt;
    cin >> max_wt >> wt;
    if (wt < max_wt)
    {
        cout << "Yes, you can enter.";
    }
    else if (wt == max_wt)
    {
        cout << "Yes, you can enter. Kindly use a rope.";
    }
    else
    {
        cout << "Sorry, you can't enter";
    }
    return (0);
}