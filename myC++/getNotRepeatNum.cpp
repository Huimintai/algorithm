#include<iostream>

using namespace std;

bool isRepeatNum(unsigned int num)
{	
	int mod = num %10;
	num = num / 10;
	while(num != 0)
	{
		if(mod == num %10)
		{
			return false;
		}
		mod = num % 10;
		num /= 10;
	}
	return true;
}

unsigned int getNotRepeatNum(unsigned int value)
{
	int i = value + 1;
	while(isRepeatNum(i) == false)
	{
		i ++;
	}
	return i;
}

int main()
{
	int value;
	cout<<"Please inpute value: ";
	cin>>value;
	cout<<getNotRepeatNum(value)<<endl;
}
