#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t pid, wpid;
	int status, i;
	pid = fork();
	if(pid == 0)
	{
		printf("This is child process, PID is : %d\n", getpid());
		sleep(5);
		exit(0);
	}
	else
	{
		printf("This is parent process waiting for child process..........\n");
		wpid = wait(&status);
		i = WEXITSTATUS(status);
		printf("The waited process PID is; %d , final status: %d\n", wpid, i);
	}
}
		
