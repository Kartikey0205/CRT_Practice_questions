#include <stdio.h>
int main()
{
    int num = 5;
    int result;
    // this is l value error
    // (num > 0) ? result = 1 : result = 0;
    result = (num > 0) ? 1 : 0;
    printf("Value of result is %d ", result);
    return 0;
}