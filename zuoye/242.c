#include<stdio.h>
int main(void)
{
	int i,j;
	int  a[5][5]={{1,6,2,3,7},
		{2,7,3,2,2},
		{3,2,5,2,6},
		{3,2,6,4,2},
		{4,3,7,4,8}};
	char tmp[5][5];
	for(i=0;i < 5;i++)
		for(j=0;j < 5;j++)
		{
			tmp[j][i] = a[i][j];
		}

	for(i=0;i < 5;i++)

	{
		for(j=0;j< 5;j++)
			printf("%4d",tmp[i][j] );
		printf("\n");
	}
	//printf("%d\n",&a[j]);
	//printf("%d\n",&a[i]);
	return 0;
}
