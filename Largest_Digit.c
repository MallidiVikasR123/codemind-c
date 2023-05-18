#include<stdio.h>

int main(){
    
    int n,max=0;
    scanf("%d",&n);
    while(n){
        if(n%10>max) max=max=n%10;
        n/=10;
    }
    printf("%d",max);
    
    return 0;
}