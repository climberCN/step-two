#include <stdio.h>
#define	SIZE 10


int total(const int *,int );
int main()
{
	int income[SIZE] = {10,50,320,51,21,8,6,4,521,95};
	printf("the income sum = %d\n",total(income,SIZE));
	return 0;
}

int total(const int * p,int num)
{
	int i = 0;
	int sum =0;
	for(i;i<num;i++)
	{
		sum = sum + *(p+i);
	}
	(*p)++;
	return sum;
}
