#include<iostream>

using namespace std;

int numberOfOne(int a)
{
	int static count = 0;
	while(a)
	{
		a = a & (a - 1);
		++ count;
	}
	return count;
}
int main()
{
	int a = 8;
	cout<<numberOfOne(a)<<endl;
}	
