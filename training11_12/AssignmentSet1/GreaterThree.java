public class GreaterThree{

public static void main(String[] args){
if(args.length < 3){
	System.out.println("You've terribly messed up");
	return;
}
int num1 = Integer.parseInt(args[0]);
int num2 = Integer.parseInt(args[1]);
int num3 = Integer.parseInt(args[2]);

if (num1 > num2){
	System.out.println(num1 + " is the greatest");
}
else if (num2 > num3){
	System.out.println(num2 + " is the greatest");
}
else{
	System.out.println(num3 + " is the greatest");
}

}

}