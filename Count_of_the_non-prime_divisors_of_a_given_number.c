#include<stdio.h>

int main(){

    int n,i,j,pd=0,npd,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            d++;
            for(j=2;j<=i;j++) if(i%j==0) break;
            if(i==j) pd++;
        }
    }
    npd=d-pd;
    printf("%d",npd);

    return 0;
}