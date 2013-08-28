#include<stdio.h>
#include<string.h>
int main(void)
{
	int str[100] = {0};
	int i,j,k,n,max,min;
	int num;
	scanf("%d", &num);
	for(n=0;n < num;n++)
		scanf("%d",&str[n]);
		j = k = 0;
		max = str[0];
		min = str[0];
	for(i=0;i < num;i++)
		if(str[i] < min)
		{
			min = str[i];
			j=i;
		}
		else if(str[i] > max)
		{
			max = str[i];
			k=i;
		}
	printf("%d   %d\n",max,k);
	printf("%d   %d\n",min,j);

	return 0;
}
