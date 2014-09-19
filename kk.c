#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	int ch;
	FILE *fp;
	long count = 0;

	if(argc != 2){
	
		printf("usage: %s filename\n",argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1],"r")) == NULL)
	{
		printf("can't open %s\n", argv[1]);
		exit(1);
	}


}
