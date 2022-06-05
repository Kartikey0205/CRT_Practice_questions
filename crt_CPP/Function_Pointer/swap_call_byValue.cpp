#include <iostream>
using namespace std;
void swap(int num1, int num2)
{
    //  without using third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "Num1 after swap by value is  " << num1 << endl;
    cout << "Num2 after swap by value is  " << num2 << endl;
}
int main()
{

    int num1, num2;
    cout << "Enter the number 1" << endl;
    cin >> num1;
    cout << "Enter the number 2" << endl;
    cin >> num2;

    cout << "\nNum1 before swap by value is  " << num1 << endl;
    cout << "Num2 before swap by value is  " << num2 << endl;

    swap(num1, num2);
    return 0;
}