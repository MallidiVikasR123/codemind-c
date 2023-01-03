#include <stdio.h>
int main()
{
	int a,i,c=0,s=1;
	scanf("%d",&a);
	int b=a*a;
   while(b){
       i=b%10;
       b=b/10;
       c=c+i;
      
   }
 if(c==a)
   printf("Neon Number");
 else printf("Not Neon Number");        
} 