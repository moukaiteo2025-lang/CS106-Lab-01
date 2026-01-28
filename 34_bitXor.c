#include <stdio.h>

/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y)
{
    // return 2;
    return ~(~(~x & y) & ~(~y & x));
}

int test_bitXor(int x, int y)
{
    return x ^ y;
}

int main(void)
{
    int x = 4;
    int y = 8+4;
    printf("expected: %x\n", bitXor(x, y));
    printf("actual  : %x\n", test_bitXor(x, y));
}
