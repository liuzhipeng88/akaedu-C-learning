#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main(void)
{
	FILE *fp;
	int i;
	char filename[100];
	i = 3;

	while(1){
		sprintf(filename,"file%d",i);
		fp = fopen(filename,"w");
		if(fp == NULL){
		//	printf("fopen fail\n");
		perror("fopen");
			exit(-1);
		}
		printf("%d\n",i);
		i++;
	}
		//	perror("fopen");
//	printf("errno = %d\n",errno);

}	

