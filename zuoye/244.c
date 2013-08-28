#include<stdio.h>
int main(void)
{
	int  b[100]={10};
	int i,k=0,n=0,j;
	char a[100];
	scanf("%s",a);
	for(i=0;a[i]!= '\0';i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				k=a[j]-'0';
				b[k]=k;
			}
		}
	}
	if(b[0]!=10)
		printf("%3d",b[0]);
	for(k=1;k<100;k++)
		if(b[k]!=0)
			printf("%3d",b[k]);
	printf("\n");
	return 0;

}
