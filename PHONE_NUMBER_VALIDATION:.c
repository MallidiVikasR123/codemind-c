#include<stdio.h>

int main(){
    
    unsigned long long int n,count=0;
    scanf("%llu",&n);
    while(n){
        n/=10;
        count++;
    }
    if(count==10) printf("Valid");
    else printf("Invalid");
    
    return 0;
}