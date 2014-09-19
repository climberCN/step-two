#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc,char *argv[])
{
	int pid;
	pid = getpid();
	printf("the pid is %d\n",pid);
	pid = getppid();
	printf("the ppid is %d\n",pid);
	printf("the uid is %d\n",getuid());
	printf("the euid is %d\n",geteuid());
	printf("the gid is %d\n",getgid());
	printf("the egid is %d\n",getegid());
	
	return 0;

}
