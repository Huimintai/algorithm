#include<iostream>

using namespace std;

int getNotRepeatNumber(int num)
{
	int mod = 0;
	int a = 0;
	while(num != 0)
	{
		mod = num % 10;
		num /= 10;
		if(num%10 != mod)
		{
			a = a * 10 + mod;
		}
	}
	return a;
}

int main()
{
	cout<<getNotRepeatNumber(122334)<<endl;
}
