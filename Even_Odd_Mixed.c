#include<stdio.h>

int main(){


    int n,r,ec=0,oc=0,c=0;
    scanf("%d",&n);
    while(n){
        if(n%2==0) ec++;
        else oc++;
        c++;
        n/=10;
    }
    if(c==ec) printf("Even");
    else if(c==oc) printf("Odd");
    else printf("Mixed");

    return  0;
}