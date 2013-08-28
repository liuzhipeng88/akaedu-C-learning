#include<stdio.h>
int main(void)
{
	char str[3][100];
	int i;
    char ch;
	for(i = 0;i < 3;i++)
	{
		scanf("%s",str[i]);
		scanf("%c",&ch);
	}
	for(i = 0;i < 3;i++)
		printf("%s\n",str[i]);
		return 0;
}
