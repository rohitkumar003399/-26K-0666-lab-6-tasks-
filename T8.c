#include<stdio.h>
int main() {
    int seats[15],booked=0,empty=0;
    printf("\nUser enter 15 seats booked or available in cinema hall\n(1 for booked and 0 for empty)\n");
    for(int i=0;i<15;i++){
        printf(" for seat %d: \n",i+1);
        scanf("%d",&seats[i]);
        while(seats[i]!=1 && seats[i]!=0){
            printf("enter valid number: (0 or 1)\n");
            scanf("%d",&seats[i]);
        }
    }
    for(int i=0;i<15;i++){
        if(seats[i]==0){empty++;}
        else if(seats[i]==1){booked++;}
    }
    printf("%d seats are empty and %d are booked\n",empty,booked);
    int i=0;
    while(seats[i]!=0){
        i++;
        if(i>14){printf("first seat not available\n"); break;}
    }
    printf("First seat available in seat number %d\n",i+1);
    i=14;
    while(seats[i]!=0){
        i--;
        if(i<0){printf("Last seat not available\n"); break;}
    }
    printf("Last seat available number is %d\n",i+1);
    for(int i=0,j=0; j<3;){
        if(seats[i]==0){seats[i]=1; i++; j++;}
        else i++;
    }
    for(int i=0;i<15;i++){
        if(seats[i]==0){printf("seat number %d are available:\n",i+1);}
        else if(seats[i]==1){printf("seat number %d are booked:\n",i+1);}
    }
}