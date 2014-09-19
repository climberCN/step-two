#include <stdio.h>

int main()
{
	char ch;
	while((ch = getchar()) != '#')			//ch = getchar()表达式的值为从键盘输入并存入到ch中的值，
	{						//对于赋值表达式，左值的值即为表达式的值
		putchar(ch);
	}
	return 0;
}
