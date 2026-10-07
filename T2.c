#include<stdio.h>
int main () {
    char n[5][50],A=0;
    int S[5]={0},count=0,strong=0;
    for(int i=0; i<5; i++){
        printf("enter password %d: ",i+1);
        scanf("%s",n[i]);
    }
    for(int i=0; i<5; i++){
        int L[5]={0};
        for(int j=0; n[i][j]!='\0'; j++){
            A=n[i][j];
            if(A>='a' && A<='z'){S[i]+=1;}
            else if(A>='A' && A<='Z'){S[i]+=2;}
            else if(A>='0' && A<='9'){S[i]+=3;}
            L[i]++;
        }
        if(L[i]>7){S[i]+=5;}
        int found=0;
        for(int j=0; n[i][j]!='\0' && n[i][j+1]!='\0' && n[i][j+2]!='\0' ; j++) {
            if(n[i][j]=='1' && n[i][j+1]=='2' && n[i][j+2]=='3'){found=found+1;}
        }
        S[i]=S[i]-3*(found);
        printf("Password %d score is %d\n",i+1,S[i]);
        if(S[i]<10){count++;}
    }
    strong=S[0];
    for(int i=1; i<5; i++){
        if(strong<S[i]){strong=S[i];}
    }
    for(int i=0; i<5; i++){
        if(S[i]==strong) {printf("strong password is %s score is %d\n",n[i],strong);}
    }
    printf("%d passwords are below 10 score",count);
}