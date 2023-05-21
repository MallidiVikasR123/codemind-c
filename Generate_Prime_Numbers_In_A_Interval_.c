#include<stdio.h>
int prime(int n);
int main()
{
    int i,x,a,b;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        x=prime(i);
        if(x==1)
        {
            if(i==b)
            {
                printf("%d",i);
            }
            else printf("%d
",i);
        }
    }
}
int prime(int n)
{
    int i,cnt=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)cnt++;
    }
    if(cnt==1)return 1;
    else return 0;
}