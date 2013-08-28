#include <stdio.h>

//#define MAX(x,y)  ((x)>(y)?(x):(y))
#define PI 3.14159
#define TWO_PI  (2*PI)

int main(void)
{
	int i = 1;
//	int j = 2;
	float m;
	float n;

	n = TWO_PI;
	m = PI;
	
//	m = MAX(i,j);

	printf("%f,%f\n",n,m);

	return 0;
}
