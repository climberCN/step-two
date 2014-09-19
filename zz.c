#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUF_MAX 10

int main(int agrc, char*argv[])
{
	int fd_r = 0;
	int fd_w = 0;
	char buf[BUF_MAX];
	ssize_t num = 0;
	int flags = O_RDONLY | O_CREAT;
	if((fd_r = open("new_test.c", flags, 0644)) < 0) {
		perror("open new_test.c");
		exit(EXIT_FAILURE);
	}
	if((fd_w = open("writefile", O_CREAT | O_WRONLY)) < 0) {
		perror("writefile");
		exit(EXIT_FAILURE);
	}
	while((num = read(fd_r, buf, 10)) > 0) {
		if((num = write(fd_w, buf, num)) < 0) {
			perror("write_to_writefile");
			exit(EXIT_FAILURE);
		}
	}
	if(close(fd_r) < 0) {
		perror("close new_test.c");
		exit(EXIT_FAILURE);
	}
	if(close(fd_w) < 0) {
		perror("close new_test.c");
		exit(EXIT_FAILURE);
	}
	return 0;
}
