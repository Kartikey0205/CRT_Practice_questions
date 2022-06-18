/*
Special school
A special school is run by an NGO for kids with Dyslexia. We all know these children will start writing the letters backward or in reverse. Once special care is taken to correct this issue and once they are introduced to words, they will start writing the words in the proper format. The teachers do not want to discourage the children at the start itself and they have decided to mark the words written in reverse also as correct. Can you please help the teacher in correcting the answer sheets by writing a C++ program? Write a C++ program to check whether the second word is the reverse of the first word. Do not use strrev() function.
Input Format:

Input consists of 2 strings.

Assume that the maximum length of the string is 50.

Output format:

Refer sample input and output for formatting specifications.

Sample input &output

Excellent

tnellecxE

It is correct

Case 1
Case 2
Case 3
Input (stdin)
Excellent
tneilecxE

Output (stdout)
It is wrong

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Try out your code here
    string str1, str2, str3 = "";
    getline(cin, str1);
    getline(cin, str2);
    for (auto m = str2.crbegin(); m < str2.crend(); m++)
    {
        str3 = str3 + *m;
    }
    if (str3 == str1)
        cout << "It is correct";
    else
        cout << "It is wrong";
    return 0;
}