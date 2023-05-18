#include<stdio.h>

int main(){
    
    int n,i,c,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        c=0;
        scanf("%d",&a[i]);
        while(a[i]){
            a[i]/=10;
            c++;
        }
        if(c%2==0) k++;
    }
    printf("%d",k);
    
    return 0;
}