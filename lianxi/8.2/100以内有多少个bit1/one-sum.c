#include <stdio.h>
/*
int one_sum(int n)
{
	int count=0;
	while(n)
	{
		n = n & (n-1);
		count++;
	}

	return count;
}


int main(void)
{
	int i,n,res=0;
	for(i = 0; i <= 100; i++)
		res += one_sum(i);
		printf("%d\n",res);

		return 0;
}	*/
int one_sum(int num)
{
	int  A = 0x55555555, B = 0x33333333;
	int  C = 0x0f0f0f0f, D = 0x00ff00ff;
	int  E = 0x0000ffff;
	
	num = (num & A)+((num>>1)&A);
	num = (num & B)+((num>>2)&B);
	num = (num & C)+((num>>4)&C);
	num = (num & D)+((num>>8)&D);
	num = (num & E)+((num>>16)&E);

	return num;
}

int main(void)
{
	int i,n,res = 0;
	scanf("%d",&n);
	for(i = 0;i <= n; i++)
		res += one_sum(i);

		printf("%d\n",res);

		return 0;

}
