#include<iostream>

using namespace std;

int peachNum(int day)
{
	int sum = 1;
	for(int i=0; i<day-1; i++)
	{
		sum = (sum + 1) * 2;
	}
	return sum;
}

int main()
{
	cout<<peachNum(2)<<endl;
}
