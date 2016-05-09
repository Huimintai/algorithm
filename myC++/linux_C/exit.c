#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	pid_t result;
	result = fork();
	if(result == -1)
	{
		perror("Create child failed!");
		exit(0);
	}
	else if(result == 0)
	{
		printf("test final process _exit function!\n");
		printf("On current is child process, we use save!");
		_exit(0);
	}
	else
	{
		printf("test final process exit fuction!\n");
		printf("On current is parent process, we use save!");
		exit(0);
	}
}
