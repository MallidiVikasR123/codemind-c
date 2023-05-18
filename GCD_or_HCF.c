#include<stdio.h>

int main(){
    
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    while(max%a!=0 || max%b!=0) max++;
    printf("%d",(a*b)/max);
    
    return 0;
}