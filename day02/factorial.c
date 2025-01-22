#include<stdio.h>
#include<conio.h>
int main()
{
    int num, fact=1, i;
    printf("enter number you want to find factorial");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial of a number %d" , fact);
    }