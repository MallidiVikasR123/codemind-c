#include<stdio.h>

int main(){

    int n,i,max=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    while(1){
        c=0;
        for(i=0;i<n;i++) if(max%a[i]==0) c++;
        if(c==n) break;
        max++;
    }
    printf("%d",max);


    return 0;
}