#include <iostream>
#include <string.h>
using namespace std;
class student
{
public:
    int roll;
    char name[10];
    float per;
};
int main()
{
    student s1, s2;
    s1.roll = 101;
    strcpy(s1.name, "Student 1");
    s1.per = 45.90;
    s2.roll = 102;
    strcpy(s2.name, "Student 2");
    s2.per = 65.90;

    cout << s1.roll << "\t" << s1.name << "\t" << s1.per << endl;

    cout << s2.roll << "\t" << s2.name << "\t" << s2.per << endl;
    return 0;
}