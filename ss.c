#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(void)
{
	int fd = 0;
	char *path = "/home/zjh/workspace/a.c";
	if((fd = open(path,O_RDONLY) < 0)) {
		perror("open %s",path);
		exit(EXIT_FAILURE);
	}
	off_t len = 10;
	if(ftruncate(fd,len) < 0) {
		perror("ftruncate a.c");
		exit(EXIT_FAILURE);
	}
		exit(EXIT_FAILURE);
}
