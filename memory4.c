#include <stdio.h>
/* Declare your function here */
void swap_values(int *x, int *y);
int main(int argc, char *argv[])
{
    int x = 0;
    int y = 1;
    swap_values(&x, &y);
    printf("The swapped values for x and y are as follows: \n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
/* implement function here */
void swap_values(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
