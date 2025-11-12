/*

Transpose Matrix: Given a matrix, find its transpose (swap rows and columns).

 */


import java.util.Scanner;

public class MatrixTranspose {

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

        for(int i = 0; i < cols; i ++){
            for(int j = 0; j < rows; j++){
                System.out.print(arr[j][i] + " ");
            }
            System.out.println();
        }
    }

}
