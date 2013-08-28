#include<stdio.h>
#include<string.h>

char str[4] = "hello";
char tmp[6] = "world";

int main(void)
{
//	char str[5] = "hello";
	int len;
	len = strlen(str);

	printf("%s\n",str);

//	printf("%d\n",len);
//	printf("%d\n",sizeof(str));

	return 0;
}
