#include<stdio.h>

int main(void)
{
	printf("%.6s\n","hello world!");
	printf("%6s\n","hello world!");
	printf("%6f\n",3.14);
	printf("%.16s\n","hello world akaedu beijing");
	printf("%-16s\n","hello world!");
	
	printf("%-16s %-3d %-16s\n","hello world!",20,"henan");
	printf("%-16s %-3d %-16s\n","hello!",100,"beijing");


	return 0;
}
