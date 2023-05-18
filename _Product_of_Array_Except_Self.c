#include<stdio.h>

int main(){
    
    int n,i,j,pro;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        pro=1;
        for(j=0;j<n;j++){
            if(i==j) continue;
            else pro*=a[j];
        }
        printf("%d ",pro);
    }
    
    return 0;
}