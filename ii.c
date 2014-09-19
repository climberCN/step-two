#include <stdio.h>
char ** makeargv(char *);

int main()
{
	char **myargv;
	char *mytest = "this is a test!";

	if((myargv = makeargv(mytest))==NULL)
		fprintf(stderr,"failed to make a arg array\n");
	else
	{
		int i =0;
		for(i = 0;myargv[i]!=NULL;i++)
		{
			printf("the %d arg is %s\n",i,myargv[i]);
		}
	}
	return 0;
}
