#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *fp1,*fp2;
	char buf[10];
	char ch;
	if(argc < 3){
		printf("./a.out stc dest\n");
		exit(-1);
	}

	fp1 = fopen(argv[1],"r");
	if(fp1 == NULL){
		perror("fopen stc");
		exit(0);
	}
	fp2 = fopen(argv[2],"w");
	if(fp2 == NULL){
		perror("fopen dest");
		exit(1);
	}
	while(fgets(buf,sizeof(buf),fp1))
		fputs(buf, fp2);
	

	fclose(fp1);
	fclose(fp2);

	return 0;
		
}
