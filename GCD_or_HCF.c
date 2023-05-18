#include<stdio.h>

int main(){
    
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    while(1){
        if(max%a==0 && max%b==0){
            break;
        }
        max++;
    }
    printf("%d",(a*b)/max);
    
    return 0;
}