#include<stdio.h>

int main(){
    
    int n,i,c=0,r,j;
    scanf("%d",&n);
    int l[n],u[n];
    for(i=0;i<n;i++) scanf("%d %d",&l[i],&u[i]);
    for(i=0;i<n;i++){
        for(j=l[i];j<=u[i];j++){
            if(j%10==2 || j%10==3 || j%10==9) c++;
        }
        printf("%d
",c);
        c=0;
    }
    return 0;
}