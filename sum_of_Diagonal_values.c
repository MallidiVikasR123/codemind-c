#include<stdio.h>
int main()
{
    int n,m,i,j,c=0,z=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if(i==j)
            {
                c+=a[i][j];
            }
            else if(i+j==n-1 && i!=j)
            {
                c+=a[i][j];
            }
        }
    }
    printf("%d ",c);
    
}