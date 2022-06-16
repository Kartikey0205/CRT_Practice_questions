/*
Help Kiara in reversing a string
Please help Kiara to write the correct code to reverse a string.


Case 1
Case 2
Case 3
Input (stdin)
Hello

Output (stdout)
olleH

*/
#include <iostream>

int main()

{
    char str[100], rev[100];
    int count = 0, end, i;
    std::cin.getline(str, 100);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    end = count;
    for (i = 0; i < end; i++)
    {
        rev[i] = str[count - 1];
        count--;
    }
    std::cout << rev;
}