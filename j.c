#include <stdio.h>

int main()
{
	int days[10] = {1,5,3,9,4,6,8,7,5,3};
	printf("%p\n",days);
	printf("%p\n",&days[0]);
	return 0;
}
