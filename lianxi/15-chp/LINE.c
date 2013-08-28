#include <stdio.h>

#define DEBUG(x)  printf("<%s>@(%s) line:%d" #x " = %d\n",__func__, __FILE__, __LINE__,x)

void mytestf(void)
{
	int i = 100;
	DEBUG(i);
	
	printf("current func is %s\n",__func__);
	printf("current func is %s\n",__FUNCTION__);

	return ;
}


int main(void)
{
	int i = 100;
	DEBUG(i);

	printf("current line is %d\n",__LINE__);
	printf("current line is %d\n",__LINE__);
	printf("current line is %d\n",__LINE__);
	printf("current line is %d\n",__LINE__);

	printf("current time is %s\n",__TIME__);

	printf("current flie is %s\n",__FILE__);
	printf("current date is %s\n",__DATE__);
	printf("current time is %d\n",__STDC__);

	printf("current func is %s\n",__func__);
	return 0;
}
	printf("current  is %s\n",__func__);
