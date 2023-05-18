#include<stdio.h>

int main(){
    
    int n,a=0,b=1,c=0,i;
    scanf("%d",&n);
    for(i=1;c<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n) printf("True");
    else printf("False");
    
    return 0;
}