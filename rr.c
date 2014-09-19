#include <stdio.h>
#define TITL 41
#define AUTL 31

struct book{
	char title[TITL];
	char author[AUTL];
	float price;
};


int main()
{
	struct book library;
	puts("tell me what's the book name?");
	gets(library.title);
	puts("what about the author?");
	gets(library.author);
	puts("how about the price?");
	scanf("%f",&library.price);
	puts(library.title);
	puts(library.author);
	printf("%2.2f\n",library.price);
	return 0;
}
