#include<stdio.h>
int main() {
    int sum=0,over=0,max=0,min=0,maximum=0,minimum=0,dif=0,a[12];
    float avg=0;
    for(int i=0; i<12; i++) {
        printf("enter enter no. of cars at signals no %d",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    min=a[0];
    max=a[0];
    avg=sum/12.0;
    for(int i=0; i<12; i++) {
        if(min>a[i]) {min=a[i];minimum=i;}
    }
    for(int i=0; i<12; i++) {
        if(max<a[i]) {max=a[i]; maximum=i;}
    }
    for(int i=0; i<12; i++) {
        if(a[i]>avg) {
            over++;
        }
    }
    dif=max-min;
    printf("\n\naverage of all signals cars is: %d",avg);
    printf("\nminimum cars in signal: %d (%d)",minimum+1,min);
    printf("\nmaximum cars in signal: %d (%d)",maximum+1,max);
    printf("\noverloaded cars in %d signals",over);
    printf("\ndifference between highest car number and lowest is %d",dif);

    return 0;
}