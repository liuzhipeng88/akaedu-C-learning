#include<stdio.h>
//int a[3]={3,4,5}
int find_max(int a[],int n)
{
	int i,max=a[0];
	for(i=0;i<3;i++)
	if(a[i]>max)
		max = a[i];
		return max;
	

}
int main(void)
{
	int a[3] = {3,4,5};
	int max;
	max = find_max(a,3);
	printf("%d\n",max);
		return 0;
}
