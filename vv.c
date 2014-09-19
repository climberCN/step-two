#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define OFFSET 30
int main(int argc,char *argv[])
{
	int fd = 0;
	off_t s = 30;
	if((fd = open("/home/zjh/workspace/pp.c", O_CREAT | O_RDWR, 0644)) < 0){
		perror("open pp.c");
		exit(EXIT_FAILURE);
	}

	if((s = ftruncate(fd, s)) < 0){
		perror("truncate pp.c");
		exit(EXIT_FAILURE);
	}
	if(fsync(fd) < 0){
		perror("fsync");
		exit(EXIT_FAILURE);
	}

	if(close(fd) < 0){
		perror("close pp.c");
		exit(EXIT_FAILURE);
	}
	return 0;
}
