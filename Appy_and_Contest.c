#include<stdio.h>
int main()
{
    int n,a,b,k,tc,i,u;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        u=(n/a)+(n/b);
        if(u>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
}