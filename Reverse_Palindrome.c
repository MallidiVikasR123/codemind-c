#include<stdio.h>

int main(){
    
    int n,r,temp,sum=0,rev=0;
    scanf("%d",&n);
    temp=n;
    while(1){
        temp=n;
        rev=0;
        while(temp){
            r=temp%10;
            rev=rev*10+r;
            temp/=10;
        }
        n+=rev;
        rev=0;
        temp=n;
        while(temp){
            r=temp%10;
            rev=rev*10+r;
            temp/=10;
        }
        if(n==rev) break;
    }
    printf("%d",rev);
    
    return 0;
}