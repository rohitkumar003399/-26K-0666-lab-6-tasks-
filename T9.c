#include<stdio.h>
int main() {
    int transfer[10],suspicious=0,test=0,flaged=0,A=0,sum=0,largest=0,B=0;
    float avg=0;
    for(int i=0; i<10; i++) {
    printf("enter transaction %d: ",i+1);
    scanf("%d",&transfer[i]);
    while(transfer[i]<0){
        printf("enter valid tansfer: ");
        scanf("%d",&transfer[i]);
    }
}
largest=transfer[0];
for(int i=0; i<10; i++) {
if(largest<transfer[i]){largest=transfer[i]; B=i+1;}
if(transfer[i]<100){test++;}
if(transfer[i]>200000){suspicious++;}
if(transfer[i]>200000 || transfer[i]<100){flaged++;}
if(transfer[i]<=200000 && transfer[i]>=100){A++; sum+=transfer[i];}
}
    avg=(float)sum/A;

printf("\n%d are suspicious transactions",suspicious);
printf("\n%dare test transactions",test);
printf("\ntotal flaged transactions is %d",flaged);
printf("\nAverage is %.3f",avg);
printf("\nLargest tansaction is %d amount is %d",B,largest);
}