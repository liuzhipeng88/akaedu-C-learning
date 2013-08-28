//实现一个函数，它能根据参数进行加法，减法，乘法，除法，取模运算（建议采用switch语句）

#include <stdio.h>

void num_operation(int a,char ch,int b)
{
	int add = 0,sub = 0;
	int mul = 0,div = 0,mod = 0;

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	switch(ch)
	{
		case '+':
			printf("add = %d\n",add);
			break;			
		case '-':
			printf("sub = %d\n",sub);
			break;
		case '*':
			printf("mul = %d\n",mul);
			break;
		case '/':
			printf("div = %d\n",div);
			break;
		case '%':
			printf("mod = %d\n",mod);
			break;
		default:
			printf("输入错误\n");
			break;
	}
}

int main(void)
{
	int a,b;
	char ch;

	printf("请输入运算：\n");
	scanf("%d%c%d",&a,&ch,&b);

	num_operation(a,ch,b);


	return 0;
}

