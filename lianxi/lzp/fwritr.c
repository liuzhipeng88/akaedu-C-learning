#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1,*fp2;
	char buf[100];
	int len ;

	if(argc < 3){
		printf("./a.out stc date\n");
		exit(-1);
	}

	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"w");
	if(!fp1 || !fp2){
		perror("fopen");
		exit(-1);
	}
	while(len = fread(buf,1,sizeof(buf),fp1)){
//		printf("len = %d\n",len);
		fwrite(buf,1,len,fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}
