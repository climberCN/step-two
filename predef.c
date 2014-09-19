#include <stdio.h>

void why_me();

int main()
{
	printf("the file is %s\n", __FILE__);
	printf("the date is %s\n", __DATE__);
	printf("the time is %s\n",__TIME__);
	return 0;
}
