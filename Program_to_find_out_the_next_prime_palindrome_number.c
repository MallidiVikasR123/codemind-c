#include<stdio.h>

int main(){
    
    int n,i,temp,count=0,rem,rev=0;
    scanf("%d",&n);
    while(1){
        count=0;
        rev=0;
        temp=++n;
        for(i=1;i<=n;i++){ 
            if(n%i==0){
                count++;
            }
        }
        if(count==2){
            while(temp){
                rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }
        if(n==rev) break;
        }
    }
    printf("%d",rev);
    
    return 0;
}