#include<stdio.h>
#include<conio.h>
int main(){
    int n,arm=0, r, temp;
    printf("enter a number");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(temp==arm)
    printf("armstrong number");
    else
    printf(" not armstrong number");

}

