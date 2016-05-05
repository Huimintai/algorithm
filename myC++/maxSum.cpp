#include<iostream>

using namespace std;

int maxSum(int* a, int len)
{
	if(a == NULL || len < 0)
	{
		return 0;
	}
	int sum = 0;
	int maxSum = 0;
	for(int i=0; i<len; i++)
	{
		if(sum < 0)
		{
			sum = a[i];
		}
		else
		{
			sum += a[i];
		}
		if(sum > maxSum)
		{
			maxSum = sum;
		}
	}
	return maxSum;
}

int main()
{
	int a[] = {1, -2, 3, 10, -4, 7, 2, -5};
	cout<<maxSum(a, 8)<<endl;
}

