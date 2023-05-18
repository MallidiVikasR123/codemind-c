#include<stdio.h>

int main(){
    
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=a[i-1]+a[i-2];
        a[0]=0;
        a[1]=1;
        printf("%d ",a[i]);
    }
    
    return 0;
}