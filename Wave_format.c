#include<stdio.h>

int main(){
    
    int n,i,j;
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
    for(i=1;i<n;i+=2){
        a[i-1]+=a[i];
        a[i]=a[i-1]-a[i];
        a[i-1]-=a[i];
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}