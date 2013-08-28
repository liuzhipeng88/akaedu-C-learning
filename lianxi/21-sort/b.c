// 插入排序

#include <stdio.h>

#define N 16
#define MAX 100

void init_array(int a[], int len)
{
	int i = 0, j = 0;

	srand(time(NULL));
	for(;i < len; i++){
		a[i] = rand() % MAX;
		for(j = 0; j < i; j++){
			if(a[j] == a[i])
				i--;
		}
	}
	return;
}

void show_array(int a[], int len)
{
	int i = 0;

	for(; i < len; i++)
		printf("%3d",a[i]);
	putchar('\n');
}

void insert_sort(int a[], int len)
{
	int i = 0, j = 0,tmp = 0;

	for(i = 0; i < len-1; i++){
		tmp = a[i + 1];
		for(j = i; tmp < a[j] && j >= 0;j--)
			a[j+1] = a[j];

			a[j+1] = tmp;// 在j--之后才执行！
	}
}


int main(void)
{
	int a[N];

	init_array(a,N);
	show_array(a,N);
	insert_sort(a,N);
	show_array(a,N);

	return 0;

}
