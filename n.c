#include <stdio.h>

int main()
{
	char nm[81];
	char *p;
	p = nm;
	gets(p);
	printf("%s\n",nm);
	return 0;
}
