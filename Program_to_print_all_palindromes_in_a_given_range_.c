#include<stdio.h>

int main(){
    
    int l,u,rev=0,r,i,t;
    scanf("%d %d",&l,&u);
    for(i=l;i<=u;i++){
        rev=0;
        t=i;
        while(t){
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        if(rev==i) printf("%d ",i);
    }
    
    return 0;
}