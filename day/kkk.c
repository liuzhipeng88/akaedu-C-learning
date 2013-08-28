#include<stdio.h>
int main(void)
{
	float a,b;
	char  d;
	printf("Please inpu a&b\n");
	scanf("%f%c%f",&a,&d,&b);
	switch(d)
	{
		case '+':
			printf("%f\n",a+b);
		break;
		case '-':
			printf("%f\n",a-b);
		break;
		case '*':
			printf("%f\n",a*b);
		break;
		case '/':
			printf("%f\n",a/b);
		break;
		default:
		printf("input error\n");
	}
	return 0;
}
