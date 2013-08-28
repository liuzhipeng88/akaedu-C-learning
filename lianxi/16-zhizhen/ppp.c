#include <stdio.h>
#include <string.h>

static const char *msg[] ={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

char *get_a_day(int idx)
{
	static char buf[20];
	strcpy(buf,msg[idx]);
	puts(buf);
	return buf;
}

int main(void)
{
	//printf("%s\n",get_a_day(0));
	//printf("%s\n",get_a_day(1));
	printf("%s\t%s\t%s\n",get_a_day(0), get_a_day(1), get_a_day(2));

	return 0;
}
