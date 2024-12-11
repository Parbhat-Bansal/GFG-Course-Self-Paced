import java.util.Scanner;

public class ArrayInsertion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of an array before insertion: ");
        int size = sc.nextInt();
        int[] arr = new int[size + 1]; // Create an array with an extra space for the new element

        System.out.println("Enter elements in the array:");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter element to be inserted in the array: ");
        int element = sc.nextInt();

        System.out.print("Array before insertion: ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        arr[size] = element; // Insert the new element at the end of the array
        size++; // Increment the size to reflect the insertion

        System.out.print("Array after insertion: ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ") ;
        }
    }
}
