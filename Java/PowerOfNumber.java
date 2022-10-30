import java.util.Scanner;
class PowerOfNumber {
    public static void main(String[] args) {
    	Scanner s=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num=s.nextInt();
	System.out.print("Enter the power: ");
	int pow=s.nextInt();
        //int number = 2, p = 5;
        long result = 1;
        int i = pow;
        for (;i != 0; --i)
        {
            result *= num; // result =result*num;
        }
        System.out.println(num+"^"+pow+" = "+result);
    }
}
