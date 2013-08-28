//编写程序检查某一个整数中是否有重复的数字，如检查2823中存在重复数字2

#include <stdio.h>
#include <string.h>

void find_num(int n)
{
	int i,j;
	int k = 0,l = 0;
	int len = 0;
	char str[128];
	char tmp[32];

	while(1){
		str[k++] = (n % 10);
		n =  n/10;
		if(n == 0)
			break;
	str[k] = '\0';
	}
	printf("%s\n",str);
	len = strlen(str);
	for(i = 0; i < len; i++){
		for(j = i+1; j < len; j++)
		{
			if(str[i] ==str[j])
				tmp[l++] = str[i];
		}
	}
	tmp[l] = '\0';
	if(l == 0)
		printf("没有重复数字！\n");
	else 
		printf("tmp = %s\n",tmp);
}
int main(void)
{
	int n;
	printf("输入一个整数\n");
	scanf("%d",&n);

	find_num(n);

	return 0;
}
