import java.util.Scanner;
 public class sum{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int num, rem, sum=0;
System.out.println("enter the number");
num=sc.nextInt();
while(num>0){
rem=num%10;
sum=sum+rem*rem;
num=num/10;
}
System.out.println("sum of square is"+sum);
}
}

