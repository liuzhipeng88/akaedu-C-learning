#include<stdio.h>
int main(void)
{
	int yy,mm,dd;
	scanf("%d/%d/%d/",&mm,&dd,&yy);
	printf("%.4d%.2d%.2d\n",yy,mm,dd);
	return 0;
}
