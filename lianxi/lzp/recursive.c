#include<stdio.h>
int tmp(int n)
{
	if(n==1)
		return 1;
		return n *tmp(n-1);
}
int main(void)
{
	int res;
	int n=0;
	scanf("%d",&n);
	res = tmp(n);
	printf("%d\n",res);
	return 0;
}
