#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/wait.h>
#define BUFSZ PIPE_BUF

void err_quit(char *);


int main(int argc, char *argv[])
{
	int fd[2];
	int fdin;
	pid_t child;
	char buf[BUFSZ];
	size_t len;

	if(pipe(fd) < 0) err_quit("pipe");
	if((child = fork()) < 0) err_quit("fork");
	else if(child == 0){
		close(fd[1]);
		while(len = read(fd[0], &buf, BUFSZ)){
			write(STDOUT_FILENO, &buf, len);
		}
			close(fd[0]);
	}
	else{
		close(fd[0]);
		fdin = open(argv[1], O_RDONLY);
		while(len = read(fdin, &buf, BUFSZ)){
			write(fd[1], &buf, len);
		}
		close(fd[1]);
		close(fdin);
	}
	waitpid(child, NULL, 0);	
	return 0;
}

void err_quit(char* msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}
