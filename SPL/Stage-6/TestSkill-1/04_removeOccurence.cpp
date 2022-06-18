/*
Remove
In a certain area, there was a camp of polio drops team. They need to search for every baby in a particular area. They want to find the baby and take out the baby for polio drops. Help them to find the baby to avoid polio attacks. (remove the occurrence of the word "the" from the entered string).
Input Format:

The input is a string.

Text that is bold represents the input.

Output Format:

The output is a string.

Sample Input:

remove the occurrence of the word from entered string

Sample Output:

remove occurrence of word from entered string

Case 1
Input (stdin)
remove the occurrence of the word from entered string

Output (stdout)
remove occurrence of word from entered string
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Try out your code here
    string str;
    getline(cin, str);
    string substr = " the";
    int c = str.find("the");

    while (c != -1)
    {
        str.erase(c, substr.length());
        c = str.find(substr);
    }
    cout << str;
    return 0;
}