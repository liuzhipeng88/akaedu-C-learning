#include <stdio.h>

struct a{
	char a;
	short b;
	int c;
	char d;
}__attribute__((packed)) s;

#define OFFSET(member)  (&(((struct a*)0x0)->member))


int main(void)
{
	
	s.a = 1;
	s.b = 2;
	s.c = 3;
	s.d = 4;
	printf("%u\n",sizeof(s));
	printf("&c = %p\n",&((struct a*)0)->c);
	printf("&a = %p\n",OFFSET(a));
	printf("&b = %p\n",OFFSET(b));
	printf("&c = %p\n",OFFSET(c));
	printf("&d = %p\n",OFFSET(d));

	return 0;
}
