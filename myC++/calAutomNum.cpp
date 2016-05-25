#include<iostream>

using namespace std;
/*
bool isAutoNum(int num)
{
	int a = num * num;
	while(num != 0)
	{
		if(num % 10 == a % 10)
		{
			num /= 10;
			a /= 10;
		}
		else
		{
			return false;
		}
	}
	return true;
}
unsigned int calAutomorphicNumbers(unsigned int n)
{
	int count = 0;
	for(int i=0; i<=n; i++)
	{
		if(isAutoNum(i))
		{
			count++;
		}
	}
	return count;
}
*/

unsigned int calAutomorphicNumbers(unsigned int n)
{
	int count = 0, j = 1, sum = 0;
	for(int i=0; i<=n; i++)
	{
		sum = i * i;
		while(j <= i)
		{
			j *= 10;
		}
		if(sum % j == i)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	cout<<calAutomorphicNumbers(244)<<endl;
}
