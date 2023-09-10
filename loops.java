import java.util.Scanner;
/**
*
* @author Lindsay Jamieson
* 4/27/22
*
* Answer to Control Structures Assignment in Java
*
*/
public class ControlStructures {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int choice;
        int temp;
        int n;
        System.out.print("Enter 1 to calculate the first 10 powers of n");
        System.out.println(" Enter 2 to calculate the first n powers of 2");
        choice = input.nextInt();
        System.out.println("Enter an int for n");
        n = input.nextInt();
        if(choice == 1) {
            temp = n;
            for(int i=0; i< 10; i++) {
                System.out.println(temp);
                temp *= n;
            }
        } 
            else {
                temp = 2;
                while(n >0) {
                System.out.println(temp);
                temp *=2;
                n--;
            }
        }
    }
}
