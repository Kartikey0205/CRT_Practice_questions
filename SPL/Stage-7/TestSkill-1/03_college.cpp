/*
College
Create a structure called College.
 struct College {
     char name[100];
     char city[100]; int establishmentYear; float passPercentage; } Write a program to get the details of 'n' colleges and to display their details, sorted by name in ascending order.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of colleges

3

Enter the details of college 1

Enter name

ACE

Enter city

Coimbatore

Enter year of establishment

2000

Enter pass percentage

98.5

Enter the details of college 2

Enter name

BCE

Enter city

Erode

Enter year of establishment

1990

Enter pass percentage

89.45

Enter the details of college 3

Enter name

DCE

Enter city

Chennai

Enter year of establishment

2008

Enter pass percentage

97.35

Details of colleges

College 1

Name : ACE

City : Coimbatore

Year of establishment : 2000

Pass percentage : 98.50

College 2

Name : BCE

City : Erode

Year of establishment : 1990

Pass percentage : 89.45

College 3

Name : DCE

City : Chennai

Year of establishment : 2008

Pass percentage : 97.35

Case 1
Input (stdin)
3
ACE
Coimbatore
2000
98.5
BCE
Erode
1990
89.45
DCE
Chennai
2008
97.35

Output (stdout)
Enter the number of colleges
Enter the details of college 1
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Enter the details of college 2
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Enter the details of college 3
Enter name
Enter city
Enter year of establishment
Enter pass percentage
Details of colleges
College:1
Name:ACE
City:Coimbatore
Year of establishment:2000
Pass percentage:98.5
College:2
Name:BCE
City:Erode
Year of establishment:1990
Pass percentage:89.45
College:3
Name:DCE
City:Chennai
Year of establishment:2008
Pass percentage:97.35
*/
#include <iostream>
#include <iomanip>
using namespace std;
struct College
{
    char name[100];
    char city[100];
    int establishmentYear;
    float passPercentage;
};
int main()
{
    int n;
    cout << "Enter the number of colleges" << endl;
    cin >> n;
    struct College c[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of college " << i + 1 << endl;
        cout << "Enter name" << endl;
        cin.ignore();
        cin.getline(c[i].name, 100);
        cout << "Enter city" << endl;
        cin.getline(c[i].city, 100);
        cout << "Enter year of establishment" << endl;
        cin >> c[i].establishmentYear;
        cout << "Enter pass percentage" << endl;
        cin >> c[i].passPercentage;
    }
    cout << "Details of colleges" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "College:" << i + 1 << endl;
        cout << "Name:" << c[i].name << endl;
        cout << "City:" << c[i].city << endl;
        cout << "Year of establishment:" << c[i].establishmentYear << endl;
        cout << "Pass percentage:" << c[i].passPercentage << endl;
    }
    return 0;
}