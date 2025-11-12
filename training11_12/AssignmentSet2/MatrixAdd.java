/*

Matrix Addition: Add two matrices of the same dimensions.

 */


import java.util.Scanner;

public class MatrixAdd {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row count for the arrays:");
        int rows = sc.nextInt();
        System.out.println("Enter column count for the rrays:");
        int cols = sc.nextInt();
        int[][] arr1;
        arr1 = new int[rows][cols];
        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                System.out.println("Enter value of matrix 1 at: " + i + ", " + j + ":");
                arr1[i][j] = sc.nextInt();
            }
        }

        int[][] arr2;
        arr2 = new int[rows][cols];
        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                System.out.println("Enter value of matrix 2 at: " + i + ", " + j + ":");
                arr2[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                arr1[i][j] += arr2[i][j];
            }
        }

        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < cols; j++){
                System.out.print(arr1[i][j] + " ");
            }
            System.out.println();
        }


    }





}
