#include<stdio.h>
#include<string.h>

struct word
{
	char name[32];
	int len;
	int freq;					//freq  频率缩写
	char trans[64];				//trans 翻译缩写
};

typedef struct word word_t;

#define N 16000
word_t words[N],c;
int count = 0;
int find(char * tmp)
{
	int i = 0;
	for(i = 0;i < count; i++)
		if(strcmp(words[i].name,tmp)==0)
			return i;

	return -1;
}


int main(void)
{
	char buf[10000];
	char ch,tmp[128];
	int res = 0;
	int len = 0;
	int n ;
	int i = 0;
	int max_len = 0;

	while(1)
	{
		char *p;
		int i = 0;

		p = fgets(buf,10000,stdin);
		if(p == NULL)
			break;
		while((ch = buf[i++]) != '\0')
		{
			int j = 0;
			if(!isalpha(ch))
				continue;
			do
			{
				tmp[j++] = ch;
				ch = buf[i++];
			}while(isalpha(ch));
			tmp[j] = '\0';

			res = find(tmp);
			if(res == -1)
			{
				strcpy(words[count].name,tmp);
				len = strlen(tmp);
				words[count].len = len;
				words[count].freq = 1;
				count++;

				if(words[count-1].len > max_len)
					max_len = words[count-1].len;
			}



			else
			{

				words[res].freq++;
			}
		}
	}
	printf("最长的单词是:\n");
	for(i = 0; i < (count-1) ;i++)
	{
		if(words[i].len == max_len)
			printf("<%s> %d\n",words[i].name,max_len);


	}
	for(i = 0; i < count; i++)
	{
		for(n = 1; n < count-i; n++)
		{
			if(words[n].freq > words[n-1].freq) {
				c = words[n-1];
				words[n-1] = words[n];
				words[n] = c;
			}
		}
	}
	for(i = 0; i < count ;i++)
	{    
		printf("%4d word = %-16s  len = %4d freq = %4d\n",i,words[i].name,words[i].len,words[i].freq);

	}

	return 0;
}
