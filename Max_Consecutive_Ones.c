#include<stdio.h>

int main(){

    int n,c,k=0,i;
    scanf("%d",&n);
    int a[n];
    c=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1) c++;
       else{
           if(k<c) k=c;
           c=0;
       }
    }
    if(k<c) k=c;
    printf("%d",k);
    return 0;
}