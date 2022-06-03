#include <iostream>
using namespace std;
class myarray
{
    int *arr;
    int n;

public:
    myarray()
    {
        cout << "Enter number of element" << endl;
        cin >> n;
        arr = new int[n];
    }
    void input()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the " << i + 1 << "Value of array :";
            cin >> arr[i];
        }
    }
    void output()
    {
        for (int i = 0; i < n; i++)
        {

            cout << arr[i] << " ";
        }
    }

    void free()
    {
        delete[] arr;
    }
    // Instead of free function use destructor so that if we forgot to call free then also it is called on object deletion
    ~myarray()
    {
        delete[] arr;
        cout << "Destructor order called..." << endl;
    }
};
int main()
{

    myarray a1;
    a1.input();
    a1.output();
    // a1.free();
    return 0;
}