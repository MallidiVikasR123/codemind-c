#include<stdio.h>

int main(){
    
    int n,i,c=0,ec=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2==0 && a[i]%2==0) ec++;
        if(a[i]%2==0) d++;
    }
    if(d==ec) printf("True");
    else printf("False");
    
    return 0;
}