//编写函数调用随机数生成函数产生0到19之间的数，在数组中存入15个互不相同的数；
//随机数生成例程：template.c

#include <stdio.h>

int main(void)
{
	int i,j;
	int num[15] = {0};
	int tmp;

	srand(time(NULL));
	for(i = 0; i < 15; i++){
		num[i] = rand() % 20;
		for(j = 0; j < i; j++){
			if(num[i] == num[j])
				i--;
		}
	}

	for(i = 0; i < 15; i++){
		for(j = 1;j < 15;j++){
			if(num[j -1] > num[j]) {
				tmp = num[j-1];
				num[j-1] =num[j];
				num[j] = tmp;
			}
		}
	}

	for(i = 0; i < 15; i++){
	printf("%d,",num[i]);
	}
	printf("\n");

	return 0;
}
