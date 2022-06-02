/*
Will Lucy get the pass to Narnia?
Lucy has entered to Narnia through the wardrobe. Once she enters to Narnia, she is encountered with a genie. Genie takes care of Narnia from trespassers. As Genie finds Lucy to be genuine, Genie allows Lucy to enter Narnia if she answers his question. He gives Lucy two numbers and asks her to perform the basic arithmetic operation like addition, subtraction etc. She need to perform the same and tell the answer. If she tells right answer, she gets the pass to Narnia.
The input should consists of two integers and the operation to be performed which should be corresponding integer. Print the Menu as

Addition(+)
Subtraction(-)
Multiplication(*)
Division(/)
Remainder(%)


Case 1
Case 2
Case 3
Input (stdin)
50
25
6

Output (stdout)
Enter first number : Enter second number : Menu
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Remainder
Invalid operation
*/
#include <iostream>
using namespace std;

int main()
{
    // Try out your code here
    int num1, num2, choice;
    cin >> num1 >> num2;

    cout << "Enter first number : Enter second number : Menu\n"
            "1.Addition\n"
            "2.Subtraction\n"
            "3.Multiplication\n"
            "4.Division\n"
            "5.Remainder\n";

    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << (num1 + num2);
        break;
    case 2:
        cout << (num1 - num2);
        break;
    case 3:
        cout << (num1 * num2);
        break;
    case 4:
        cout << (num1 / num2);
        break;
    case 5:
        cout << (num1 % num2);
        break;
    default:
        cout << "Invalid operation";
    }
    return 0;
}