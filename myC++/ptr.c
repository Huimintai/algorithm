#include<stdio.h>

int main () {
	int x;
	int* p_int;
	p_int =  &x;
	x = 5;
	printf("x=%d\n", x);
	*p_int = 10;
	printf("x=%d\n", x);
}
