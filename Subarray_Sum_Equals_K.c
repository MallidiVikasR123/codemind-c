#include<stdio.h>

int main(){

    int n,m,i,j,k,c=0,sum;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(k=1;k<=n;k++){
        for(i=0;i<=n-k;i++){
            sum=0;
            for(j=i;j<i+k;j++){
                sum+=a[j];
            }
            if(sum==m) c++; 
        }
    }
    printf("%d",c);

    return 0;
}