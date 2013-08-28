#include<stdio.h>
#include<string.h>

int main(void)
  {
  char str[] = "root:x::0:root:/root:/bin/bash:";
  char *token;

  token = strtok(str,":/");
  printf("%s\n",token);
  while((token = strtok(NULL,":/"))!= NULL)
  printf("%s\n",token);

  return 0;
  }
/*
   int main(void)
   {
   int i=0,j;  
   char buffer[100]="Fred male 25,John male 62,Anna female 16";      
   char *p[20];  
   char *buf = buffer;  
   while((p[i]=strtok(buf," ,"))!=NULL)   
   {  
//	buf=p[i];  
//	while((p[i]=strtok(buf," "))!=NULL)   
//	{  
i++;  
buf=NULL;  
//	}  
//	buf=NULL;  
}  
printf("Here we have %d strings\n", i);  
for ( j=0; j<i; j++)  
{     
printf(">%s<\n",p[j]);  

}
return 0;
}*/



/*
int main(void)
{
	int in=0,j;  
	char buffer[100]="Fred male 25,John male 62,Anna female 16";  
	char *p[20];  
	char *buf=buffer;  
	char *outer_ptr=NULL;  
	char *inner_ptr=NULL;  
	while((p[in] = strtok_r(buf, ",", &outer_ptr))!=NULL)   
	{  
		buf=p[in];  
		while((p[in]=strtok_r(buf, " ", &inner_ptr))!=NULL)   
		{  
			in++;  
			buf=NULL;  
		}  
		buf=NULL;  
	}	 
	printf("Here we have %d strings\n",in);  
	for (j=0; j<in; j++)  
	{     
		printf(">%s<\n",p[j]);  
	}  
	return 0;
}*/
