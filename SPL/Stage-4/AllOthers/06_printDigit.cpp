#include <iostream>
void func(int n)
{
    if (n <= 9)
    {
        std::cout << n << "\n";
        return;
    }
    func(n / 10);
    std::cout << n % 10 << "\n";
}
int main()
{
    int n;
    std::cin >> n;
    func(n);
    return 0;
}