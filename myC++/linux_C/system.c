#include<stdio.h>
#include<stdlib.h>

int main()
{
	int newret;
	printf("The PID is; %d\n", getpid());
	newret = system("ping www.baidu.com");
	return 0;
}
