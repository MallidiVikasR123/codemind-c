#include<stdio.h>

int main(){
    
    int a,b,n=0,i,j;
    scanf("%d %d",&a,&b);
    for(i=a+b+1;;i++){
        n++;
        for(j=2;j<i;j++) if(i%j==0) break;
        if(i==j) break;
    }
    printf("%d",n);
    
    return 0;
}