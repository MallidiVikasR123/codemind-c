#include<stdio.h>

int main(){

    int n,i,min,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0) min=a[0];
        if(a[i]<min) min=a[i];
    }
    while(1){
        c=0;
        for(i=0;i<n;i++) if(a[i]%min==0) c++;
        if(c==n) break;
        min--;
    }
    printf("%d",min);


    return 0;
}