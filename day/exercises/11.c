//判断输入的字符串是否为回文字符串；（提示：回文顺读倒读都一样，例如：12321，abcba）

#include <stdio.h>
#include <string.h>
void decide_ch(char str[])
{
	int len = 0;
	int i = 0;
	int count = 0;

	len = strlen(str);
	for(i = 0; i < len/2; i++){
		if(str[i] == str[len-i-1])
			count++;
		}
		if(count == (len/2))
			printf("输入是回文字符串！\n");
		else
			printf("输入的不是回文字符串！\n");
}

int main(void)
{
	char str[32];

	printf("输入一个字符串：\n");
	scanf("%s",str);
	
	decide_ch(str);
	return 0;
}
