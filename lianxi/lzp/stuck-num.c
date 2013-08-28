#include<stdio.h>
struct STU
{
	char name[10];
	char sex;
	int id;
};
int main(void)
{
	printf("%d\n", sizeof(struct STU));
	return 0;
}
