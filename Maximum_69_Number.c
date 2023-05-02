#include<stdio.h>
int main()
{
    int n,r=0,s=0,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=r*10+(n%10);
        n/=10;
    }
    while(r!=0)
    {
        if(r%10==6&&c==0)
        {
            s=s*10+9;
            c++;
        }
        else
        {
            s=(s*10)+(r%10);
        }
        r/=10;
    }
    printf("%d",s);
    return 0;
}