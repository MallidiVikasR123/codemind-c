#include<stdio.h>

int main(){
    
    int x,y;
    scanf("%d %d",&x,&y);
    if((x!=0 && x%2==0)|(x==0 && y%2==0)) printf("YES");
    else printf("NO");
    
    return 0;
}