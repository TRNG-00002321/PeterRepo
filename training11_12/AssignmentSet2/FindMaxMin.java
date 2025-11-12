/*

Find Maximum/Minimum: Find the maximum or minimum element within a 2D array.

 */
import java.util.Scanner;
public class FindMaxMin {
    public static void main(String[] args){
        int maxlength = 100;
        int[] data = new int[maxlength];
        boolean greater = false;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter > for max and < for min: ");
        String op = sc.next();
        if(!op.equals(">") && !op.equals("<")){
            System.out.print("You've put some horrible thing into me");
            return;
        }
        else if(op.equals(">")){
            greater = true;
        }
        sc.nextLine();
        System.out.println("Enter int values for the array separated by space: ");
        int count = 0;
        int temp = 0;

        String line = sc.nextLine();
        String[] strs = line.split(" ");
//        System.out.println("Received" + line);
        for(String ele: strs){

            temp = Integer.parseInt(ele);
//            System.out.println(temp);
            data[count] = temp;
            count ++;
//            System.out.println(data[count] + " " + count);
            if (count >= maxlength){
                break;
            }
        }
        if(count <= 0){
            System.out.println("No values found");
            return;
        }
        int find = data[0];
        for(int i = 0; i < count; i++){
//            System.out.println(data[i]);
            if(greater && data[i] > find){
                find = data[i];
            }
            else if(!greater && data[i] < find){
                find = data[i];
            }


        }
        if(greater){    System.out.println("Your maximum value is: " + find);   }
        else{   System.out.println("Your minimum value is: " + find);   }

    }
}
