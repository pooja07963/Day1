#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0, i,rem, num;
    printf("enter number");
    scanf("%d",&num);
    while (num>0)
    {
     rem=num%10;
     sum=sum+rem;
     num=num/10;
    }
    printf("sum of digit %d", sum);
        }