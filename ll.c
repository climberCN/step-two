#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int fd = 0;
	if((fd = open("/home/zjh/workspace/pp.c", O_RDONLY)) < 0) {
		perror("open :pp.c");
		exit(EXIT_FAILURE);
	}
	if(close(fd) < 0) {
		perror("close pp.c");
		exit(EXIT_FAILURE);
	}
	return 0;

}

