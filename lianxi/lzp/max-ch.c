#include<stdio.h>
#include<string.h>
int len;
int find_max(char a[],int n)
{
	int i;
	char max=a[0];
	for(i=0;i<len;i++)
		if(a[i]>max)
			max=a[i];
			return max;
}
int main(void)
{
	char a[10] = "akaedu";
	char max;
	len = strlen(a);
	max = find_max(a,len);
	printf("%c\n",max);
	return 0;
}
