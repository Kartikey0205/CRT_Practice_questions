/*
Student data entry
It is the first day in school. The kids need to enroll their data in system. Teacher calls one by one to enter the data. They need to enter their data and need to check the display their details.
[Hint : use structure to store the details of student]

Case 1
Case 2
Case 3
Input (stdin)
Christy Rose
57
82

Output (stdout)

Student Details
Name: Christy Rose
Roll: 57
Marks: 82
Skipped !You took 0m

*/

#include <iostream>
#include <cstring>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    // Your code goes here
    struct student s1;
    cin.getline(s1.name, 50);
    cin >> s1.roll;
    cin >> s1.marks;
    cout << endl;
    cout << "Student Details" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;
}