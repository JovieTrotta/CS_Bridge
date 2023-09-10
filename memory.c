#include <stdio.h>
int main(int argc, char *argv[])
{
    int a[3] = {1, 2, 3};
    int *p = a;
    int **r = &p;
    printf("%p\n%p\n", *r, a);
    return 0;
}