#include<stdio.h>

int main(){
    
    int n,i=1;
    scanf("%d",&n);
    if(n>=1 && n<=10000) goto x;
    else{
        printf("The Number Series is Not Possible Print");
        return 0;
    }
    x:
    if(i<=n){
        printf("%d ",i++);
        goto x;
    }
    
    return 0;
}