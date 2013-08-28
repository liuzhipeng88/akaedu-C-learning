#include <stdio.h>
#include <string.h>

int main(void)
{	
	int len = 0;
	char buf[5] = "hello";
	len = strlen(buf);

	printf("%d\n",len);
	return 0;
}
