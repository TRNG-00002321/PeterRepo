/*

Print a 2D Array: Write a program to initialize and print the elements of a given 2D integer array (matrix).
Sum of Elements: Calculate the sum of all elements in a 2D array.

 */

import java.util.Scanner;

public class ArrayPrint {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array row count:");
        int rows = sc.nextInt();
        System.out.println("Enter array column count:");
        int cols = sc.nextInt();
        int[][] arr;
        arr = new int[rows][cols];
        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                System.out.println("Enter value at: " + i + ", " + j + ":");
                arr[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}