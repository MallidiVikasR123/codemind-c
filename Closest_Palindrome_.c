#include<stdio.h>
int main(){

    int n,r,rev,t,pre,post,i;
    scanf("%d",&n);
    t=n;
    for(i=t+1;;i++){
        rev=0;
        t=i;
        while(t){
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        if(rev==i){
            post=i;
            break;
        }
    }
    t=n;
    for(i=t-1;;i--){
        t=i;
        rev=0;
        while(t){
            r=t%10;
            rev=rev*10+r;
            t/=10;
        }
        if(rev==i){
            pre=i;
            break;
        }
    }
    if(n-pre<post-n) printf("%d",pre);
    else if(pre==post) printf("%d",n);
    else if(n-pre==post-n) printf("%d %d",pre,post);
    else printf("%d",post);
}