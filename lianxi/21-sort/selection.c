// 选择排序！
#include <stdio.h>

#define N 16 
#define MAX 100
void init_array(int a[],int len)
{
	int i = 0,j = 0;

	srand(time(NULL));
	for(i = 0; i < len; i++){
		a[i] = rand() % MAX;
		for(j = 0; j < i; j++){
			if(a[j] == a[i])
				i--;
		}
	}
	return;
}

void show_array(int a[],int len)
{
	int i = 0;

	for(i = 0; i < len; i++)
		printf("%3d",a[i]);
	putchar('\n');
}

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void select_array(int a[],int len)
{
	int i = 0,j = 0,min = 0;

	for(; i < len; i++){
		min = i;
		for(j = i+1; j < len; j++)
			if(a[min] > a[j])
				min = j;

		swap(&a[i],&a[min]);
	}
}

int main(void)
{
	int a[N];

	init_array(a,N);
	show_array(a,N);
	select_array(a,N);
	show_array(a,N);

	return 0;
}
