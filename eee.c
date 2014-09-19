#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *p = "/bin/ls";
	char *argv[] = {"/bin/ls","-al",NULL};
	execve("/bin/ls", argv,NULL);
	puts("daewrfewaf");
	exit(EXIT_FAILURE);
}
