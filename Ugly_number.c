#include<stdio.h>

int main(){

    int n,t;
    scanf("%d",&n);
    while(n!=1 && n!=7){
        if(n%2==0) n/=2;
        else if(n%3==0) n/=3;
        else if(n%5==0) n/=5;
        if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0) break;
    }
    if(n==1) printf("Ugly Number");
    else printf("Not Ugly Number");
}