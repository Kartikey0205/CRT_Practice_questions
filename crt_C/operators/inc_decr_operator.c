#include <stdio.h>
int main()
{
    int a = 5;
    int b, c;
    a++;
    ++a;
    a--;
    --a;
    printf("Value of a is now %d ", a);
    b = ++a;
    printf("\nValue of a and b is now %d  and %d ", a, b);
    c = a++; // assign op priority is high then variable
    printf("\nValue of a and c is now %d and %d ", a, c);

    return 0;
}