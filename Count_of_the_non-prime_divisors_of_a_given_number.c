#include<stdio.h>
int prime(int i);
int main()
{
    int n,i,cnt=1,x;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            x=prime(i);
            if(x==0)cnt++;
        }
    }
    printf("%d",cnt);
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