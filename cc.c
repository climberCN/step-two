#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 20
#define OFFSET 30
#define READ_COUNT 20

int main(int argc, char *argv[])
{
	int fd_r = 0;
	int fd_w = 0;
	char buf[BUF_SIZE];
	off_t off;



	if((fd_r = open("/home/zjh/workspace/pp.c", O_CREAT | O_RDWR , 0644)) < 0){
		perror("open pp.c");
		exit(EXIT_FAILURE);
	}
	if((fd_w = open("/home/zjh/workspace/pp_copy.c", O_CREAT | O_RDWR , 0644)) < 0){
		perror("open pp.c");
		exit(EXIT_FAILURE);
	}


	if((off = lseek(fd_r, OFFSET, SEEK_SET)) >= 0){
		if((off = lseek(fd_w, OFFSET, SEEK_SET)) >= 0){
			while(read(fd_r, buf , READ_COUNT)){
				if(write(fd_w, buf, READ_COUNT) < 0){
					perror("write pp_copy.c");
					exit(EXIT_FAILURE);
				}
			}
		}
	}



	if(close(fd_r) < 0) {
		perror("close  fd_r");
		exit(EXIT_FAILURE);
	}
	if(close(fd_w) < 0) {
		perror("close  fd_r");
		exit(EXIT_FAILURE);
	}
	return 0;
}
