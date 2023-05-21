#include<stdio.h>
int main()
{
    int n,i,j,cnt,x=0;
    scanf("%d",&n);
    int a[n],k=0;
    a[0]=2;
    for (i=3;i<n;i++)
    {
        cnt=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)cnt++;
        }
        if(cnt==2)a[++k]=i;
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]*a[j]==n){
            printf("%d %d",a[i],a[j]);
            x++;
            break;
            }
        }
        if(x==1)
        {
            break;
        }
    }
    if(x==0)printf("-1");
}