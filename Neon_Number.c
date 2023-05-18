#include<stdio.h>

int main(){
    
    int n,sqr,sum=0;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr){
        sum+=(sqr%10);
        sqr/=10;
    }
    if(sum==n) printf("Neon Number");
    else printf("Not Neon Number");
    
    return 0;
}