#include<iostream>

using namespace std;

int numOf1(unsigned int n)
{
	int count = 0;
	while(n != 0)
	{
		if(n % 10 == 1)
		{
			count ++;
		}
		n /= 10;
	}
	return count;
}

int hasNumOf1(int n)
{
	int count = 0;
	for(int i=1; i<=n; i++)
	{
		count += numOf1(i);
	}
	return count;
}

int main()
{
	cout<<hasNumOf1(1)<<endl;
}
