#include<stdio.h>
int main() {
    int notes100[5]={12,23,32,1,23},notes200[5]={2,23,23,1,2},notes500[5]={12,12,3,2,4},sum=0,n=0;
    for(int i=0; i<5; i++) {
        sum+=notes100[i]*100+notes200[i]*200+notes500[i]*500;
    }
    printf("enter your withdraw amount: ");
    scanf("%d",&n);
    if(sum<n){printf("Insufficient Funds\n");}
    else if(n%100!=0){printf("Invalid amount(because AtM only has notes(100,200,500))\n");}
    else {printf("Transaction Approved:");}
}