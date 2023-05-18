#include<stdio.h>

int main(){
    
    int n,i,temp,fact=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        fact=1;
        while(a[i]) fact*=(a[i]--);
        printf("%d
",fact);
    }
    
    return 0;
}