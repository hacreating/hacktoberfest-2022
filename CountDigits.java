import java.util.Scanner;
public class CountDigits{
	static int countDigits(int n){
		int count=0;     // declaring and intializing the count =0;
		while(n>0){       // to check whether no. exist or not 
			n =n/10;    // to remove digits one by one 
			count++;
		}
		return count;
		
	}
public static void main(String[]args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Any Number :");
		int n = sc.nextInt();
		System.out.println(countDigits(n));
	}
}
