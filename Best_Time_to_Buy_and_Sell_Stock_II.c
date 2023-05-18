#include<stdio.h>

int main(){

    int n,i,pro=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        if(a[i-1]<a[i]) pro+=a[i]-a[i-1];
    }
    printf("%d",pro);

    return 0;
}