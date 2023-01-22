#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n%4==0 && n%100!=0 || n%400==0)
	{
		printf("True");
	}
	else {
		printf("False");
	}
}