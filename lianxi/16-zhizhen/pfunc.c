#include <stdio.h>

void say_hello(char *str)
{
	printf("hello,%s\n",str);

	return ;
}
typedef void (*FP)(char *);
typedef void (FF)(char *);
// wrong!!!   typedef void (FF)(char *)  FP2

int main(void)
{
	void (*f)(char *);
		//void (*)(char *) f
	int a;
	FP f2;
	FF * f3;

	f = say_hello;
	f2 = say_hello;
	f3 = say_hello;
	printf("f = %p\n",f);
	printf("say_hello = %p\n",say_hello);

	f2("I am f2");
	f3("I am f3");

	a = 0x80483e4;
	((void(*)(char *))a)("August 20");
	((void(*)(char *))0x80483e4)("Today is August 20");
	((FP)0x80483e4)("Today is August 20th");
	((FF*)0x80483e4)("Today is August 20th 9:41");

		//say_hello("akaedu");
	f("akaedu");

	return 0;
}
