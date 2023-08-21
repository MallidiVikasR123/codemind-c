#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int c=0,c1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                c+=a[i][j];
            }
            else if(i%2==1)
            {
                c1+=a[i][j];
            }
        }
    }
    printf("%d %d",c,c1);
}
