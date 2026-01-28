#include <stdio.h>

/* 
 * fitsShort - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int fitsShort(int x)
{
    // return 2;
    // return !(((x << 16) >> 16) ^ x);

    // printf("%x %x\n", x, (x >> 15));
    printf("%x %x\n", ~((x >> 15) ^ 0), ~((x >> 15) ^ (~0)));
    return !!(!(~((x >> 15) ^ 0)) | !(~((x >> 15) ^ (~0))));

    // return !((x >> 15) ^ (x >> 16));
}

int test_fitsShort(int x)
{
    short int sx = (short int) x;
    return x == sx;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", fitsShort(x));
    printf("actual  : %x\n", test_fitsShort(x));
}
