#include<stdio.h>
#include<ctype.h>

int main(){

    int i,j,c=0;
    char a[100];
    c=0;
    scanf("%s",a);
    for(j=0;a[j]!=NULL;j++) if(isdigit(a[j])!=0) c++;
    if(c==0) printf("Doesn't contain digit");
    else printf("Contains %d digit",c);

    return 0;
}