#include<iostream>

using namespace std;

int sum(int* a, int n)
{
	if(n == 1)
	{
		return 2 * a[0];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>i; j--)
		{
			if(a[j] < a[j-1])
			{
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return (a[0] + a[n-1]);
}

int main()
{
	int a[] = {1,3,5,7,9};
	cout<<sum(a,5)<<endl;	
}
