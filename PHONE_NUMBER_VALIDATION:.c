#include<stdio.h>

int main(){
    
    long long int n,count=0;
    scanf("%lld",&n);
    while(n){
        count++;
        n/=10;
    }
    if(count==10) printf("Valid");
    else printf("Invalid");
}