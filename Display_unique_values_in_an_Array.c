#include<stdio.h>

int main(){
    
    int n,i,j,k,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<n;j++) if(a[i]==a[j]) k++;
        if(k==1){
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0) printf("%d",-1);
    
    return 0;
}