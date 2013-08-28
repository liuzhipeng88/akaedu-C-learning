//自己编写程序实现 void itoa(int x, char *p)(提示：将数字x转换为字符串并保存到p中)

#include <stdio.h>
#include <string.h>
void itoa(int x,char *p)
{
	char tmp;
	int i = 0,len = 0,j = 0;
	while(1)
	{
		p[i++]= (x % 10) + '0';
		x = x / 10;
		if (x == 0)
			break;
	}
	p[i] = '\0';
	len = strlen(p);
	j = len - 1;
	for(i = 0;i < j; i++,j--){
		tmp = p[i];
		p[i] = p[j];
		p[j] = tmp;
	}
//	printf("%c\n",*p);  输出第一个字符
	printf("%s\n",p);  // 输出数组
}

int main(void)
{
	int x;
	char str[32];
	
	printf("输入一个数字：\n");
	scanf("%d",&x);
	itoa(x,str);

	return 0;
}
