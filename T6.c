#include<stdio.h>
int main() {
    int generation[10]={0},A=1,B=1,sum=0;
    for(int i=0; i<10; i++) {
        generation[i]=A;
        sum=A+B;
        A=B;
        B=sum;
    }
    for(int i=0; i<10; i++) {
        printf("\ngeneration %d is %d",i+1,generation[i]);
    }
    return 0;
}