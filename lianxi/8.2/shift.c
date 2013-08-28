#include <stdio.h>

int main(void)
{
//	unsigned char c = 0xfc;
//	unsigned int i = ~c;
	char c = 0x80;
//	unsigned char c = 0x80;
	//int i = ~c;

	printf("demo promotion!\n");

		printf("c= 0x%x\n", c);
		printf("c>>1 = 0x%x\n",c>>1);

	return 0;
}

