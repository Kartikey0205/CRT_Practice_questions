/*

Hima loves to do everything differently. She wants to add two numbers using functions. She want to add two numbers using bit-wise operators. Can you help her?
*/

#include <iostream>
int Add(int, int);
int main()
{
    int r, a;
    std::cin >> r >> a;
    int sum = Add(r, a);
    std::cout << sum;
    return 0;
}
int Add(int x, int y)
{
    int carry;
    while (y != 0)
    {
        // Your code goes here
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}