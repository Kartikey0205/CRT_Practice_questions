#include <iostream>
using namespace std;
class student
{
    int a;

public:
    student()
    {
        a = 10;
        cout << "Zero Default \n";
    }
    student(int a1)
    {
        a = a1;
        cout << "One Parameterized\n";
    }

    void output()
    {
        cout << a << endl;
    }
};
int main()
{
    student s1, s2(100);
    student s4(500);
    student s5 = student(5);

    s1.output();
    s2.output();
    s4.output();
    s5.output();

    return 0;
}