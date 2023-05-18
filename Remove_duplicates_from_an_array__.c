#include<stdio.h>

int main(){

    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]=='x') continue;
        for(j=0;j<n;j++){
            if((i!=j) && (a[i]==a[j])) a[j]='x';
        }
    }
    for(i=0;i<n;i++) if(a[i]!='x') printf("%d ",a[i]);

    return 0;
}