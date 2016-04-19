#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	if(a == 0 || b == 0)
	{
		return 0;
	}
	else
	{
		while(a % b != 0)
		{
			int tmp = a % b;
			a = b;
			b = tmp;
		}
		return b;
	}
}

int lcm(int a, int b)
{
	if(a == 0 || b == 0)
	{
		return 0;
	}
	else
	{
		return a * b / gcd(a, b);
	}
}

int main()
{
	int a = 3;
	int b = 5;
	cout<<gcd(3, 5)<<endl;
	cout<<lcm(3, 5)<<endl;
}	
