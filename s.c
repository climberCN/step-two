#include <stdio.h>
#define SPACE ' '

int main()
{
	char	ch;
	while((ch=getchar())!='\n')			//回车属于难以编辑的字符因此用转移字符,体现了c的编程风格,将两个动作合并位一个表									//达式
	{
		if(ch == ' ')				//空格是可以打出来的，因此用这个的格式
		{
			putchar(ch);
		}
		else
		{
			putchar(ch+1);
		}
	}
	return 0;
}



