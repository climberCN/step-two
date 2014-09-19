#include <sys/types.h>
#include <wait.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t child;
	int errret;

	if((child = fork()) < 0){
		perror("fork");
		exit(EXIT_FAILURE);
	}else if(child == 0){
		sleep(30);
	}else{
		printf("sending SIGCHLD to %d\n",child);
		errret = kill(child, SIGCHLD);
		if(errret < 0){
			perror("kill: SIGCHLD");
		}else{
			printf("%d still alive\n", child);

		}
		printf("killing %d\n", child);
		if((kill(child, SIGCHLD)) < 0){
			perror("kill :SIGTERM");
		}
		waitpid(child, NULL, 0);
	}
	exit(EXIT_SUCCESS);
}
