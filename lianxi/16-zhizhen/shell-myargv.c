#include <stdio.h>
#include <string.h>

void *del_space(char *str)
{
	char *p,*q;
	int flag = 0;

	p = q = str;
	while(*p){
		if(flag == 0 && *p != ' '){
			flag = 1;
			*q++ = *p;
		}
		else if(flag == 1 && *p != ' '){
			flag = 1;
			*q++ = *p;
		}
		else if(flag == 1 && *p == ' '){
			flag = 0;
			*q++ = *p;
		}
	p++;
	}
	*q = '\0';

	return ;
}

int *shell_myargv(char *str,int *argc,char *argv[])
{
	char *p = str;
	int flag = 0;
	*argc = 0;

	while(*p){
		if(flag == 0 && (*p !=' ' && *p != '\n')){
			flag = 1;
			argv[*argc] = p;
			(*argc)++;
		}
		else if(flag == 1 && (*p == ' ' || *p =='\n')){
			flag = 0;
			*p = 0;
		}
		p++;
	}
	argv[*argc] = NULL;
	return argc;
}

int main(void)
{
	char str[64];
	int i = 0;
	char *argv[16];
	int argc;

	printf("akaedu$$");
	fgets(str,sizeof(str),stdin);
	str[strlen(str)-1] = '\0';
	printf("str = <%s>\n",str);

	del_space(str);
	printf("str2 = <%s>\n",str);

	shell_myargv(str, &argc, argv);
	printf("argc = %d\n",argc);

	for(i = 0; i < argc; i++){
		printf("argc[%d] = <%s>\n",i,argv[i]);
	}
	return 0;
}
