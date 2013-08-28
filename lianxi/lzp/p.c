#include<stdio.h>
union AA
{
	char a;
	int b;
	char c[10];
}item;
int main(void)
{
	printf("%d\n",sizeof(union AA));
	printf("%d\n",sizeof(item));
	return 0;
}
