#include <stdio.h>

void  insert_sort(int a[],int len)
{
	int i = 0,j = 0;
	int tmp;

	for(; i < len-1; i++){
		tmp = a[i+1];
		for(j = i;tmp < a[j] && j >= 0; --j)
			a[j+1] = a[j];
		a[j+1] = tmp;
	}
}

int main(void)
{
	int i = 0;
	int a[8] = {1,5,2,7,6,8,4,9};

	insert_sort(a,8);
	
	for(; i < 8; i++)
		printf("%2d",a[i]);
	putchar('\n');

	return 0;
}
