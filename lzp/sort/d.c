#include <stdio.h>

#define N 10

init_array(int a[],int len)
{
	int i = 0,j = 0;

	srand(time(NULL));
	for(; i < len; i++){
		a[i] = rand() % 20;
		for(j = 0; j < i; j++){
			if(a[i] == a[j])
				i--;
		}
	}
}

void show_array(int a[],int len)
{
	int i = 0;

	for(; i < len; i++)
		printf("%3d",a[i]);
	putchar('\n');
}

void swap(int *a,int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int a[],int l,int r)
{
	int i = 0,j = 0;

	for(i = l+1,j = l; i <= r;i++)
		if(a[i] < a[l])
			swap(&a[i],&a[++j]);

	swap(&a[j],&a[l]);

	return j;
}

void quick_sort(int a[],int l,int r)
{
	int k = 0;

	if(l >= r)
		return;
	k = partition(a,l,r);
	quick_sort(a,l,k-1);
	quick_sort(a,k+1,r);

}

int main(void)
{
	int a[N];

	init_array(a,N);
	show_array(a,N);
	quick_sort(a,0,N);
	show_array(a,N);

	return 0;
}
