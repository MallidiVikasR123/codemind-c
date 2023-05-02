#include<stdio.h>

int main(){

    int n,fact=1,sum=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        while(rem>0){
            fact*=rem;
            rem--;
        }
        sum+=fact;
        n/=10;
        fact=1;
    }
    if(sum==temp) printf("The number %d is a strong number",temp);
    else printf("The number %d is not a strong number",temp);

    return 0;
}