#include<stdio.h>
int main()
{
    long int t,i,j,n,m;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&n,&m);
        for(j=0;j<m+n;j++)
        {
            if((j*j)%m==n)
            {
                printf("%ld
",j);
                goto x;
            }
        }
        printf("-1
");
        x:;
    }
    
}