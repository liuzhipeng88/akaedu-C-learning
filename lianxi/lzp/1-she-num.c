#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

void token_ch(FILE *fp1, FILE *fp2)
{
	char str[10240];
	char *token;
	//	char tmp[] = "she";
	int  i = 0,j = 0;

	while(fgets(str,sizeof(str),fp1)) {
		token = strtok(str,", '’().");
		//fputs(token, fp2);
		if(strcasecmp(token, "she") == 0)
			i++;
		else if(strcasecmp(token, "she\n") == 0)
			i++;
		else if(strcasecmp(token,"like") == 0)
			j++;
		while((token = strtok(NULL,",' ’().")) != NULL) { 
			//		fputs(token,fp2);
			if(strcasecmp(token, "she") == 0 )
				i++;
			else if(strcasecmp(token, "she\n") == 0)
				i++;
			else if(strcasecmp(token,"like") == 0 )
				j++;
		}
	}
	printf("she = %d like = %d\n",i,j);

}

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;

	if(argc < 3){
		printf("./a.out file\n");
		exit(-1);
	}
	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"w+");
	token_ch(fp1,fp2);

	fclose(fp1);
	fclose(fp2);

	return 0;

}
