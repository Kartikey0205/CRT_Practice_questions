/*
Reverse your friend's name
Your friend wants to see the pronunciation of his/ her name when it gets reversed. Help him/ her to find the reversed string using program.


Case 1
Case 2
Case 3
Input (stdin)
Naveen Kumar

Output (stdout)
ramuK neevaN
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    for (auto i = str.crbegin(); i < str.crend(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}