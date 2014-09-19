#include <stdio.h>
#define FNAMELEN 10
#define LNAMELEN 15
#define SEX 10

struct name{
	char fname[FNAMELEN];
	char lname[LNAMELEN];
};

struct guys{
	struct name handle;
	int age;
	char sex[SEX];
};


int main()
{
	struct guys new[2] = {
		{
			{"li","ming"},
			35,
			"man"
		},
		{
			{"wang","wu"},
			27,
			"woman"
		}
	};
	struct guys *p;
	p = &new[1];
	printf("%s%s\n%d\n%s\n",p->handle.fname,p->handle.lname,(*p).age,p->sex);
	return 0;
}
