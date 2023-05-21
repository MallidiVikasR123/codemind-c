#include<stdio.h>
void mega_prime(int n);
int main()
{
    int n,rem,cnt=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)mega_prime(n);
    else printf("Not Mega Prime");
}
void mega_prime(int n)
{
 int x=n,rem,i,j,size=0,cnt,res=0;
 while(x!=0)
 {
    size++;cnt=0;
     rem=x%10;
     for(i=1;i<=rem;i++)
     {
         if(rem%i==0){
             cnt++;
         }
     }
     if(cnt!=2) break;
     res++;
     x/=10;
 }
 if(size==res)printf("Mega Prime");
 else printf("Not Mega Prime");
}