//统计一下某字符串中某指定字符出现的次数

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[32];
	char tmp;
	int i = 0,len = 0,count = 0;
	
	printf("请输入字符串及字符：\n");
	scanf("%s%*c%c",str,&tmp);
	len = strlen(str);

	for(;i < len; i++){
		if(str[i] == tmp)
			count++;
	}

	printf("%d\n",count);

	return 0;
}
