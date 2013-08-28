#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i, num;
//	if(argc < 2){
//		printf("./a.out num\n");
//		exit(-1);
		printf("%d\n",argc);
//	}
	num = atoi(argv[1]);
	for(i = 0; i < argc ; i++)
//	for(i = 0; i < num ; i++)
//	printf("hello\n");
	printf("%s\n",argv[i]);

	return 0;
}
