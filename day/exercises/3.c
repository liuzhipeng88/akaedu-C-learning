//从键盘输入两个数，计算这两个数的最大公约数。
/*  以下程序求得是约数
#include <stdio.h>

int main(void)
{
int a = 0,str[32];
int b = 0,tmp[32];
int n = 1,j = 0;
int m = 1,i = 0;

printf("输入两个数字：\n");
scanf("%d%d",&a,&b);
{
printf("a的约数是:\n");
for(n = 1; n <= a; n++){
if(a % n == 0){
str[i] = n;
printf("%d\t",str[i]);
i++;
}
}
printf("\n");

printf("b的约数是：\n");
for(m = 1; m <= b; m++){
if(b % m == 0){
tmp[j] = m; 
printf("%d\t",tmp[j]);
j++;
}
}
printf("\n");
}

return 0;
}*/


#include <stdio.h>

int main(void)
{
	int a,b,n;
	int max = 1;
	int min = 0;
	printf("请输入两个数：\n");
	scanf("%d%d",&a,&b);

	min =a;
	if(a > b)
		min = b;

		for(n = 1; n <= min; n++){
		if(a %n ==0 && b % n == 0)
			max = n;
		}

	printf("%d\n",max);
}


