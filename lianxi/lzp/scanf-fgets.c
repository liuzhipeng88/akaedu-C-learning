#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[64];
	int len;

	fgets(str,64,stdin);
	len = strlen(str);
	str[len-1] = '\0';
//	scanf("%s\n",str);
	printf("<%s>\n",str);


	return 0;
}
