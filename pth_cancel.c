#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void task(int *);

void err_quit(char *);

pthread_t child;
int main()
{
	int g1 = 0;
	if(pthread_create(&child, NULL, (void*) task, &g1)){
		err_quit("pthread_create");
	}
	while(g1 < 5){
		printf("the father thread is running :%d\n", g1);
		sleep(1);
		if(g1 == 3){
		pthread_cancel(child);
		}
		g1++;
	}
	return 0;
}

void task(int* g1)
{
	while(*g1 < 5){
		printf("the thread %ld is running :%d\n", child, *g1);
		(*g1)++;
		sleep(1);
	}
}

void err_quit(char *err)
{
	perror(err);
	exit(EXIT_FAILURE);
}
