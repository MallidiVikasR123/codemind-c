#include<stdio.h>
int main()
{
    int n,rem,rev=0,rem1,rev1=0;
    scanf("%d",&n);
    int a=n*n;   
    int t=n;
    while(t!=0)   
    {
        rem=t%10;
        rev=rev*10+rem;
        t=t/10;
    }
    int b=rev*rev;  
   
    while(b!=0) 
    {
        rem1=b%10;
        rev1=rev1*10+rem1;
        b=b/10;
    }
     
    if(rev1==a)     
    {
        printf("True");   
    }
    else
    {
        printf("False");
    }
}