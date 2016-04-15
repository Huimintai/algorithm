#include<iostream>

using namespace std;

void changeValue(int x)
{
	x = x + 1;
}

int main()
{
	int x = 2;
	changeValue(x);
	cout<<x<<endl;
}
