#include<stdio.h>
int main(void)
{
	int i,b,c,f;
	int a[1000];
	printf("请输入产生的随机数及范围：");
	scanf("%d%d~%d",&b,&c,&f);
	srand(time(NULL));
	for (i=0;i<b;i++)
	{
		a[i]=rand() % f;
		if( a[i]>c)
			a[i]=a[i];
		else
			i--;
	}
	for(i = 0;i < b;i++)
		printf("%d\n",a[i]);
	return 0;

}
