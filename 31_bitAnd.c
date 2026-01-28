#include <stdio.h>

/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y)
{
    // return 2;
    // 1 1 -> 1
    // 0 1 -> 0
    // 0 0 -> 0

    // ~(1 | 1)  |  ~(~1 | ~1) -> 1

    // 1 | 0  |  ~1  | ~0 -> 1

    // ~1 | ~1

    return ~(~x | ~y);

}

int test_bitAnd(int x, int y)
{
    return x & y;
}

int main(void)
{
    int x = 2;
    int y = 3;
    printf("expected: %x\n", test_bitAnd(x, y));
    printf("actual  : %x\n", bitAnd(x, y));
}
