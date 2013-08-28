#include<stdio.h>
int main(void)
{
	int a[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,yy,mm,dd,sum=0; //i年j月k日
	printf("请输入年月日:\n");
	scanf("%d/%d/%d",&yy,&mm,&dd);
	if(dd>31)
		printf("输入错误:\n");
	if(yy%4==0&&(yy%400==0 ||yy%100!=0))
		a[2]=29;
	else
		a[2]=28;
	for(i=0;i<mm;i++)
	{
		sum +=a[i];
	}
	sum = dd+sum;
	printf("这次本年的第:%d\n",sum);
	return 0;
}
