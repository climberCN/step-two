#include <stdio.h>

int main()
{
	int i =0;
	int n = 10;
	int days[n];
	days[15] = 5; 
	for(i;i<sizeof(days)/sizeof(days[0]);i++)
	{
		printf("the %d month has %d days\n",i+1,days[i]);
	}
	return 0;
}
