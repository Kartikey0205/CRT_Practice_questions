/*
Counting
These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces. The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming. So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.
Input &output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both uppercase and lowercase. Refer sample input and output for formatting specifications.

Sample Input:

This program is very easy 2 complete

Sample Output:

Vowels : 10

Consonants : 19

White spaces : 6

Digits : 1

Symbols : 0

Case 1
Case 2
Case 3
Input (stdin)
At 16 years of age, Sachin was supposed to face the likes of Wasim Akram and Waqar Younis.

Output (stdout)
Vowels:29
Consonants:40
White Spaces:17
Digits:2
Symbols:2
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Try out your code here
    string str;
    getline(cin, str);
    int vow = 0, cons = 0, ws = 0, digit = 0, sym = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vow++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            cons++;
        }
        else if (str[i] == ' ')
        {
            ws++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            sym++;
        }
    }
    cout << "Vowels:" << vow << endl;
    cout << "Consonants:" << cons << endl;
    cout << "White Spaces:" << ws << endl;
    cout << "Digits:" << digit << endl;
    cout << "Symbols:" << sym << endl;
    return 0;
}