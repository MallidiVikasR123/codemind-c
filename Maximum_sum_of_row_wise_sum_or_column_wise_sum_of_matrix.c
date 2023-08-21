#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,c=0,z=0;
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
        for(j=0;j<m;j++)
        {
            c+=a[i][j];
        }
        if(z<c)
        {
            z=c;
        }
        c=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c+=a[j][i];
        }
        if(z<c)
        {
            z=c;
        }
        c=0;
    }
    printf("%d",z);
}