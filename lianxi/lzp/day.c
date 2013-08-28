#include<stdio.h>

int dm(int year,int month, int day)
{
	int flag=0;
	if((year%4==0 && year%100!=0) || (year%400==0))
		flag = 1;
	else
		flag =0;
	int a=0;
	switch(month-1)
	{
		case 11 :a+=30;
		case 10 :a+=31;
		case 9 :a+=30;
		case 8 :a+=31;
		case 7 :a+=31;
		case 6 :a+=30;
		case 5 :a+=31;
		case 4 :a+=30;
		case 3 :a+=31;
		case 2 :a+=28+flag;
		case 1 :a+=31;break;
		default :printf("Please input others\n");
	}
	a +=day;
	printf("%d%d\n",a,year);
}
int main()
{
	int day,month,year;
	printf("请输入年月日:\n");
	scanf("%d.%d.%d",&year,&month,&day);
	dm(year,month,day);
	return 0;

}
