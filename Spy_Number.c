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
 if(c==s)
   printf("Spy Number");
 else printf("Not Spy Number");        
} 