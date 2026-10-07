#include<stdio.h>
int main () {
    char product[10][20];
    int stock[10],mini[10],dif[10]={0},sum=0,largest=0,number=0;
    for(int i=0; i<10; i++) {
        printf("\nenter product %d name: ",i+1);
        scanf("%s",product[i]);
        printf("enter its quatity: ");
        scanf("%d",&stock[i]);
        printf("Its minimum required quatity: ");
        scanf("%d",&mini[i]);
    }
    for(int i=0; i<10; i++) {
        if(stock[i]<mini[i]) {
            printf("\nproduct number %d %s needs reordering",i+1,product[i]);
            dif[i]=mini[i]-stock[i];
            printf(" %d orders",dif[i]);
            sum+=dif[i];
        }
    }
    largest=dif[0];
    for(int i=1; i<10; i++) {
        if(largest<dif[i]) {
            largest=dif[i];
            number=i;
        }
    }
    printf("\nlargest reorder in product number (%d) (%s) is %d",number,product[number],largest);
    printf("\nwhole products reorders is %d",sum);
}