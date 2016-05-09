#include<iostream>

using namespace std;

long long Fibonacci(unsigned int n)
{
	if(n <0)
	{
		return 0;
	}
	if(n == 1)
	{
		return 1;
	}
		
	long long a = 0;
	long long b = 1;
	long long result = 0;
	for(unsigned int i=2; i<=n; i++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}

int main()
{
	cout<<"Please input n: ";
	int n;
	cin>>n;
	cout<<Fibonacci(n)<<endl;

}
