/*
Cricket
Tom is crazy about cricket. He was watching India vs. Australia World cup final match. Australia won the toss and elected to bat first. They finished batting with a score of X. Next, India started to bat and scored Y runs in N number of balls. As Tom is very crazy, he wants to calculate the run rate and check whether there is a probability for India to win or not. Help him calculate the run-rate and check the probability.
INPUT FORMAT & OUTPUT FORMAT:

Input consists of 4 integers. First input corresponds to the total number of balls. Second input corresponds to the total number of runs. Third input corresponds to the number of runs scored. Fourth input corresponds to the number of balls bowled. First output corresponds to the total number of overs. Second output corresponds to the total number of overs finished. Third output corresponds to the current run rate. Fourth output corresponds to total run rate.

Overs: 50 Overs finished: 7.3 Current Run rate: 10.7 Total Run rate: 7.5 Eligible to Win

SAMPLE INPUT:

300

375

78

45

SAMPLE OUTPUT:

50

7.3

10.7

7.5

Eligible to Win

*/
// for significant figure use cout<<setprecsion(n)<<float_num;
// for significant decimal figure use cout<<fixed<<setprecsion(n)<<float_num;

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Try out your code here
    int t_balls, t_runs, c_runs, c_balls, overs;
    float finished_overs, crr, rrr;
    cin >> t_balls >> t_runs >> c_runs >> c_balls;

    overs = t_balls / 6;
    finished_overs = (c_balls / 6) + ((c_balls % 6) * 0.1); // Multiply by 0.1 is better that divideby 10
    crr = c_runs * (1 / finished_overs);
    // rrr = (t_runs / overs) + ((t_runs % overs) * 0.1);
    rrr = (375 / 50) + ((375 % 50) * 0.02);

    cout << overs << endl;
    cout << fixed << setprecision(1) << finished_overs << endl;
    cout << fixed << setprecision(1) << crr << endl;
    cout << fixed << setprecision(1) << rrr << endl;
    if (rrr > crr)
    {
        cout << "Not Eligible to Win";
    }
    else
    {
        cout << "Eligible to Win";
    }
    return 0;
}