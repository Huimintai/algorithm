#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t result;
	result = fork();
	int newret;
	if(result == -1)
	{
		perror("Create child process failed!");
		exit(0);
	}
	else if(result == 0)
	{
		printf("Return number: %d,this is child process!\nthe process PID is : %d\nthe process parent PID is : %d\n", result, getpid(), getppid());
		newret = system("ls -l");
	}
	else
	{
		sleep(10);
		printf("Return number: %d,thie is parent process!\nthe PID is : %d\nthis process parent PID is : %d\n", result, getpid(), getppid());
		newret = system("ping www.baidu.com");
	}
}
