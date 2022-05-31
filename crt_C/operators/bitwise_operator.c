/*
1 . Bitwise AND
2. Bitwise OR
3. Bitwise XOR
4. shift left <<
5. shift right >>
6. ~ one's complement
*/

#include <stdio.h>
int main()
{
    // not works on floating type
    int a = 101;
    int b = 111;
    int and = a & b;
    int or = a | b;
    int xor = a ^ b;
    int data = 90;
    int res = ~data;
    printf("Bitwise AND of a and b is %d ", and);
    printf("\nBitwise OR of a and b is %d ", or);
    printf("\nBitwise XOR of a and b  is %d ", xor);
    printf("\nshift left of 4 << 3 is %d ", (4 << 3));
    printf("\nshift right of 16 >> 2 is %d ", (16 >> 2));
    printf("\nOne's complement of %d is %d ", data, res);
    return 0;
}