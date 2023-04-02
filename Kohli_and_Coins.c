#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a%10==0)
    {
        printf("%d",a/10);
    }
    else if(a%5==0)
    {
        b=a%10;
        printf("%d",(b/5)+a/10);
    }
    else
    {
        printf("-1");
    }
}