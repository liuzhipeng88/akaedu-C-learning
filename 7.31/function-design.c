#include<stdio.h>
#include<string.h>

/*int find_letter(char str[],int len)
{
	int i;
	for(i = 0; i < len; i++){
		if(str[i] == 'h')
			return 1;
		else
			return 0;
	}
}

int main(void)
{
	char str[10];
	int i,res,len;
		scanf("%s",str);
		len = strlen(str);
	res = find_letter(str,len);
	printf("%d\n",res);

	return 0;

}*/

//---------------------------------------------

/*
char *statistics_num(char str[],char tmp[],int len)
{
	int i,j = 0;

	for(i = 0; i < len; i++){
		if(str[i] == str[i+1]){
			tmp[j] = str[i];
			j++;
		}
	}
	tmp[j] = '\0';
	if (j > 0)
		return tmp;
	else 
		return NULL;
}


int main(void)
{
	int i,len;
	char str[20];
	char tmp[10];
	
		scanf("%s",str);
	len = strlen(str);
	printf("len = %d\n", len);
	statistics_num(str,tmp,len);
	printf("%s\n",tmp);

	return 0;
}
// ----------------------------------------------------
*/
/*
void  find_ch(char str[],int len)
{
	int i;
	for(i = 0; i < len; i++)
		if(str[i] == ' ') {
			printf("%d\t", i);
			break;
		}
		
		printf("%d\n", len - 1);
}

int main(void)
{
	int i,len;
	char str[20];
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	str[len-1]= '\0';
	find_ch(str,len);

	return 0;

}
----------------------------------------------------*/

/*

float average_num(float a,float b)
{
	int i;
	float res;
	res = (a + b) / 2;

	return res;
}

int main(void)
{
	float a,b;
	float res;
	scanf("%f%f",&a,&b);
	res = average_num(a,b);
	printf("%f\n",res);

	return 0;
}
---------------------------------------------------
*/

char * displace_word(char str int len)
{
	int i,j=0,len1,len2;
	char tmp[20];
	char a[20];
	printf("请输入要替换的单词：\n");
	scanf("%s",tmp);
	printf("请输入替换单词:\n");
	scanf("%s",a);
	len1 = strlen(tmp);
	len2 = strlen(a);
	for(i = 0; i < len; i++){
		if(str[i]=tmp[j])
		j++;
	}
	if(j == len1)

		
}




int main(void)
{
	char str[100];
	printf("请输入一句话：\n");
	fgets(str,sizeof(str),stdin);
	str(len-1) = '\0';
	displace_word(str,len);
	printf("%s",str);

	return 0;
}

//----------------------------------------------------


/*
int find_num(char str[],int len)
{
	int i,j=0;
	char ch;
	printf("请输入单个字符：\n");
	scanf("%c",&ch);

	for(i = 0; i < len; i++){
		if(str[i] == ch)
			j++;
	}


	return j;
}



int main(void)
{
	int i,len,res;
	char str[100];
	printf("请输入一句话：\n");
	fgets(str,sizeof(str),stdin);
	len = strlen(str);
	str[len-1] = '\0';
	res = find_num(str,len);
	printf("%d\n",res);

	return 0;
}*/
