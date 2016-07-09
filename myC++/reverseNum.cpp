#include<iostream>
#include<math.h>
using namespace std;

unsigned long reverseNum(unsigned long num)
{
	unsigned long result = 0;
	for(int i=0; i<32; i++)
	{
		int mod = num % 2;
		result = result * 2 + mod;
		num /= 2;
	}
	return result;
}

int main()
{
	unsigned long a = pow(2, 30);
	cout<<reverseNum(a)<<endl;
}
