/*
Employee Structure
Write a C++ program to create a structure called employee with name, employee id, name, age designation and salary as data members. Accept employee details and display it.
SAMPLE INPUT & OUTPUT:

Enter name:

Rajarajan

Enter ID:

001

Enter age:

24

Enter designation:

Manager

Enter Salary:

20000



Employee Details

Name of the Employee : Rajarajan

ID of the Employee : 1

Age of the Employee : 24

Designation of the Employee : Manager

Salary of the Employee : 20000.00

Case 1
Input (stdin)
Rajarajan
1
24
Manager
20000

Output (stdout)
Enter name:
Enter ID:
Enter age:
Enter designation:
Enter Salary:
Employee Details
Name of the Employee : Rajarajan
ID of the Employee : 1
Age of the Employee : 24
Designation of the Employee : Manager
Salary of the Employee : 20000
*/

#include <iostream>
using namespace std;
struct Employee
{
    char name[30];
    int id;
    int age;
    char designation[20];
    int salary;
};
int main()
{
    struct Employee e1;

    cout << "Enter name:" << endl;
    cin.getline(e1.name, 30);
    cout << "Enter ID:" << endl;
    cin >> e1.id;
    cout << "Enter age:" << endl;
    cin >> e1.age;
    cout << "Enter designation:" << endl;
    cin.ignore();

    cin.getline(e1.designation, 20);
    cout << "Enter Salary:" << endl;
    cin >> e1.salary;
    cout << "Employee Details" << endl;
    cout << "Name of the Employee : " << e1.name << endl;
    cout << "ID of the Employee : " << e1.id << endl;
    cout << "Age of the Employee : " << e1.age << endl;
    cout << "Designation of the Employee : " << e1.designation << endl;
    cout << "Salary of the Employee : " << e1.salary << endl;

    return 0;
}