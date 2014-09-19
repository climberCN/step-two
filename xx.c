#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>



int main(int argc, char* argv[])
{
	int fd = 0;
	if((fd = open("/home/zjh/workspace/pp.c", O_RDWR | O_CREAT, 0644)) < 0) {
		perror("open pp.c");
		exit(EXIT_FAILURE);
	}
	if(ftruncate(fd, 200) < 0){
		perror("ftruncate");
		exit(EXIT_FAILURE);
	}
	return 0;
}
