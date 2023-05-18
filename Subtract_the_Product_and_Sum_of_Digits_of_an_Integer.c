#include<stdio.h>

int main(){
    
    int n,r,sum=0,pro=1;
    scanf("%d",&n);
    while(n){
        r=n%10;
        sum+=r;
        pro*=r;
        n/=10;
    }
    printf("%d",(pro-sum));
    return 0;
}