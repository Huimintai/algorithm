#include<stdio.h>

int min(int x, int y);
int main()
{
	int a1, a2, min_int;
	printf("Input one number: ");
	scanf("%d", &a1);
	printf("Input second number: ");
	scanf("%d", &a2);
	min_int = min(a1, a2);
	printf("The min number: %d\n", min_int);
}

int min(int a, int b)
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
