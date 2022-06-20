/*
Complex number calculator
Ryan is appearing for a techathon that offers price money of 10K for the winner. Techathon has provided a platform where an incomplete code will appear, and the participants have to complete it. Ryan got a program where he needs to create a complex calculator. Can you help Ryan win this competition?
The first line consists of a choice which is an integer to choose from 1 to 3. Choice 1 represents addition of two complex numbers, 2 represents subtraction of two complex numbers and 3 represents the multiplication of two complex numbers.

Case 1
Case 2
Case 3
Input (stdin)
3
5
8
6
-10

Output (stdout)
110-2i
*/
#include <iostream>
using namespace std;
struct complex
{
    int real;
    int img;
} c1, c2;

int main()
{
    complex sum, sub, mul;
    int choice;
    cin >> choice;
    cin >> c1.real;
    cin >> c1.img;
    cin >> c2.real;
    cin >> c2.img;
    switch (choice)
    {
    case 1:
        sum.real = c1.real + c2.real;
        sum.img = c1.img + c2.img;
        if (sum.img >= 0)
            cout << sum.real << "+" << sum.img << "i";
        else
            cout << sum.real << sum.img << "i";

        break;
    case 2:
        sub.real = c1.real - c2.real;
        sub.img = c1.img - (c2.img);
        if (sub.img >= 0)

            cout << sub.real << "+" << sub.img << "i";
        else
            cout << sub.real << sub.img << "i";

        break;
    case 3:
        mul.real = (c1.real * c2.real) + ((-1) * c1.img * c2.img);
        mul.img = (c1.img * c2.real) + (c1.real * c2.img);
        if (mul.img >= 0)

            cout << mul.real << "+" << mul.img << "i";
        else
            cout << mul.real << mul.img << "i";

        break;

    default:
        cout << "Invalid choice";
        break;
    }
    return 0;
}