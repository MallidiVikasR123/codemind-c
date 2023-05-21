#include<stdio.h>
int main()
{
    int n,i,ev=0,od=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)ev+=a[i];
        else od+=a[i];
    }
    if(ev>od)printf("%d",ev-od);
    else printf("%d",od-ev);
}