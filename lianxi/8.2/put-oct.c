#include<stdio.h>

void put_oct(int oct)
{
	char octs[8] = "01234567";
	printf("%c",octs[oct]);

	return ;
}

void put_int_oct(int num)
{
	int i;

	putchar('0');
	for(i = 10;i >= 0; i--)
		put_oct(num >>(3 * i)&0x7);
		putchar('\n');

		return ;
}

int main(void)
{
	int num;
	
	printf("输入一个数：\n");
	scanf("%d",&num);
	put_int_oct(num);
	put_oct(num);

	return 0;
}
