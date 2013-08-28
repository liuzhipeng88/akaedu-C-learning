//冒泡排序！
#include <stdio.h>

#define N 16 
#define MAX 100
void init_array(int a[],int len)
{
	int i = 0;

	srand(time(NULL));
	for(i = 0; i < len; i++)
	a[i] = rand() % MAX;
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

void bubble_array(int a[],int len)
{
	int i = 0,j = 0;

	for(;i < len; i++)
		for(j = len-1; j > i; j--)
			if(a[j-1] > a[j])
				swap(&a[j-1],&a[j]);
}

int search(int a[],int l, int r, int key)   //循环2分查找法！
{
	int m;
	while(l <= r){
		m = (l + r) / 2;
		if(key > a[m])
			l = m + 1;
		else if(key < a[m])
			r = m - 1;
		else return 1;
	}
	return 0;
}

int search_r(int a[],int l,int r,int key)   //递归2分查找法！ 
{
	int m;
	
	m = (l + r) / 2;
	if(l > r)
		return 0;
	else if(key > a[m])
		return search_r(a,m + 1,r,key);
	else if(key < a[m])
		return search_r(a,l,m-1,key);
	else return 1;
}

int main(int argc, char *argv[])
{
	int a[N],key;

	key = atoi(argv[1]);
	init_array(a,N);
	show_array(a,N);
	bubble_array(a,N);
	if(search_r(a,0,N-1,key))
		printf("find %d  OK!\n",key);
	else
		printf("un find\n");
	show_array(a,N);

	return 0;
}
