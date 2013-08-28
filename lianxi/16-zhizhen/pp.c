//双层指针
#include <stdio.h>

static const char *msg[] = {"Sunday","Mondy","Tuesday","Wednesday","Thursday","Friday","Saturday"};

void get_a_day(const char **p)
{
	static int i = 0;
	*p = msg[i%7];
	i++;
}

int main(void)
{
	const char *firstday = NULL;
	const char *secondday = NULL;

	get_a_day(&firstday);
	get_a_day(&secondday);

	printf("%s\t%s\n",firstday,secondday);

	return 0;
}
