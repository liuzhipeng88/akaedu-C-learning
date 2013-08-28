#include<stdio.h>

int	main(void)
{
	int a ,b, res;
	a=8;b=4;
	int sub(int a, int b)
		{	int res;

			res = a - b;
			printf("%d - %d = %d\n",a, b,res);
		}

	int add(int a, int b)
	{
		int res;

		res = a + b;
		printf("%d + %d = %d\n",a, b ,res);
	}
	int mul(int a, int b)
	{
		int res;

		res = a * b;
		printf("%d * %d = %d\n",a,b,res);
	}
	int div(int a, int b)
	{
		int res;

		res = a / b;
		printf("%d / %d =%d\n",a,b,res);
	}
	return 0;
}
