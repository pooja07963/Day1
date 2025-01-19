#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter a number u want to check either even or odd");
    scanf("%d", &n);
    if(n%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}
