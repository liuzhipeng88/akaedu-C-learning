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

int mergc(int a[],int l,int m,int r)
{
	int i,j,k,b[r+1];

	for(i = l; i <= r;i++)
		b[i] = a[i];
		i = l; j = m+1; k = l;
	while(i <= m && j <= r)
		if(b[i] < b[j])
			a[k++] = b[i++];
		else
			a[k++] = b[j++];
	while(i <= m)
		a[k++] = b[i++];
	while(j <= m)
		a[k++] = b[j++];
}

void mergc_sort(int a[],int l, int r)
{
	int m = 0;

	m = (l+r) / 2;
	if(l >= r)
		return;
	mergc_sort(a,l,m);
	mergc_sort(a,m+1,r);
	mergc(a,l,m,r);
}

int main(void)
{
	int a[N];

	init_array(a,N);
	show_array(a,N);
	mergc_sort(a,0,N);
	show_array(a,N);

	return 0;
}
