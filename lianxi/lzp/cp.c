#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp1,*fp2;
	char ch;
	
	if(argc < 3){
		printf("./a.out stc dest\n");
		exit(1);
	}

	fp1 = fopen(argv[1],"r");
	if(fp1 == NULL){
		perror("fopen src");
		exit(2);
	}
	fp2 = fopen(argv[2],"w");
	if(fp2 == NULL){
		perror("fopen dest");
		exit(3);
	}
	while((ch = fgetc(fp1)) != EOF)
		fputc(ch, fp2);


	fclose(fp1);
	fclose(fp2);
	return 0;
}
