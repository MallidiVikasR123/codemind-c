#include<stdio.h>

int main(){

    int n,temp,rem,sum=0;
    scanf("%d",&n);
    while(sum!=1 && sum!=7 && sum!=4){
        sum=0;
        temp=n;
        while(temp){
            rem=temp%10;
            sum+=rem*rem;
            temp/=10;
        }
        n=sum;
    }
    if(sum==1 || sum==7) printf("True");
    else printf("False");

    return 0;
}