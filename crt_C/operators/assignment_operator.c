#include <stdio.h>
int main()
{
    int num;
    num = (3, 4, 5, 6, 7, 8);
    printf("%d", num);

    num = 3, 4, 5, 6, 7, 8;
    printf("\n%d", num);
    return 0;
}