#include <stdio.h>
#include <string.h>

void swap(int *a,int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int selection_sort(int str[],int len)
{
	int i = 0,j = 0,min = 0;

	for(;i < len; i++){
		min = i;
		for(j = i+1; j < len; j++)
			if(str[min] > str[j] )
				min = j;
		swap(&str[min],&str[i]);

	}
}

int main(void)
{
	int i = 0;
	int str[8] = {5,10,2,4,1,0,9,8};

	selection_sort(str,8);

	for(; i < 8; i++)
		printf("%3d",str[i]);
	putchar('\n');

	return 0;
}
