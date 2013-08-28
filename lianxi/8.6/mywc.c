#include<stdio.h>
#include<string.h>

int main(void)
{
	char buf[128];
	char tmp[128];
	char ch;
	int sum = 0;
	int count = 1;
	int n = 0,len = 0; 


	while(1)
	{
		char *p;
		int i = 0;
		//	int n = 0;
		p = fgets(buf,128,stdin);
		if(p == NULL)
			break;
		n++;	
		puts(buf);
		while((ch = buf[i++]) != '\0'){
			int j = 0;
			if(!isalpha(ch))
				continue;
			do{
				tmp[j++] = ch;
				ch = buf[i++];
			}while(isalpha(ch));

			tmp[j] = '\0';
			len = strlen(tmp);
			sum += len;
			printf("%d: world = <%s>\n",count++,tmp);
		}
	}
	printf("共有n = <%d>行\n",n);
	printf("共有sum = <%d>字符\n",sum);
	//	printf("%d: <%s>\n",1,"hello");
	return 0;
}
