#include <stdio.h>
int main()
{
    int a = 5, b = 20, c = 5, d = 20;
    // If first condition false no need to check other in logical And thats why it is short hand opertor
    if (++a > 10 && ++b > 10)
    {
        printf("Morning");
    }
    else
    {
        printf("Evening");
    }
    printf("\na= %d \n", a);
    printf("b= %d \n", b);
    //  Logical OR
    if (++c < 10 || ++d > 10)
    {
        printf("Morning");
    }
    else
    {
        printf("Evening");
    }
    printf("\nc= %d \n", c);
    printf("d= %d \n", d);
    return 0;
}