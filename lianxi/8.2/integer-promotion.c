#include <stdio.h>

int main(void)
{
	//	unsigned char c = 0xfc;
	//	unsigned int i = ~c;
		char c = 0xfc;
	int i = ~c;

	printf("demo promotion!\n");

	//	for(c = 0x0; c < 0xff; c++)

	printf("c= 0x%x, i = 0x%x\n", c, i);


	return 0;
}

