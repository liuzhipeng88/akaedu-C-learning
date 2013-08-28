#include <stdio.h>

int count_bit_1(int num)
{
	int counter = 0;
	int pos;
	for(pos = 0;pos < 32;pos++ )
		if(num & (1<<pos))
			counter++;

	return counter;
}

int main(void)
{
	int res = 0;
	int i;
	printf("demo count bit1 \n");
	for(i = 0; i <= 100;i++)
	res += count_bit_1(i);

	printf("100 has %d bit 1\n",res);

	return 0;
}
