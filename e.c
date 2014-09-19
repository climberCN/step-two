#include <stdio.h>
#define DENSITY	62.4
int main()
{
	
	float	weight,volume;
	int	size,letters;
	char	name[40];


	printf("hi, what's your first name?\n");
	scanf("%c",&name);
	printf("what's your weight in pounds,%c",name);
	scanf("%d",&weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight/DENSITY;
	return 0;
}
