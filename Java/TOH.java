import java.util.Scanner;

public class TOH {
    static int count = 0; 
    public static void TOH(int n, int a, int b, int c) {
        if (n == 1) {
            System.out.println("Move disk " + n + " from rod " + a + " to rod " + c);
            count++;
            return;
        }
        TOH(n - 1, a, c, b);  
        System.out.println("Move disk " + n + " from rod " + a + " to rod " + c);
        count++;
        TOH(n - 1, b, a, c);  
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter value of n: ");
        int n = scanner.nextInt();

        TOH(n, 1, 2, 3); 
        System.out.println("\nTotal moves: " + count);
        scanner.close();
    }
}
