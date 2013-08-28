//编写函数把任意十进制的正整数转换为二进制，主函数调用该函数完成整数的二进制形式输出，要求不能按逆序输出.

#include <stdio.h>

void octber_binary(int num)
{
	int buf[16];
	//	int str[16];
	int i = 0;

	for(i = 0; num != 0; i++){
		buf[i++] = num % 2;
		num = num / 2;
	}
	printf("%d\n",buf[i]);
}


int main(void)
{
	int num;

	scanf("%d",&num);
	octber_binary(num);

	return 0;
}
