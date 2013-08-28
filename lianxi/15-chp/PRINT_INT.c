#include <stdio.h>

#define DEBUG(x)  printf(#x "is int ,volue is" #x" = %d 2*=" #x"%d\n",x,2*(x))

int main(void)
{
	int a = 100;
	int b = 200;
	int c = 300;

	DEBUG(a);
	DEBUG(b);
	DEBUG(c);
	DEBUG((a+b));

	return 0;
}
