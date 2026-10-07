#include<stdio.h>
int main () {
    int marks[15],count=0,number=0,sum=0,highest=0,lowest=0,range=0;
    float avg=0;

        for(int i=0; i<15; i++) {
        printf("enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
        while(marks[i]>100 && marks[i]<0) {
            printf("enter correct marks: ");
            scanf("%d",&marks[i]);
        }
    }
    for(int i=0; i<15; i++) {
        if(marks[i]==100){count++;}
    }
    printf("here %d students are have already 100 marks\n",count);
    for(int i=0; i<15; i++) {
        if(marks[i]==100){printf("\nStudent %d",i+1);}
    }
     for(int i=0; i<15; i++) {
        if(marks[i]>94 && marks[i]<100){number++;}
    }
    printf("here %d students are have 100  marks after bonus\n",number);
    for(int i=0; i<15; i++){
        if(marks[i]>94 && marks[i]<100){printf("student %d\n",i+1);}
    }
    for(int i=0; i<15; i++) {
        marks[i]+=5;
        sum+=marks[i];
        if(marks[i]>100){marks[i]=100;}
    }
    avg=sum/15.0;
    highest=marks[0];
    lowest=marks[0];
    for(int i=0; i<15; i++){
        if(highest<marks[i]){highest=marks[i];}
        if(lowest>marks[i]){lowest=marks[i];}
    }
    range=highest-lowest;
    printf("range after bonus is %d \n",range);
    printf("average of class after bonus is %.3f \n",avg);

    return 0;
}

