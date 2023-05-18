#include<stdio.h>

int main(){
    
    int n,r,fact=1,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n){
        fact=1;
        r=n%10;
        while(r) fact*=(r--);
        sum+=fact;
        n/=10;
    }
    if(temp==sum) printf("The number %d is a strong number",temp);
    else printf("The number %d is not a strong number",temp);
    
    
    return 0;
}