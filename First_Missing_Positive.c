#include<stdio.h>

int main(){
    
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(j=1;;j++){
        k=0;
        for(i=0;i<n;i++){
            if(a[i]==j){
                k++;
                break;
            }
        }
        if(k==0){
            printf("%d",j);
            break;
        }
    }
    
    return 0;
}