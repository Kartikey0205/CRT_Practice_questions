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

    student sum(student d2)
    {
        student temp;
        temp.a = a + d2.a;
        temp.b = b + d2.b;
        return temp;
    }
};
int main()
{
    student s1, s2, s3;
    s1.setData(1000, 2000);
    s2.setData(125, 500);
    s1.outputData();
    s2.outputData();
    // s1+s2  --> error
    s3 = s1.sum(s2); // s1 automatic pta pd gya nd s2 argument gya h
    s3.outputData();
    return 0;
}