#include <stdio.h>
#include <signal.h>
#include <stdlib.h>


void err_quit(char*);
void sighand(int);

int main()
{
	sigset_t newset;
	sigset_t pendset;
	struct sigaction action;
	if((sigemptyset(&newset)) < 0) {
		err_quit("sigemptyset");
	}
	if((sigaddset(&newset, SIGTERM)) < 0) {
		err_quit("sigaddset:SIGTERM");
	}
	if((sigprocmask(SIG_BLOCK, &newset, NULL)) < 0){
		err_quit("sigprocmask");
	}
	kill(getpid(), SIGTERM);
	sigpending(&pendset);
	if(sigismember(&pendset, SIGTERM)){
	action.sa_handler = sighand;
	sigemptyset(&(action.sa_mask));
	action.sa_flags = SA_ONESHOT;
	sigaction(SIGTERM, &action, NULL);
	pause();
	}
}

void sighand(int sig)
{
	printf("the signal handler %d is invoking\n", sig);
}


void err_quit(char * err)
{
	perror(err);
	exit(EXIT_FAILURE);
}
