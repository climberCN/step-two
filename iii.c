#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	pid_t child;
	int *status;
	if((child = fork()) < 0){
		perror("fork");
		exit(EXIT_FAILURE);
	}if(child == 0){
		sleep(30);
	}else{
		printf("killing %d\n", child);
		kill(child,SIGCHLD);
		waitpid(child, status, 0);		
	}
	return 0;
}


