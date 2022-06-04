#include <iostream>
using namespace std;
int a = 999;
int main()
{
    int a = 4;
    cout << "Local a is = " << a << endl;
    cout << "Global a is = " << ::a << endl;
    return 0;
}