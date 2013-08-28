#include <stdio.h>

int main(void)
{
	int i = 1;
	int  *p = &i;
	int  *q;
	 
	q = p;

	printf("%d\n",*p);
	printf("%d\n",*q);

	return 0;
}
