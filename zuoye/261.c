#include<stdio.h>
#include<string.h>
struct stud
{
	int id;
	char name[10];
	int s[4];
	double ave;
};
void show_stud(struct stud p[], int n)
{
	int i;
	for(i=0;i < n;i++)
		printf("%d\t%s\t%d%d%d%d\t%lf\n",p[i].id,p[i].name,p[i].s[0],p[i].s[1],p[i].s[2],p[i].s[3],p[i].ave);
}
void bubblesort_ave(struct stud p[],int n)
{
	int i,j;
	struct stud tmp;
	for(i = 0;i < 10;i++)
		for(j=1;j<10-i;j++)
			if(p[j-1].ave>p[j].ave)
			{
				tmp = p[j-1];
				p[j-1] = p[j];
				p[j] = tmp;
			}

}
void bubblesort_name(struct stud p[],int n)
{
	int a,b;
	struct stud tmp;
	for(a = 0;a < 10;a++)
		for(b = 1;b < 10-a;b++)
	if(strcmp(p[b-1].name , p[b].name)>0)
	{
		tmp = p[b-1];
		p[b-1] = p[b];
		p[b] = tmp;
	}	

}
void enter_stud(struct stud p[],int n)
{
	int i,j,len,k=0;
	char str[100];

	for(i = 0; i < n;i++)
	{
		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		str[len-1]='\0';
		p[i].id = atoi(str);


		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		str[len-1]='\0';
		strcpy(p[i].name, str);

		for(j=0;j<4;j++)
		{
			fgets(str,sizeof(str),stdin);
			len=strlen(str);
			str[len-1]='\0';
			p[i].s[j]=atoi(str);
			k += p[i].s[j];
		}
		p[i].ave = k/4;
		k=0;
	}
}
int main(void)
{
	struct stud p[10];
	enter_stud(p, 10);
	show_stud(p,10);
	bubblesort_ave(p,10);
	printf("*************************************\n");
	show_stud(p,10);
	bubblesort_name(p,10);
	printf("******************************************\n");
	show_stud(p,10);

	return 0;

}
