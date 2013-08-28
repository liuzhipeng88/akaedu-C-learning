#include<stdio.h>
int main(void)
{
	int a, b;
	char ch;
	float f;
	char str[10] = "hello";
	printf("%s\n",str);
	printf("str=%p\n",str);
	printf("str[0]=%c\n",str[0]);
	printf("&str[0]=%p\n",&str[0]);
	return 0;
}
