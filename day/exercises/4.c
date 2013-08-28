//用终端模拟一个时钟，用终端打印时间，指定开始时间为23:59:50，显示格式为xx:xx:xx。(提示：sleep(1)用来延时一秒)

#include <stdio.h>

int main(void)
{
	int h = 23,m = 59,s = 50;

	while(1)
	{
		s++;
		if(s == 60)
		{
			s = 0;
			m++;
				if(m == 60)
				{
					m = 0;
					h++;
					if(h == 24)
						h = 0;
				}
		}
			printf("%02d:%02d:%02d\n",h,m,s);
			sleep(1);
	}

	return 0;
}
