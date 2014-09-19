#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void task(int *g1);
int g1 = 0;
pthread_t child;
void arr_quit(char *);

int main()
{
	if(pthread_create(& child, NULL, (void *) task, &g1)){
		arr_quit("pthread_create");
	}
	pthread_join(child, NULL);
	return 0;
}

void task(int *g1){
	while(*g1 < 5){
		printf("the pthread: %d is runing :%d\n", child, *g1);
		(*g1)++;
		sleep(1);
	}
	pthread_exit(NULL);

}

void arr_quit(char *err)
{
	perror(err);
	exit(EXIT_FAILURE);
}
