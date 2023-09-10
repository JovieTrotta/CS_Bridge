/********************************************************************
Simple exercise for debugging within Java code
Author: Dr. G
Date : 12/21/21
Solution Author: Dr. Lindsay
Date : 4/26/22
********************************************************************/
/*
Part 1 : Convention errors
Identify all of the convention errors that you can in the following code.
Here are some useful links to help get started with that:
https://www.oracle.com/java/technologies/javase/codeconventions-
fileorganization.html#11684
https://www.oracle.com/java/technologies/javase/codeconventions-
namingconventions.html
https://www.oracle.com/java/technologies/javase/codeconventions-indentation.html
https://www.oracle.com/java/technologies/javase/codeconventions-declarations.html
*/
/*
Part 2 : Logic errors
Logic errors can be difficult to find when you weren't the author, but
I've tried to make it obvious.
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
Google how Math.pow and Math.sqrt works and what it returns.
Google the Pythagorean theorem and figure out how the formulas should work.
*/
import java.util.Scanner;
public class errors_solution
{
    public static void main(String[] args)//the type is String...
    {
        // int SIDE1 = 0; Part 1 error - variable names should begin with a lowercase
        letter
        int side1 = 0;
        // int SIDE2 = 0; Part 1 error - variable names should begin with a lowercase
        letter
        int side2 = 0;
        int hypotenuseOfARightTriangle = 0;
        Scanner sc_input = new Scanner(System.in);
        System.out.println("Pythagorean theorem computation demonstration Part 1");
        System.out.println("Please enter side 1");
        side1 = sc_input.nextInt(); //corrected side 1 variable name to match above
        //Part 2: sc variable not defined - changed to sc_input
        System.out.println("Please enter side 2");
        side2 = sc_input.nextInt(); //Part 2: SIDE not defined - corrected to side2
        //Part 2: sc variable not defined - changed to sc_input
        hypotenuseOfARightTriangle += (int)Math.sqrt(Math.pow(side1,2) +
        Math.pow(side2,2));
        //corrected line 66 variable name to match above
        //Part 2: Equation in 66 was incorrect
        System.out.println("The hypotenuse is : " + hypotenuseOfARightTriangle);
        //Part 3: added missing ; above
        System.out.println("Pythagorean theorem computation demonstration Part 2");
        System.out.println("Please enter side 1");
        side1 = sc_input.nextInt(); //corrected side1 variable name to match above
        //Part 2: sc variable not defined - changed to sc_input
        System.out.println("Please enter the hypotenuse");
        // Part 3: added missing " above
        hypotenuseOfARightTriangle = sc_input.nextInt();
        // Part 2: Needs to be = not +=
        side2 = (int)(Math.sqrt(Math.pow(hypotenuseOfARightTriangle,2) -
        Math.pow(side1,2)));
        //corrected line 80 variable name to match above
        //Part 2: sqrt returns a double, but side2 is an int; converting return value
        //Part 2: Equation in 80 was incorrect
        System.out.println("The missing side is : " + side2);
        //corrected line 84 variable name to match above
        //Part 3: added missing ; above
    }
}
