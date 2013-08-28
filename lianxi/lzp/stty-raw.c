#include<stdio.h>

int main(void)
{
	char ch;
	system("stty raw");
	system("clear");
	
	printf("Do you want to y/n \n");
	do
	{
		ch = getchar();
		printf("ch = %c (0x%x) \r\n",ch,ch);

	}while(1);
	system("stty -raw");
	return 0;

}
