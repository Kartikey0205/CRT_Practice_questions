#include <iostream>
using namespace std;
class student
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        b = y;
        a = x;
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
    s1.setData(1000, 2000);
    s2.setData(125, 500);
    s1.outputData();
    s2.outputData();
    return 0;
}