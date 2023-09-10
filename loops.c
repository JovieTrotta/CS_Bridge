#include <stdio.h>
int main(int argc, char **argv)
{
    int choice = 0, n = 0, temp = 0;
    printf("Enter 1 to calculate the first 10 powers of n,");
    printf(" Enter 2 to calculate the first n powers of 2:\n");
    scanf("%d", &choice);
    printf("Enter an int for n:");
    scanf("%d", &n);
    if (choice == 1)
    {
        // for loop to print out first 10 powers of n
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", temp);
            temp *= n;
        }
    }
    else
    {
        // while loop to print out first n powers of 2
        while (n > 0)
        {
            printf("%d\n", temp);
            temp *= 2;
            n--;
        }
    }
    return 0;
}