#include<iostream>

using namespace std;

int reverseNum(int a)
{
	int b = 0;
	while(a != 0)
	{
		b = b * 10 + a % 10;
		a /= 10;
	}
	return b;
}

int main()
{
	cout<<(reverseNum(123)+reverseNum(8))<<endl;
}
