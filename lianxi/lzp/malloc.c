#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TEA
{
	char name[20];
	char sex;
	int age;
}p[10];

void fgets_num(int n)
{
	static int i = 0;
	int len = 0;
	char str[100];

	for(; i < n; i++){
		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		str[len - 1] = '\0';
		strcpy(p[i].name, str);


		fgets(str,sizeof(str),stdin);
		p[i].sex = str[0];


		fgets(str,sizeof(str),stdin);
		len = strlen(str);
		str[len - 1] = '\0';
		p[i].age = atoi(str);
	}

}

void name_sort(int k)
{
	int i = 0,j = 0;
	struct TEA tmp;

	for(i = 0; i < k ; i++)
		for(j = 1; j < k - i; j++){
			if(strcmp(p[j].name,p[j-1].name) < 0)
			{
				tmp = p[j];
				p[j] = p[j-1];
				p[j-1] = tmp;
			}
		}
	for(i = 0; i < k; i++)
		printf("name: %s\tsex: %c\tage: %d\n",p[i].name,p[i].sex,p[i].age);
}

int main(int argc, char *argv[])
{
	struct TEA *pt;
	int i = 0,num = 0;
	char ch;

	if(argc < 2){
		printf("./a.out num\n");
		return 0;
	}
	else
		printf("姓名/性别/年龄:\n");

	num = atoi(argv[1]);
	pt = calloc(num,sizeof(struct TEA));


	fgets_num(num);

	while(1){
		printf("是否继续输入？y/n \n");
		scanf("%c",&ch);
		getchar(); //接收\n
		if(ch == 'y'){
			num++;
			pt = realloc(pt, num*(sizeof(struct TEA)));
			printf("继续输入：\n");
			fgets_num(num);
		}
		else if(ch == 'n')
			break;
	}
		name_sort(num);

		free(pt);
	//for(i = 0; i < num; i++)
	//	printf("name: %s\tsex: %c\tage: %d\n",p[i].name,p[i].sex,p[i].age);
	return 0;

}
