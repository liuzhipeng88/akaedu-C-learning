#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i;
	char *str1,*str2;
	char *a,*b;
	char *p,*p2;
	for(i = 1,str1 = argv[1];;i++,str1 = NULL){
		p = strtok_r(str1,argv[2],&a);
		if(p == NULL)
			break;
		printf("%d:%s\n",i,p);

		for(str2 = p;;str2 =NULL){
			p2 = strtok_r(str2,argv[3],&b);
			if(p2 == NULL)
				break;
			printf("-->%s\n",p2);
		}
	}
	return 0;
}
/*
int main(int argc,char *argv[])
{
	char *str1,*str2;

	strtok_r(str1,str2);

	return 0;
}*/
