#include<stdio.h>

int main(){
    
    int n,i,j,k,l,r,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&k,&r);
        int a[k];
        for(j=0;j<k;j++) scanf("%d",&a[j]);
        for(j=0;j<r;j++){
            t=a[k-1];
            for(l=k-1;l>=1;l--) a[l]=a[l-1];
            a[0]=t;
        }
        for(j=0;j<k-1;j++) printf("%d ",a[j]);
        printf("%d",a[j]);
        if(i<n-1) printf("
");
    }
    
    return 0;
}