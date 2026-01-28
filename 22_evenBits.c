#include <stdio.h>

/* 
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void)
{
    // return 2;

    // 11
    // 01 + 1 = 10
    // 11 + 1 = 100 + 1 = 101
    // 1111 0000 + 1 = 1010 1010 + 1 = 1010 1010
    // = 0101 0101
    // = 0101 0100 + 1
    // = 0001 0101

    // 10 + 10 = 100
    // int x = 1 + (1 << 2);
    // x = x + (x << 4);
    // x = x + (x << 8);
    // x = x + (x << 16);


    // return x;

    return ((0x55 << 8) | 0x55) << 16 | ((0x55 << 8) | 0x55); 

    // 0101 + 0101 = 1010 + 1010 = 10100

}

int test_evenBits(void)
{
    int result = 0;
    int i;
    for (i = 0; i < 32; i += 2)
        result |= 1 << i;
    return result;
}

int main(void)
{
    printf("expected: %x\n", evenBits());
    printf("actual  : %x\n", test_evenBits());
}
