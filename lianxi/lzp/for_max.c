#include<stdio.h>
//#define N 10

int main(void)
{
	int num[10]={12,6,34,65,67,87,89,100,1,66};
	int i,max = 0;

	for(i=0;i<10;i++)
	{
		if(max<num[i])
		{
			max = num[i];
		}
	}
	printf("max is %d\n",max);
	return 0;
}

