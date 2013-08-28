//给定某年某月某日，将其转换为这一年的第几天并输出。

#include <stdio.h>

int num_day(int yy, int mm, int dd)
{	
	int str[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int count = 0;
	if((yy % 400) == 0 || ((yy % 4) == 0 && (yy % 100) !=0))
		str[2] = 29;
		for(i = 0; i < mm; i++){
			count += str[i]; 
		}
		count = count + dd;
		return count;
}

int main(void)
{
	int yy,mm,dd;
	int res = 0;

	printf("请输入年月日：\n");
	scanf("%4d/%2d/%2d",&yy,&mm,&dd);

	res = num_day(yy,mm,dd);
	printf("这是本年的第 %d 天\n",res);

	return 0;
}
