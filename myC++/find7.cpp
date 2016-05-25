#include<iostream>

using namespace std;

bool has7(int num)
{
	while(num != 0)
	{
		if(num % 10 == 7)
		{
			return true;
		}
		num /= 10;
	}
	return false;
}
int find7(int num)
{
	int count = 0;
	for(int i=1; i<= num; i++)
	{
		if(i%7 == 0 || has7(i))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	cout<<find7(20)<<endl;
}
		
		
