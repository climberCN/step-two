#include <stdio.h>

void fun();

int main()
{
	fun('*',50);
	fun('x',50);
	return 0;

}

void fun(char a,int b)
{	
	int i;
	for(i = 0;i<b;i++)
	{
		putchar(a);
	}
	putchar('\n');
}
