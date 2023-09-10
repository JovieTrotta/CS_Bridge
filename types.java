import java.util.Scanner;
public class TypesAndTyping {
    public void main(String args[]) {
        int x;
        String y;
        Scanner input= new Scanner(System.in);
        System.out.println("Input an integer:");
        x = input.nextInt();
        input.nextLine(); //pull the return character off after the integer
        y = input.nextLine();
        System.out.println(x);
        System.out.println(y);
    }
}
