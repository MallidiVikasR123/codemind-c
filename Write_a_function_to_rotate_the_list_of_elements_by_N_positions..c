#include<stdio.h>

int main(){
    
    int n,i,j,k;
    scanf("%d",&n);
    int a[n],t[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        t[0]=a[n-1];
        for(j=0;j<n;j++){
            t[j+1]=a[j];
            a[j]=t[j];
        }
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    
    return 0;
}