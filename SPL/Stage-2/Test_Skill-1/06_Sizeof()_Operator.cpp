/*
Sizeof() operator
Maya is interested to learn programming languages. When she is learning, she had a doubt on how to find the size of the variable. In C++, we have the sizeof() operator, which is used to get the size occupied by a variable or value. Now, write a C++ program to declare a variable of character, integer, float, and double type and print their respective sizes.
OUTPUT FORMAT:

Print the corresponding size of a character, integer, float and double.

SAMPLE OUTPUT:

1

4

4

8
*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    int i;
    float f;
    double db;
    cout << sizeof(ch) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(db) << endl;

    // Type your code here.
}