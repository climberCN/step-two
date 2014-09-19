#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>



int main()
{
	pid_t child;
	int *status;
	char *const argv[] = {"/bin/ls", "-al", NULL};
	if((child = fork()) < 0){
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if(child == 0){
		puts("in child");
		printf("the child pid is %d\n",getpid());
		printf("the child ppid is %d\n",getppid());
		execve("/bin/ls", argv, NULL);
		exit(EXIT_SUCCESS);
	}
	else{
		puts("in parent");
		waitpid(child, status, 0);
		printf("the parent pid is %d\n",getpid());
		printf("the parent ppid is %d\n",getppid());
		printf("the child status is %d\n",*status);
	}
		exit(EXIT_SUCCESS);
}
