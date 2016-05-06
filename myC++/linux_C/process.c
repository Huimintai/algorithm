#include<stdio.h>
#include<unistd.h>

int main()
{
	char* args[] = {"/usr/bin/vim", NULL};
	printf("PID is: %d\n", getpid());
	if(execve("/usr/bin/vim", args, NULL) < 0)
		perror("use execve error");
	return 1;
}
