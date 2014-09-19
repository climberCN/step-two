#include <stdio.h>

union hold {
	int digit;
	double bigfl;
	char letter;
};


int main()
{
	union hold val = {.letter = 'r'};
	return 0;
}
