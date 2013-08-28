#include<stdio.h>
void  chessboard_num(char str[][9])
{
	int i,j;
	printf("  比  赛  开  始\n");
	printf("   ");
	for(i=0;i < 9;i++)
		printf("  %d",i);
	printf("\n ");
	printf("-------------------------------\n ");
	for(i = 0;i < 9;i++)
	{
		printf("%d  |",i);
		for(j = 0;j < 9;j++)
			printf("%c  ",str[i][j]);
		printf("\n ");
	}			
}
void chess_num(char str[][9])
{
	int i,j,a,b,flag;
	for(i = 0;i < 81;i++)
	{
	A:	printf("plese play1:\n");

		scanf("%d %d",&i,&j);
		if(str[i][j] != '*')
		{
			printf("输入错误，请重新下子：\n");
			goto A;
		}
	/*	else if(i > 8||j > 8)
		{
			printf("输入错误，请重新输入：\n");
			goto A;
		}*/
		else
			str[i][j]='1';
		chessboard_num(str);
		flag = decide_num(str);
		if(flag==0)
			break;
B:		printf("plese play2:\n");

		scanf("%d %d",&a,&b);
		if(str[a][b] != '*')
		{
			printf("输入错误，请重新下子：\n");
			goto B;
		}
	/*	else if(i > 8||j > 8)
		{
			printf("输入有误，请重新输入:\n");
			goto B;
		}*/
		else
			str[a][b]='2';
		chessboard_num(str);
		flag = decide_num(str);
		if(flag==0)
			break;
	}
	return ;
}
int  decide_num(char str[][9])
{
	int i,j,k=1,flag=1;
	for(i = 0;i < 9;i++)
		for(j = 0;j < 9;j++)
		{
			while(str[i][j]==str[i][j+k])
			{	
				k++;

				if(k==5){
					if(str[i][j]=='1')
					{
						printf("play1 WIN\n");
						flag=0;
					}
					else if(str[i][j]=='2')
					{ 
						printf("play2 WIN");
						flag=0;
					}
					return flag;
				}
			}
			k=1;
			while(str[i][j]==str[i+k][j])
			{	
				k++;

				if(k==5){
					if(str[i][j]=='1')
					{

						printf("play1 WIN\n");
						flag=0;
					}
					else if(str[i][j]=='2')
					{
						printf("play2 WIN");
						flag=0;
					}
					return flag;	
				}
			}
			k=1;
			while (str[i][j]==str[i+k][j+k])
			{	
				k++;
				if(k==5){
					if(str[i][j]=='1')
					{
						printf("play1 WIN\n");
						flag=0;
					}
					else if(str[i][j]=='2')
					{
						printf("play2 WIN");
						flag=0;
					}
					return flag ;
				}
			}
			k=1;
			while(str[i][j]==str[i-k][j+k])
			{
				k++;

				if(k==5){
					if(str[i][j]=='1')
					{
						printf("play1 WIN\n");
						flag=0;
					}
					else if(str[i][j]=='2')
					{
						printf("play2 WIN");
						flag=0;
					}

					return flag;
				}
			}
			k = 1;
		}
	return flag;
}
int main(void)
{
	char str[9][9]={"*********","*********","*********","*********","*********","*********","*********","*********","*********"};
	chessboard_num(str);
	chess_num(str);

	return 0;
}
