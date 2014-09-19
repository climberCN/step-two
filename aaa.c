#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void err_quit(char *);

int main()
{
	sigset_t newset;
	if((sigemptyset(&newset)) < 0)	err_quit("sigemptyset");
	if((sigaddset(&newset, SIGTERM)) < 0)	err_quit("sigaddset:SIGTERM");
	if((sigaddset(&newset, SIGALRM)) < 0)	err_quit("sigaddset:SIGalrm");

	if((sigprocmask(SIG_BLOCK, &newset, NULL)) < 0)err_quit("sigprocset");

	pause();
	exit(EXIT_SUCCESS);
}


void err_quit(char* err)
{
	perror(err);
	exit(EXIT_FAILURE);
}
