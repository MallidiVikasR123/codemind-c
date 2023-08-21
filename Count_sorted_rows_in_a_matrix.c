#include<stdio.h>
int main()
{
    int n,m,i,j,c=0,s=0,co=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(a[i][j]<a[i][j+1])
            {
                c++;
            }
        }
        if(c==m-1)
        {
            s++;
        }
        c=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(a[i][j]>a[i][j+1])
            {
                c++;
            }
        }
        if(c==m-1)
        {
            s++;
        }
        c=0;
    }
    printf("%d",s);
}
