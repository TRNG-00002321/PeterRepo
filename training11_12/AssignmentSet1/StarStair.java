import java.util.Scanner;

public class StarStair{


public static void main(String[] args){

Scanner sc = new Scanner(System.in);
int stars;
System.out.print("Enter how many steps in the staircase: ");
stars = Integer.parseInt(sc.next());

for(int i = 0; i < stars; i++){

for(int j = 0; j <= i; j++){
	System.out.print("* ");
}
System.out.println("");
}
//now for the other side


for(int i = stars-1; i > 0; i--){
for(int j = i; j > 0; j--){
	System.out.print("* ");
}
System.out.println("");

}


}


}