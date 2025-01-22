#include<stdio.h>
#include<conio.h>
int main(){
    int rev=0, rem, num;
    printf("enter a number you want to check either palindrome or not ");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(temp==rev)
    printf(" number is palindrome number");
    else
    printf("number is not palindrome");

}