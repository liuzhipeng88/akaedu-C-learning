#include<stdio.h>
int factorial(int n)
{
	if(n == 1)
		return 1;
		else
		return n + factorial(n-1);
}
int main(void)
{
	int res,n=0;
	scanf("%d",&n);
	res=factorial(n);
	printf("%d\n",res);
	return 0;
}
