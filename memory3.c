#include <stdio.h>
int main()
{
    int x = 16, y, z = 3;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    printf("z is %d\n", z);
    printf("z<y<x is %d\n", (z < y < x));
    printf("x < y||z is %d\n", (x < y || z));
    printf("x mod z is %d\n", (x % z));
    printf("y in memory is %d\n", &y);
    printf("4+x/z is %d\n", (4 + x / z));
    return 0;
}
