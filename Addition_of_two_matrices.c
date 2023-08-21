#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=abs(a[i][j]+b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("
");
    }
    
}