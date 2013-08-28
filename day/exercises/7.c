//统计一个自然数的二进制表示形式有多少个1；
//方法一：
#include <stdio.h>

int main(void)
{
	int n;
	int count = 0;

	printf("输入一个自然数：\n");
	scanf("%d",&n);

	while(1)
	{
		n = (n & (n-1));
		count++;
		if(n == 0)
			break;
	}
	printf("%d\n",count);

	return 0;
}


