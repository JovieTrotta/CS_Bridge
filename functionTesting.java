/**
* @author Lindsay Jamieson
* created on 4/27/2022
*
* This is a solution to the functions and methods problem #1
*/
import java.util.Scanner;
public class FunctionTesting {
    public int calculateSum(int x) {
        int sum = 0;
        for(int i = 1; i<=x; i++) {
            sum += i;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int y=0;
        System.out.println("Enter an integer");
        y = input.nextInt();
        FunctionTesting f = new FunctionTesting();
        System.out.println(f.calculateSum(y));
    }
}
