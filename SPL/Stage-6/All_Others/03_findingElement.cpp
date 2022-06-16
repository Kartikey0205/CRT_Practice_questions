/*Help Tia to extract decimals
Tia is new to programming. She needs to write a program which will receive the input as a floating point number. She needs to print the decimal part of the floating point of the number. She has written a few lines of code. Can you fill up the rest.
Read the input as string. Use string operations on the input to derive the answer easily.

Case 1
Case 2
Input (stdin)
5210.0

Output (stdout)
Floating part is : 0*/
#include <iostream>
#include <string>
int main()
{
    std::string fnum;
    // Type your code here
    getline(std::cin, fnum);
    int found = -1; // this line google

    found = fnum.find(".");
    if (found != -1)
    {
        std::cout << "Floating part is : ";
        for (auto m = fnum.begin() + found + 1; m < fnum.end(); m++)
        {
            std::cout << *m;
        }
    }
    else
    {
        std::cout << "Floating part is : ";
    }
}
