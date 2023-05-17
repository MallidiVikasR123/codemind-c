#include<stdio.h>

int main(){
    
    int n,t,r,i,rev=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        rev=0;
        t=a[i];
        while(t){
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        if(rev==a[i]) printf("True
");
        else printf("False
");
    }
    return 0;
}