/*
Dr.Strange needs some help.
Dr. Strange has an experimental laboratory in a mysterious enclave. He is conducting an experiment to strange genes which will make him the most powerful sorcerer in the existence . He needs to create particular amount of bacteria. The bacteria multiplies exponentially. If he lets m bacteria to multiply n exponential times, he should check whether he will get the required amount of bacteria.
Input consists of three inputs. The no. of bacteria, m. The number in which it gets multiplied, n. The required number, req .

Case 1
Case 2
Case 3
Input (stdin)
2
3
9

Output (stdout)
Sorry Doctor! You need more bacteria.

Input (stdin)
2
3
7

Output (stdout)
Doctor, you can proceed with your experiment.

*/

#include <iostream>
#include <cmath>
using namespace std;
int isBacteria(int, int);
int main()
{
    // Try out your code here
    int m, n, r;
    cin >> m >> n >> r;
    if (isBacteria(m, n) >= r)
    {
        cout << "Doctor, you can proceed with your experiment.";
    }
    else
    {
        cout << "Sorry Doctor! You need more bacteria.";
    }
    return 0;
}

int isBacteria(int m, int r)
{
    return pow(m, r);
}