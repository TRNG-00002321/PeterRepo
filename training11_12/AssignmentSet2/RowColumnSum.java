/*

Row/Column Sums: Calculate the sum of elements for each individual row and each individual column in a 2D array.

 */


import java.util.Scanner;

public class RowColumnSum {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array row count:");
        int rows = sc.nextInt();
        System.out.println("Enter array column count:");
        int cols = sc.nextInt();
        int[][] arr;

        arr = new int[rows][cols];
        int[] rowsum = new int[rows];
        int[] colsum = new int[cols];

        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                System.out.println("Enter value at: " + i + ", " + j + ":");
                arr[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                rowsum[i] += arr[i][j];
                colsum[j] += arr[i][j];
            }
        }

        System.out.println("Sum of Rows:");
        for(int i = 0; i < rows; i++){
            System.out.println("Row " + i + ": " + rowsum[i]);
        }

        System.out.println("Sum of Columns:");
        for(int i = 0; i < cols; i++){
            System.out.println("Column " + i + ": " + colsum[i]);
        }
    }
}
