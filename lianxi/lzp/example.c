/*#include<stdio.h>
  int main(void)
  {
  int i, sum = 0;
  for(i = 1; i<= 100; i++){
  sum += i;
  }
  printf("1+2+3+...+100 = %d\n",sum);

  return 0;
  }*/

/*
#include<stdio.h>
#include<string.h>

char convert(char ch)
{
	if((ch >= 'a')&&(ch <= 'z'))
		return ch - 32;
	else if((ch >= 'A')&&(ch <= 'Z'))
		return ch + 32;
	else
		return ch;
}

int main(void)
{
	char str[100] = "AKAedu 123 heLLO!";
	int i,len;

	len = strlen(str);
	printf("%s\n",str);
	for(i = 0; i < len; i++)
	{
		str[i] = convert(str[i]);
	}

	printf("After convert...\n");
	printf("%s\n",str);

	return 0;
}*/


/*
#include<stdio.h>

int main(void)
{
	int num[10] = {12,6,34,65,67,87,89,100,66};
	int i,max = 0;

	for(i = 0; i < 10; i++)
	{
		if(max < num[i])
		{
			max = num[i];
		}
	}

	printf("max is %d\n",max);

	return 0;
}*/




#include<stdio.h>





