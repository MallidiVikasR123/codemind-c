#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a),i,j;
    for(i=l-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            for(j=i+1;j<l;j++)
            {
                if(a[j]==' ' || a[j]==NULL) break;
                printf("%c",a[j]);
            }
                    printf(" ");
        }

    }
    for(i=0;i<l;i++)
    {
        if(a[i]==' ' || a[i]==NULL) break;
        printf("%c",a[i]);
    }
}