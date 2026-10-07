#include<stdio.h>
int main() {
    int n,sum=0,times=0;
    do{
    printf("enter amount for withdraw: ");
    scanf("%d",&n);
    times++;
    sum+=n;
    }while(n!=0);
    printf("\nin session here %d transaction are made",times);
    printf("\n And total amount is %d",sum);
    return 0;
}