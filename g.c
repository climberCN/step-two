#include <stdio.h>
#define SIZE 4
int main()
{
	int no_data[SIZE]={12,54,84,54,665,48,54,225};
	int i;
	printf("%2s%14s\n","i","no_data[i] ");
	for(i=0;i<SIZE;i++)
	{
		printf("%2d%14d\n",i,no_data[i]);
	}
	return 0;
}



