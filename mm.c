#include <stdio.h>
#include <sys/times.h>
#define CLOCK_PER_SEC ((clock_t)1000000)

int main()
{
	struct tms time;
	times(&time);
	printf("%d\n",time.tms_utime);
	printf("%d\n",time.tms_stime);
	printf("%d\n",time.tms_cutime);
	printf("%d\n",time.tms_cstime);
	return 0;
}
