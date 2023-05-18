#include<stdio.h>
int main(){
    
    int n,i,j,k,l,r,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&l,&r);
        int a[l],b[r],c[l+r];
        for(j=0;j<l;j++){
            scanf("%d",&a[j]);
            c[j]=a[j];
        }
        for(j=0;j<r;j++){
            scanf("%d",&b[j]);
            c[j+l]=b[j];
        }
        for(j=0;j<l+r;j++){
            for(k=j+1;k<l+r;k++){
                if(c[j]>c[k]){
                    c[j]+=c[k];
                    c[k]=c[j]-c[k];
                    c[j]-=c[k];
                }
            }
        }
        for(j=0;j<l+r-1;j++) printf("%d ",c[j]);
        printf("%d",c[j]);
        printf("
");
    }
    
    return 0;
}