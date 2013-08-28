#include<stdio.h>
#include<stdlib.h>
#define N b
void sort(int v[],int b)
{
	int i,j,temp;
	for(i=0;i<b;i++)
		for(j=0;j<=b-i;j++)
			if(v[j]>v[j+1])
			{
				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
			}
}
int main(void)
{
	int i,b,c,f,temp;
	int a[1000];
	scanf("%d%d~%d",&b,&c,&f);
	srand(time(NULL));
	for (i=0;i<b;i++)
	{
		a[i]=rand() % f;
		if(a[i]>c)
			a[i]=a[i];
		else
			i--;
	}
	for(i = 0;i < b;i++)
		sort(a,N);
	for(i=0;i<b;i++)
		printf("%d\n",a[i]);
	return 0;
}

