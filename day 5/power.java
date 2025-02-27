import java.util.Scanner;
class power
{
public static void main(String[] args){
int base,exep,result=1;
System.out.println("enter the base");
Scanner r=new Scanner(System.in);
base=r.nextInt();
System.out.println("enter the exeponent");
exep=r.nextInt();
for(int i=1;i<=exep; i++){
result=base*result;
}
System.out.println("power is"+ result);
}
}
