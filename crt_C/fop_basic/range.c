#include <stdio.h>
int main()
{
    char ch = 127; // by default signed
    ch = ch + 1;
    printf("Value of ch is %d ", ch);
    unsigned char ch1 = 256;

    printf("\nValue of ch is %d ", ch1);
    return 0;
}