#include <stdio.h>
#include <signal.h>


int main()
{
	sigset_t set;
	sigfillset(&set);
	printf("%d\n",set);
	return 0;
}
