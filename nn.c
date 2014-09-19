#include <stdio.h>
#include <unistd.h>
#include <pwd.h>

int main()
{
	struct passwd *p;
	p = getpwnam(getlogin());
	printf("the username is %s\n", p->pw_name);
	printf("the uid is %d\n", p->pw_uid);
	printf("the gid is %d\n", p->pw_gid);
	printf("the gecos is %s\n", p->pw_gecos);
	printf("the home dir is %s\n", p->pw_dir);
	return 0;
}
