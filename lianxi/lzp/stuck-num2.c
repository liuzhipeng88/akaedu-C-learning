#include<stdio.h>
struct STU
{
	char c[10];
	short a;
	char b;
	char d[16];
	int f;
	short g;
	int e;
};
int main(void)
{
	printf("%d\n",sizeof(struct STU));
	return 0;
}
