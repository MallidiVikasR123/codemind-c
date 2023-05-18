#include<stdio.h>

int main(){
    
    int n,rev=0,r,t,i;
    scanf("%d",&n);
    while(1){
        rev=0;
        t=++n;
        while(t){
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        if(rev==n){
            for(i=2;i<=n;i++) if(n%i==0) break;
            if(i==n) break;
        }
    }
    printf("%d",n);
    
    return 0;
}