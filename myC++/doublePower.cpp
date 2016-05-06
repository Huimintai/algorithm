#include<iostream>

using namespace std;

double power(double base, int exponent)
{
	if(exponent == 0 || base == 0)
	{
		return 1;
	}
	double result = 1.0;
	if(exponent > 0)
	{
		for(int i=0; i<exponent; i++)
		{
			result *= base;
		}
		return result;
	}
	else
	{
		for(int i=0; i<(-exponent); i++)
		{
			result *= base;
		}
		return 1 / result;
	}

}

int main()
{
	double base;
	int exponent;
	cin>>base;
	cin>>exponent;
	cout<<power(base, exponent)<<endl;
}
