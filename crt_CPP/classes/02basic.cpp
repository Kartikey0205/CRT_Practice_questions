#include <iostream>
using namespace std;
class student
{
private:
    int a, b;

public:
    void setData()
    {
        b = 20;
        a = 10;
    }
    void getData()
    {
        cout << "Enter the value of a and b " << endl;
        cin >> a >> b;
    }
    void outputData()
    {
        cout << a << "\t" << b << endl;
    }
};
int main()
{
    student s1, s2;
    s1.setData();
    s2.getData();
    s1.outputData();
    s2.outputData();
    return 0;
}