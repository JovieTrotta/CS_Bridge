#include <stdio.h>
int main(int argc, char **argv)
{
    int x = 0;
    char string[100];
    printf("Enter an integer\n");
    scanf("%d", &x);
    printf("Enter a string\n");
    scanf("%s", string);
    printf("%d\n", x);
    printf("%s\n", string);
    return 0;
}