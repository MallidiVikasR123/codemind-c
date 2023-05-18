#include<stdio.h>

int main(){

    int n,i,pre,post,t,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        t=a[i];
        while(1){
            for(j=2;j<=t;j++) if(t%j==0) break;
            if(j==t){
                pre=t;
                break;
            }
            else t--;
        }
        t=a[i];
        while(1){
            for(j=2;j<=t;j++) if(t%j==0) break;
            if(j==t){
                post=t;
                break;
            }
            else t++;
        }
        if((post-a[i])<(a[i]-pre)) printf("%d
",post);
        else if((post-a[i])>=(a[i]-pre)) printf("%d
",pre);
        else if(pre==post) printf("%d
",a[i]);
    }
}