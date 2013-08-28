#include <stdio.h>
#include <string.h>
char *mystrtok(char str[])

int main(int argc,char *argv[])
{
	char str[100] = "hello;akaedu;world";
	char *p;

	mystrtok(str);
	printf("%s\n",strtok(str,";"));
	while(p = strtok(NULL,";"))
	printf("%s\n",p);
}
