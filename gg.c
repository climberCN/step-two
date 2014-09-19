#include <stdio.h>
#define FUNDLEN 20


struct funds{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(struct funds);

int main()
{
	struct funds gd = {
		"guangda_bank",
		506.358,
		"lipinger",
		99645.255
	};
	printf("the bankfund is $%.2f\n", sum(gd));
	printf("$%.2f\n",gd.bankfund);
	return 0;
}

double sum(struct funds a)
{
	return a.bankfund + a.savefund;
}
