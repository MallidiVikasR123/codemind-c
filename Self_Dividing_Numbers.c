#include<stdio.h>
#include<math.h>

int main()
{
    int r,a,t,b,s,i,c=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        t=i;
        while(t){
            r=t%10;
            if(r==0) break;
            else if(i%r==0){
            t/=10;}
            else if(i%r!=0){
                break;
            }
            if (t==0) printf("%d ",i);
        }
    }
}