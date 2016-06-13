#include<iostream>

using namespace std;

bool isPalindrome(int x)
{
	if(x < 0)
	{
		return false;
	}
	int dev = 1;
	while(x/dev > 10)
	{
		dev *= 10;
	}
	while(x > 0)
	{
		if(x%10 != x/dev)
		{
			return false;
		}
		x %= dev;
		x /= 10;
		dev /= 100;
	}
	return true;
}

int main()
{
	int n = 123532;
	cout<<isPalindrome(n)<<endl;
}
	
