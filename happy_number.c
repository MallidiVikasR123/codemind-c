#include<stdio.h>

int main(){
    
    int n,rem,sum=10;
    scanf("%d",&n);
    while(sum>9){
        sum=0;
        while(n){
            rem=n%10;
            sum+=rem*rem;
            n/=10;
        }
        n=sum;
    }
    if(sum==1||sum==7) printf("True");
    else printf("False");
    
    return 0;
}