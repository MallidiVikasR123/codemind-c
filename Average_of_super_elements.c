#include<stdio.h>

int main(){
    
    int n,i,j,c,ec=0;
    scanf("%d",&n);
    float a[n],avg=0;
    for(i=0;i<n;i++) scanf("%f",&a[i]);
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
                if(i!=j) a[j]=0;
            }
        }
        if(c==a[i]){
            avg+=a[i];
            ec++;
        }
    }
    if(ec>0){
        avg/=ec;
        printf("%.2f",avg);
    }
    else printf("-1");
    
    return 0;
}