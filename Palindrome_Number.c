#include<stdio.h>

int main(){
    
    int n,i,rev,temp,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        rev=0;
        temp=a[i];
        while(a[i]){
            r=a[i]%10;
            rev=rev*10+r;
            a[i]/=10;
        }
        if(temp==rev) printf("True
");
        else printf("False
");
    }
    
    return 0;
}