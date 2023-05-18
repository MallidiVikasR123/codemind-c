#include<stdio.h>

int main(){
    
    int n,i,j,c=0,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                a[i]+=a[j];
                a[j]=a[i]-a[j];
                a[i]-=a[j];
            }
        }
    }
    max=a[0];
    for(i=0;i<n;i++) if(a[i]<max){
        max=a[i];
        c++;
        if(c==2) break;
    }
    if(c==2) printf("%d",max);
    else printf("%d",a[0]);
    
    return 0;
}