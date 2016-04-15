#include<iostream>

using namespace std;

int main ()
{
	int a;
	int *p_int = NULL;
	p_int = &a;
	*p_int = 5;
	cout<<a<<endl;
	
	int *p_ints = new int;
	int numbers[8];
	p_ints = numbers;
	delete p_ints;
	p_ints = NULL;
}
