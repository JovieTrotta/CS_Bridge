/*
 * Created by: Lindsay Jamieson
 * Created on: 4/27/2022
 */
#include <stdio.h>
/*
 * calcSummation
 * parameters: x (the end of the summation)
 * returns: the total of the numbers from 1 to the parameter
 */
int calcSummation(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int y, answer;
    printf("Enter an integer:\n");
    scanf("%d", &y);
    answer = calcSummation(y);
    printf("Answer: %d\n", answer);
    return 0;
}