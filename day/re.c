#include <stdio.h>
int main (void)
{
	int i,a[100],b[100]={10};
	int k=0,n=0,j;
	scanf("%d",&n);
	for (i=0;n!=0;i++)
	{
		a[i]=n%10;
		n/=10;
		for (j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				k=a[j];
				b[k]=k;
			}
		}
	}
	if(b[0] != 10)
		printf("%d",b[0]);
	for (k=0;k<100;k++)
		if (b[k]!=0) 
			printf("%3d",b[k]);
	printf ("\n");
	return 0;
}
