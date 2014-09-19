#include <stdio.h>
#include <string.h>
#define PRAISE	"what a super marvelous name!"


int main()
{
	char name[40];
	int	num=1;;
	printf("what's your name?\n");
	scanf("%s",name);
	printf("hello,%s.%s\n",name,PRAISE);
	printf("%lu\n",sizeof(PRAISE));
	printf("%lu\n",strlen(PRAISE));
	printf("%lu\n",sizeof(char));
	return 0;
}



//printf中必须有“%d”之类的东西控制后面的格式，否则会报错。
//string.h中包含有strlen()函数，需要引用头文件。
