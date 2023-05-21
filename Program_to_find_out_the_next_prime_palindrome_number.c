#include<stdio.h>
int palindrome(int x);
int prime(int x);
int main()
{
    int n,i,cnt=0,j,x,res;
    scanf("%d",&n);
    for(i=n+1;i<n*20;i++){
        x=palindrome(i);
        if(x==1)
        {
            res=prime(i);
            if(res==1)
            {
                printf("%d",i);
                break;
            }
        }
    }
}
int palindrome(int x)
{
    int y=x,rem,rev=0;
    while(y!=0)
    {
       rem=y%10;
       rev=rev*10+rem;
       y/=10;
    }
    if(rev==x)return 1;
    else return 0;
}
int prime(int x)
{
    int i,cnt=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)cnt++;
    }
    if(cnt==2)return 1;
    else return 0;
}