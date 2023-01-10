#include<stdio.h>
int main(){
    int n,k,m,b,p;
    scanf("%d %d %d",&n,&k,&m);
    p=n/m;
    if(n%m!=0) p++;
    b=p/k;
    if(p%k!=0) b++;
    printf("%d",b);
}