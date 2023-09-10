#include <stdio.h>
int confuse_student(int *p)
{
    *p -= 3;
    return 1;
}
int main(int argc, char *argv[])
{
    int a = 7, b = 4;
    b = confuse_student(&a);
    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);
    return 0;
}
