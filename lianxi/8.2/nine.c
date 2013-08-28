#include<stdio.h>

int nine_num(int a,int b)
{
	int i,j,count = 0;
	for(i = a; i < b; i++) {
		j = i;
		while(j)
		{
			if(j % 10 == 9)
				count++;
			j /= 10;
		}

	}


	return count;
}

int main(void)
{
	int i,a,b,res=0;

	printf("请输入范围\n");
	scanf("%d %d",&a,&b);
	res = nine_num(a,b);
	printf("%d\n",res);

	return 0;
}
