#include<stdio.h>
int main() {
    int n,a=0,b=0;
    printf("enter any number: ");
    scanf("%d",&n);
    if(n<0){n=-n;}
    a=n;
    while(n>0) {
        b=b*10+n%10;
        n/=10;
    }
    if(a==b){printf("palindrome");}
    else printf("not palindrome");
}