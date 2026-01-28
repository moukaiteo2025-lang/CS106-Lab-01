#include <stdio.h>

/* 
 * TMax - return maximum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmax(void)
{
    // return ((1 << 31) >> 31) & ~(1 << 31);
    // return ~(1 << 31);
    // return (unsigned int) ~0 >> 1; 
    return (unsigned int)(1 << 31) - 1; // TMin = 111..1
                                        // TMin - 1 = 01...1
}

int test_tmax(void)
{
    return 0x7FFFFFFF;
}

int main(void)
{
    printf("expected: %x\n", tmax());
    printf("actual  : %x\n", test_tmax());
}
