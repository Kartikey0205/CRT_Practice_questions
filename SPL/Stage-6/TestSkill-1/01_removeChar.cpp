/*
Remove character except alphabets
In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word. So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase, lowercase, and symbols.

Sample Input:

pro$#&gra7m

Sample Output:

program

Case 1
Case 2
Case 3
Input (stdin)
Fresh214&grad

Output (stdout)
Freshgrad
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Try out your code here
    string str;
    getline(cin, str);
    string newStr;

    for (int m = 0; m < str.size(); m++)
    {
        if (str.at(m) >= 'a' && str.at(m) <= 'z' || str[m] >= 'A' && str[m] <= 'Z')
        {
            newStr = newStr + str[m];
        }
    }
    cout << newStr;
    return 0;
}