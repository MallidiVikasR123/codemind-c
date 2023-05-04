#include<stdio.h>

int main(){

    int n,rem=0,count=0,pcount=0,tcount=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    while(n>0){
        rem=n%10;
        n/=10; 
        if(rem==2||rem==3||rem==5||rem==7){
            pcount++;
        }
        tcount++;
    }
    if(count==2&&(pcount==tcount)) printf("Mega Prime");
    else printf("Not Mega Prime");

    return 0;
}