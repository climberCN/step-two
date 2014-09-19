#include <stdio.h>
#define TWO 2
#define OW "consistency is the last refuge of the unimagina\
tive. -oscar"
#define FOUR TWO*TWO
#define px printf("x is %d\n", x)
#define FMT "x is %d.\n"


int main(void)
{
	int x = TWO;

	px;
	x = FOUR;
	printf(FMT,x);
	printf("%s\n",OW);
	printf("TWO: OW\n");
	return 0;
}

