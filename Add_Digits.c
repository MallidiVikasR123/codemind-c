#include<stdio.h>
int main(){
    
    int n,sum=10;
    scanf("%d",&n);
    while(sum>9){
        sum=0;
        while(n){
            sum+=(n%10);
            n/=10;
        }
        n=sum;
    }
    printf("%d",sum);
    
    return 0;
}