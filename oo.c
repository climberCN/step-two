#include <stdio.h>

char **makeargv(char *p)
{	
	int i = 0;
	int argc = 0;
	while(*(p+i)!='\n')
	{
		if(*(p+i)==' ')
		{
			argc++;
		}
		argc++;
	}
	const int tmp ;
	tmp = argc+1;
	static char* arg[tmp];
	arg[0] = p;
	i = 0;
	while(*(p+i)!='\n')
	{
		int m = 1;
		if(*(p+i)==' ')
		{
			arg[m] = p+i+1;
			m++;
		}
	}
	return arg;

}

int main()
{
	return 0;
}
