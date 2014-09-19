#include <stdio.h>
#define	MSG	"you must have many talents.tell me some\n"

#define LIM 5
#define LINELEN 81

int main()
{
	char name[LINELEN];
	char talents[LINELEN];
	int i;
	const char m1[40] = "limit youself to one line's worth. \n";
	const char m2[] = "if you can't think anything,fake it\n";
	const char * m3 = "\nenough about me-what's your name?\n";
	const char *mytal[LIM] = {"adding numbers swiftly","dasdasdasd","asdahosnsndoasind","sadhoqnrn","pretknrl"};
	printf("hi,i'm clyde a computer""i have many talents\n");
	printf("let me tell you some of them\n");
	puts("what were they?ao,yes,here's a partial list.");
	for(i=0;i<LIM;i++)
		puts(mytal[i]);
		puts(m3);
		gets(name);
		printf("well,%s,%s\n",name,MSG);
		printf("%s\n%s\n",m1,m2);
		gets(talents);
		puts("let's see if i have got that list:");
		puts(talents);
		printf("thanks for the information,%s\n",name);
		return 0;

}
