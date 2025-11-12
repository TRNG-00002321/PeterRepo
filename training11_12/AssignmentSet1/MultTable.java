public class MultTable{

public static void main(String[] args){

if(args.length <= 0){
	System.out.println("Put better input in next time");
	return;
}

int target = Integer.parseInt(args[0]);
int i = 1;
while(i <= 10){
	System.out.println(target + " * " + i + " is equal to: " + target * i);
	i++;

}


}



}