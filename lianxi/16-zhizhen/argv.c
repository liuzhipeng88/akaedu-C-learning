#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int i = 0;
	if(argc < 2){
		printf("./a.out file\n");
		exit(-1);
	}
	while(1){
	printf("<%s>\n",argv[i++]);
	if(argv[i] == NULL)
		break;
	}

	return 0;
}
