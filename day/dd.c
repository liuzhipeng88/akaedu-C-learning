#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,len;
	char str[100];
	scanf("%s",str);
	len = strlen(str);
	for(i=0;i<len;i++)
	if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
	printf("%c",str[i]);

	printf("\n");
	return 0;
}
