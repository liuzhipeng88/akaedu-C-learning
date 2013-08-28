#include <stdio.h>

int main(void)
{
	int **ppi;
	ppi =(int **)0x1000;// 打印完1 段错误！
	ppi =(int **)0x804a000;// 正确！

	printf("1 finished\n");

//	*ppi = 0x2000;  段错误    下一行也注掉的话，可能会段错误！
	*ppi = 0x804a050;  // 正确！
	printf("2 finished\n");
	
	printf("%x\n",*ppi);
	printf("%x\n",**ppi);

	**ppi = 0x2000;
	printf("3 finished\n");
	printf("%x\n",**ppi);
	return 0;
}
