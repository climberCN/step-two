#include <stdio.h>

#define FUNLEN 20 
typedef struct fund funds;
struct fund{
	char bank[FUNLEN];
	double bankfund;
	char save[FUNLEN];
	double savefund;

};


void sum(funds *);

int main(void)
{

	funds *p;
	funds gd[] = {
		{
			"guangda",
			50.254,
			"liming",
			952648.216
		},
		{
			"guangda",
			54.15,
			"wangwu",
			8455.45
		}
	};
	p = gd;
	sum(p);
	sum(p+1);
	printf("the %s's fund is %.2f\n",gd[0].save,gd[0].bankfund);

	printf("the %s's fund is %.2f\n",gd[1].save,gd[1].bankfund);
	return 0;
}



void sum(funds* p)
{	
	p->bankfund = p->bankfund + p->savefund;
}

