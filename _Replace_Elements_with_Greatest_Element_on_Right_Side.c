#include<stdio.h>

int main(){

    int n,i,j,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(i==n-1) a[i]=-1;
        else{
            max=a[i+1];
            for(j=i+1;j<n;j++) if(max<a[j]) max=a[j];
            a[i]=max;
        }
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);

    return 0;
}