#include<stdio.h>
#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x+y;
}

int main()
{
	int x, y;
	cout<<"Please inpute x\n";
	cin>>x;
	cout<<"Please inpute y\n";
	cin>>y;
	int z=add(x, y);
	cout<<z;
}
