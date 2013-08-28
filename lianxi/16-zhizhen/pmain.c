#include <stdio.h>
#include <string.h>

typedef struct{
	int number;
	char msg[20];
}unit_t;

void set_unit(unit_t *p)
{
	if(p == NULL)
		return;
	p->number = 3;
	strcpy(p->msg,"Hello World");
}

int main(void)
{
	unit_t u;
	
	set_unit(&u);
	printf("number: %d\nmsg: %s\n",u.number,u.msg);

	return 0;
}
