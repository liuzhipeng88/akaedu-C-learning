/*编写一个自己的大写转小写的函数 char A_t_a(char a);
并在主函数里调用测试验证；
要求：
1)，只限于字母转换
2)，如果输入的不是字母，增加判断处理使程序更加健壮
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[32];
	int i;
	int len = 0;

	scanf("%s",str);
	len = strlen(str);
	
	for(i = 0; i < len; i++){
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32; 
	}

	printf("%s\n",str);

	return 0;
}
