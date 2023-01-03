#include <stdio.h>
int main()
{
	int a,i,c=0,s=1;
	scanf("%d",&a);
   while(a){
       i=a%10;
       a=a/10;
       c=c+i;
       s=s*i;
   }
   int sol=s-c;
   printf("%d",sol);
        
} 