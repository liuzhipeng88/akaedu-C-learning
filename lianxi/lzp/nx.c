#include<stdio.h>
#include<string.h>
int len;
void  nixu(char str[],int n)
{
	int i;
	char tmp;
	for(i=0;i!=len/2;i++)
	{
		tmp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=tmp;
	}
}
int main(void)
{
	char str[] = "akaedu";
	printf("%s\n",str);
	len = strlen(str);
     nixu(str,len);
	printf("%s\n",str);
	return 0;
}
