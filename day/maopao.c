#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]="helloworld";
	char tmp;
	int i,j,len;
	len=strlen(str);
	for(i=0;i < len;i++)
	{
		for(j=1;j < len;j++)
			if(str[j-1] > str[j])
			{
			    tmp = str[j-1];
				str[j-1] = str[j];
				str[j] = tmp;

			}
	}
	printf("%4s\n",str);
	printf("\n");
	return 0;
}

