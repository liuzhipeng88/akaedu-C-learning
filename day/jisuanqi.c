#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main(void) 
{
	int a, b,res;
	scanf("%d\n%d",&a,&b);
	res = add( a, b);
	//int add(int a,int b);
	printf("%d + %d = %d\n",a,b,res);
	return 0;
}
