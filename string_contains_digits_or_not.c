#include<stdio.h>
#include<ctype.h>

int main(){

    int n,i,j,k,c=0;
    scanf("%d",&n);
    char a[100];
    for(i=1;i<=n;i++){
        c=0;
        scanf("%s",a);
        for(j=0;a[j]!=NULL;j++) if(isdigit(a[j])!=0) c++;
        if(c>0) printf("Yes
");
        else printf("No
");
    }

    return 0;
}