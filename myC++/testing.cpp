#include<iostream>

using namespace std;

bool isRepeatNum(unsigned int num)
{
	int mod = num % 10;
	num = num / 10;
	while(num != 0)
	{
		if(num % 10 != mod)
		{
			num /= 10;
		}
		else
		{
			return true;
		}
	}
	return false;
}

unsigned int getNotRepeatNum(unsigned int value)
{
	int i = value + 1;
	while(1)
	{
		if(isRepeatNum(i))
		{
			return i;
		}
		else
		{
			i ++;
		}
	}
}

int main()
{
	int num = 12;
	cout<<getNotRepeatNum(num)<<endl;
}
