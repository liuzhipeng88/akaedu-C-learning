#include<stdio.h>
int main(void)
{
	int i,n,k,j;
	printf("请输入三角形高度\n");
	scanf("%d",&n);
	for(i=0;i <n ;i++)
	{
		if(i >= n)
			break ;
		else
			k = i + 1;
		for(j = k;j<n;j++)
			printf(" ");

		for(j = 0;j < k;j++)
			printf(" *");

		printf("\n");
	}
	return 0;
}
