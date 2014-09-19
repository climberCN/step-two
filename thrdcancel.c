#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>



void task1(int *counter);
void task2(int *counter);
void cleanup(int counter1, int counter2);
pthread_t thrd1, thrd2;

int g1 = 0;
int g2 = 0;

int main(int argc,char *argv[])
{
	int ret;


	ret = pthread_create(&thrd1, NULL, (void*)task1, (void*)&g1);
	if(ret){
		perror("pthread_create  :task1");
		exit(EXIT_FAILURE);
	}
	ret = pthread_create(&thrd2, NULL, (void*)task2, (void*)&g2);
	if(ret){
		perror("pthread_create  :task2");
		exit(EXIT_FAILURE);
	}
	pthread_join(thrd2, NULL);
	pthread_cancel(thrd1);
	pthread_join(thrd1, NULL);
	cleanup(g1, g2);
	exit(EXIT_SUCCESS);
}

void task1(int *counter)
{
	pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL);
	pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
	printf("the thread:task1 is running  :%d\n", *counter);
	(*counter)++;
	sleep(1);
	printf("the thread:task1 is running  :%d\n", *counter);
	(*counter)++;
	sleep(1);
	printf("the thread:task1 is running  :%d\n", *counter);
	pthread_testcancel();
	(*counter)++;
	sleep(1);
	printf("the thread:task1 is running  :%d\n", *counter);
	(*counter)++;
	sleep(1);
	printf("the thread:task1 is running  :%d\n", *counter);
	(*counter)++;
}

void task2(int *counter)
{
	pthread_cancel(thrd1);
	while((*counter) < 5){
	printf("the thread:task2 is running  :%d\n", *counter);
	(*counter)++;
	sleep(1);
	}
}

void cleanup(int counter1, int counter2)
{
	printf("total iterations: %d\n", counter1 + counter2);
}

