#include <stdio.h>

int main(void)
{
	SWITCH("abc")
	{
		CASE: ("abc");
			printf("this is abc\n");
		BREAK;
		CASE: ("123")
			printf("this is 123\n");
		BREAK;

		DEFAULT:
			printf("this is NULL");
		BREAK;
	}

	return 0;
}
