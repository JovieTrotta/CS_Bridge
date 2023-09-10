/********************************************************************
Simple exercise for debugging within C code
Author: Dr. Scott Valcourt
Date : 12/29/21
Solution: Dr. Lindsay Jamieson
Date: 4/26/22
********************************************************************/
/*
Part 1 : Convention errors
Identify all of the convention errors that you can in the following code.
Here are some useful links to help get started with that:
http://www.cs.umd.edu/~nelson/classes/resources/cstyleguide/
https://www.kernel.org/doc/html/v4.10/process/coding-style.html
*/
/*
Part 2 : Logic errors
Logic errors can be difficult to find when you weren't the author, but
we've tried to make it obvious.
Locate and find all of the logic errors in the below code.
*/
/*
Part 3 : Syntax errors
Now it's time to make it work. Use the compiler's help to fix any syntax errors.
1. Comment out everything up to the point where it will compile
2. Remove comments one line or section at a time and compile
3. Try to interpret what the compiler is telling you about that section/line
*/
/*
Hints:
Google how pow and sqrt works and what it returns.
Google the Pythagorean theorem and figure out how the formulas should work.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int SIDE1 = 0;
    int SIDE2 = 0;
    int hypotenuse_of_a_right_triangle = 0; // Part 1: No Camel Case
    printf("Pythagorean theorem computation demonstration Part 1\n");
    printf("Please enter side 1: ");
    scanf("%d", &SIDE1);
    printf("Please enter side 2: "); // Part 2: Need to ask for Side 2
    scanf("%d", &SIDE2);
    hypotenuse_of_a_right_triangle += sqrt(pow(SIDE1, 2) + pow(SIDE2, 2));
    // above equation was wrong
    printf("The hypotenuse is : %d\n", hypotenuse_of_a_right_triangle);
    printf("Pythagorean theorem computation demonstration Part 2\n");
    printf("Please enter side 1: ");
    scanf("%d", &SIDE1);
    printf("Please enter the hypotenuse:");
    // This line is not correct: hypotenuse_of_a_right_triangle += SIDE1;
    scanf("%d", &hypotenuse_of_a_right_triangle);
    SIDE2 = sqrt(pow(hypotenuse_of_a_right_triangle, 2) - pow(SIDE1, 2));
    printf("The missing side is : %d\n", SIDE2);
    // missing semicolon; missing int spot
    // Extra bracket: }
}
