#include<iostream>

using namespace std;

bool isUgly(int n)
{
	while(n%2 == 0)
	{
		n /= 2;
	}
	while(n%3 == 0)
	{
		n /= 3;
	}
	while(n%5 == 0)
	{
		n /= 5;
	}
	return (n==1)? true: false;
}
/*
int uglyNum(int index)
{
	int i = 1;
	int count = 0;
	for(; count < index; i++)
	{
		if(isUgly(i))
		{
			count ++;
		}
	}
	return i;
}
*/

int getUglyNum(int index)
{
	if(index <=0)
	{
		return 0;
	}
	int count = 0;
	int i = 1;
	while(count < index)
	{
		if(isUgly(i))
		{
			count ++;
		}
		i ++;
	}
	return i;
}	
int main()
{
	cout<<getUglyNum(1500)<<endl;
}
