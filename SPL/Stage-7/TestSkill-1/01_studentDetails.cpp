/*
Student details
Jeeva is the chairman of ABC university and he is planned to improve students education. So he is conducted meeting for all departments HODs. Write a program to help all department HODs to display student details. Create a structure called Student. struct Student { char name[30]; char department[20]; int yearOfStudy; float cgpa; }; Write a program to get the details of 'n' students and to display their details, sorted in ascending order based on the name.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of students

1

Enter the details of student 1

Enter name

krish

Enter department

mca

Enter year of study

3

Enter cgpa

7.6

Details of students

Student 1

Name : krish

Department : mca

Year of study : 3

CGPA : 7.6

Case 1
Input (stdin)
1
krish
mca
3
7.6

Output (stdout)
Enter the number of students
Enter the details of student 1
Enter name
Enter department
Enter year of study
Enter cgpa
Details of students
Student 1
Name:krish
Department:mca
Year of study:3
CGPA:7.6
*/
/*My approach but 10 out of 20
#include <iostream>
#include <iomanip>
using namespace std;
struct Student
{
    char name[30];
    char department[20];
    int yearOfStudy;
    float cgpa;
};
int main()
{
    int n;
    cout << "Enter the number of students" << endl;
    cin >> n;
    struct Student s1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of student " << i + 1 << endl;
        cout << "Enter name" << endl;
        cin.ignore();
        cin.getline(s1[i].name, 30);
        cout << "Enter department " << endl;
        cin.getline(s1[i].department, 20);
        cout << "Enter year of study " << endl;
        cin >> s1[i].yearOfStudy;
        cout << "Enter cgpa " << endl;
        cin >> s1[i].cgpa;
        cout << "Details of students " << endl;
        cout << "Student " << i + 1 << endl;
        cout << "Name:" << s1[i].name << endl;
        cout << "Department:" << s1[i].department << endl;
        cout << "Year of study:" << s1[i].yearOfStudy << endl;
        cout << "CGPA:" << setprecision(2) << s1[i].cgpa << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
struct Student
{
    char name[30];
    char department[20];
    int yearOfStudy;
    float cgpa;
};

int main()
{
    int n, i, j;
    cout << "Enter the number of students\n";
    cin >> n;
    char x[n][30];
    char t[30];
    Student s[n];
    for (i = 0; i < n; i++)
    {

        cout << "Enter the details of student " << i + 1 << endl;
        cout << "Enter name\n";
        cin.ignore();
        cin.getline(s[i].name, 30);
        strcpy(x[i], s[i].name);
        cout << "Enter department\n";
        cin.getline(s[i].department, 20);
        cout << "Enter year of study\n";
        cin >> s[i].yearOfStudy;
        cout << "Enter cgpa\n";
        cin >> s[i].cgpa;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(x[j], x[j + 1]) > 0)
            {
                strcpy(t, x[j]);
                strcpy(x[j], x[j + 1]);
                strcpy(x[j + 1], t);
            }
        }
    }

    cout << "Details of students\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (strcmp(x[i], s[j].name) == 0)
            {
                cout << "Student " << i + 1 << endl;
                cout << "Name:" << s[j].name << endl;
                cout << "Department:" << s[j].department << endl;
                cout << "Year of study:" << s[j].yearOfStudy << endl;
                cout << "CGPA:" << setprecision(2) << s[j].cgpa << endl;
                break;
            }
        }
    }
    return 0;
}