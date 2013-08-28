#include<stdio.h>
#include<string.h>
int world_duan(char str[],int n)
{
	int i,j=0,a,b,minlen;
	int  tmp[100];
	for(i=0;i<=n;i++)
	{
		if(str[i]==' ')
		{
			tmp[j]=i;
			j++;
		}
		else if(str[i]=='\0')
			tmp[j]=i;

	}
//	printf("%d\t", tmp[2]);
	minlen = tmp[0];
	for(a=0;a+1<=j;a++)
	{	if(tmp[a+1]-tmp[a]-1<minlen)
			minlen=tmp[a+1]-tmp[a]-1;
	}

	return minlen;
}
int main(void)
{
	char str[]="hello word akd adas asdfa aa";
	int len;
	len = strlen(str);
//	world_duan(str,len);

	printf("%d\n",world_duan(str,len));
	return 0;
}
