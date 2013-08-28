//编写函数实现以下功能：从键盘输入三个人的年龄，返回三个人的最大年龄
#include <stdio.h>

int main(void)
{
	int age[3];
	int max = 0;
	int i;

	printf("请输入三个人的年龄\n");
	for(i = 0; i < 3; i++){
		scanf("%d",&age[i]);
	}
	max = age[0];
	for(i = 1; i < 3; i++){
		if(max < age[i])
			max = age[i];
	}
	printf("max = %d\n", max);

	return 0;

}
