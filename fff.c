#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>

void err_quit(char *);

int main(int argc, char* argv[])
{
	int fd;
	struct stat buff;
	size_t len;
	char *start;
	if(argc != 2){
		err_quit("lost arg");
	}
	if((fd = open(argv[1], O_RDONLY)) < 0){
		err_quit("open");
	}
	if(fstat(fd, &buff) < 0){
		err_quit("fstat");
	}
	len = buff.st_size;
	start = mmap(start, len, PROT_READ, MAP_SHARED, fd, 0);
	printf("%s", start);
	close(fd);
	munmap(start, len);
	return 0;
}

void err_quit(char *err)
{
	perror(err);
	exit(EXIT_FAILURE);
}
