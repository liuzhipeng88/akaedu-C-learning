// 计算用1、2、3、4这四个数可以组成多少互不相同且无重复的三位数
#include <stdio.h>

int num_num(int str[],int h)
{
	int i,j,k;
	int count = 0;
	for(i = 1; i < h; i++)
		for(j = 1; j < h; j++)
			for(k = 1; k < h; k++){
				if(i != j && i != k && j != k){
					count++;
					printf("%d%d%d\t",i,j,k);
				}
			}
				printf("\n");	
	return count;
}
int main(void)
{
	int h;
	int str[4] = {1,2,3,4};
	int res = 0;

	res = num_num(str,5);
	printf("res = %d\n",res);


	return 0;
}
