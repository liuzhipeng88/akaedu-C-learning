// 自己实现strcpy的功能！
#include <stdio.h>

char *mystrcpy(char * buf, char *str)
{
	char *tmp = buf;

//	for(;(*buf++ = *str++) != 0;)
//		;
	while(*buf++ = *str++)
	;		
	return tmp;
}

int main(void)
{
	char str[20] = "hello,akaedu";
	char buf[20] = {0};

	printf("%s\n",mystrcpy(buf,str));
	return 0;
}
