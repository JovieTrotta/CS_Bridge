/*
 * Created by Lindsay Jamieson
 * Created on 4/27/2022
 */
#include <stdio.h>
// This is a recursive method to calculate factorial
int factorial(x)
{
    if (x <= 1)
    {
        return x;
    }
    return x * factorial(x - 1);
}
int main()
{
    printf("Enter an int:");
    int i = 0;
    scanf("%d", &i);
    int answer = factorial(i);
    printf("%d\n", answer);
}