#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("PID: %d\n", getpid());
	printf("PPID: %d\n", getppid());
}
