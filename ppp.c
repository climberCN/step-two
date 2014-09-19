#include <signal.h>
#include <stdlib.h>
#include <stdio.h>


void err_quit(char *);

int main()
{
	sigset_t newset;
	if((sigemptyset(&newset)) < 0){
		err_quit("sigemptyset");
	}
	if((sigaddset(&newset, SIGCHLD)) < 0){
		err_quit("sigaddset");
	}
	if(sigismember(&newset, SIGCHLD)){
		puts("SIGCHLD is in the set");
	}else{
		puts("SIGCHLD is not in the set");
	}
	if(sigismember(&newset, SIGTERM)){
		puts("SIGTERM is in the set");
	}else{
		puts("SIGTERM is not in the set");
	}
	exit(EXIT_SUCCESS);
}

void err_quit(char *err){
	printf("%s\n",err);
	exit(EXIT_FAILURE);
}
