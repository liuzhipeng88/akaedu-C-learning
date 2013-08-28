#include<stdio.h>
#include<string.h>

char *show_num(char str[],int n)  //输入数字
{
	int i,j,len;

A:	printf("请输入四个不同的数字:\n");
	scanf("%s",str);
	len = strlen(str);
	if(len!=n-1)
	{
		printf("输入有误，请重输：\n");
		goto A;
	}
	for (i = 0; i < n-1; i++)
		for(j=i+1;j<n-1;j++)
			if(str[i]==str[j])
			{
				printf("输入有误，请重输：\n");
				goto A;
			}
	//		else scanf("%s",str);
//			for(i=0;i<n-1;i++)
	//	printf("%c",str[i]);
	//	printf("\n");

	return str;
}
char * rand_num(char a[],int n)   //产生随机数
{
	int i,j;char tmp;

	srand(time(NULL));
	for (i=0;i<n;i++)
	{
		tmp = (rand()%10)+'0';
		a[i]=tmp;
		for (j =0 ;j<i;j++)
		{	if (a[j]== tmp)
			{
				i--;
				break;
			}

		}
	}
	a[i] = '\0';
	//	for(i=0;i<n;i++)
	return a;
	//	printf("%c",a[i]);
	//	printf("\n");
}

void cmpare_num(char a[],char str[])  //判断是否一样
{
	int i,j,k=0,flag = 1,count=0;
	char b[5] = "0";
	char tmp;

	while (flag)
	{
		show_num(str,5);
		count++;
		if(count == 20)
			return;
		k = 0;

		for (i=0;i<4;i++)
			for (j=0;j<4;j++)
			{	
				if (a[i]==str[j])
				{
					if (i==j)
					{
						b[k]='A';
						k++;
					}
					else
					{
						b[k]='B';
						k++;
					}
				}
			}

		if(k==0)
		{
			printf("0000\n");
			continue;
		}
		else if(k==1)
		{
			printf("%c\n", b[0]);
			continue;
		}
		else
		{
			for(i = 0; i < k; i++)
				for(j = 1; j < k; j++)
				{
					if(b[j-1] > b[j])
					{
						tmp = b[j-1];
						b[j-1] = b[j];
						b[j] = tmp;
					}
				}
			b[k] = '\0';
			if(strcmp(b,"AAAA")==0)
			{
				flag = 0;
				printf("NB\n");
				return ;
			}
			else
			{
				for (i = 0; i < k; i++)
					printf("%c", b[i]);
				printf("\n");
				//		printf("%s", b);
			}
		}
	}

}
int main(void)     //主函数
{
	char a[6] = "0";
	char str[6] = "0";

	rand_num(a, 4);
	cmpare_num(a, str);

	return 0;
}
