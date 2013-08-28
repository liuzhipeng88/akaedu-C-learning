#include<stdio.h>
struct  STU
{
	char name[20];
	int id;
	char sex;
};
int main(void)
{
	struct STU p[3];
	int i;
	char ch;

	for(i=0;i<3;i++)
		scanf("%s%c%d%c%c%c",p[i].name,&ch,&p[i].id,&ch,&p[i].sex,&ch);
/*	{
		scanf("%s%c",p[i].name,&ch);
		scanf("%d%c",&p[i].id,&ch);
		scanf("%c%c",&p[i].sex,&ch);
	}*/
	for(i=0;i<3;i++)
/*	{
		printf("%s",p[i].name);
		printf("%d",p[i].id);
		printf("%c",p[i].sex);

	printf("\n");
	}*/
	printf("%s%d%c\n",p[i].name,p[i].id,p[i].sex);
	return 0;
}
