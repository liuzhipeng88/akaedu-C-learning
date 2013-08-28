#include <stdio.h>

int clear_bit(int num,int pos)
{
	num &=  ~(unsigned)1 << pos;
	
	return ;
}

void set_bit(int num,int pos,int value)
{
	num = num |(1 << pos);
	printf("%d\n",num);
}

int main(void)
{
	int num,pos,value,len;
	int res = 0;

	printf("输入一个数，位数，置0/1:\n");
	scanf("%d %d %d",&num,&pos,&value);

	set_bit(num,pos,value);
	res = clear_bit(num,pos);
	printf("%d\n",res);
	
	return 0;
}
