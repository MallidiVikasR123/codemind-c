#include<stdio.h>

int main(){
    
    int n,max=0;
    scanf("%d",&n);
    while(n){
        if(max<n%10) max=n%10;
        n/=10;
    }
    printf("%d",max);
    
    return 0;
}