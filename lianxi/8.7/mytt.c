#include<stdio.h>

int main(void)
{
	char buf[10000];
	char ch;
	int count = 0;

	while(1)
	{
		char *p;
		int i = 0;
		p = fgets(buf,10000,stdin);
		if(p == NULL)
			break;
		puts(buf);
		while((ch = buf[i++]) != '\0')
		{
			char tmp[128];
			int j = 0;
			if(!isalpha(ch))
				continue;
			do
			{
				tmp[j++] = ch;
				ch = buf[i++];
			}while(isalpha(ch));
			tmp[j] = '\0';
			count++;
			printf("%d world = <%s>\n",count,tmp);

		}
	}
	return 0;
}
