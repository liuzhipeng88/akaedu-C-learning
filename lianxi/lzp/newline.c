#include<stdio.h>
void newline(void)
{
	printf("\n");
}
void shreeline(void)
{
	newline();
	newline();
	newline();
}
int main(void)
{

	printf("Fit Line.\n");
	shreeline();
	printf("Another three lines.\n");
	return 0;
}
