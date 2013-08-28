#include <stdio.h>

//#define DEBUG

int main(void)
{
#ifndef DEBUG
	printf("1 debuf info...\n");
#endif
	
#if DEBUG
	printf("2 debuf info...\n");
	
#else MAX
	printf("3 debuf info...\n");

#endif

	return 0;
}
