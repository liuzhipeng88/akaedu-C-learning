#include<stdio.h>
char *dec_to_hex(int dec,char str[])
{
	int i = 0;
	int n;
	char tmp[20];
	while(dec)
	{
		if
			(dec % 16 >= 10)

				tmp[i] = dec % 16 - 10 +'A';

		else
			tmp[i] = dec % 16 +'0';

		dec /=16;
		i++;
	}
	n = --i;
	for (;i >= 0;i--)
		str[n-i+2] = tmp[i];

	str[0] = '0';
	str[1] = 'x';
	str[n+1+2] = '\0';
	return str;
}
int main(void)
{
	char str[20];
	int dec;
	printf("请输入要转换的十进制数：\n");
	scanf("%d",&dec);
	dec_to_hex(dec,str);
	printf("%s\n",str);

	return 0;
}
