#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int l,j,k;
        scanf("%d",&l);
        char a[l];
        scanf("
%[^
]s",a);
        int count,res=0;
        for(k=0;k<l;k++)
        {
            count=0;
            for(j=0;j<l;j++)
            {
                if(a[k]==a[j] && k!=j) count++;
            }
            if(count==0)
            {
                printf("%c",a[k]);
                break;
            }
            else if(count!=0) res++;
        }
        if(res==l) {printf("-1");}
        printf("
");
     }
}