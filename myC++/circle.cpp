#include<iostream>

using namespace std;

void circle(int* a, int n, int m)
{
	int out = 0, count = 0, i = 0;
	for(int j=0; j<n; j++)
	{
		a[j] = j + 1;
	}
	
	while(out < n-1)
	{
		if(a[i] != 0)
		{
			count++;
		}
		if(count == m)
		{
			count = 0;
			cout<<a[i]<<" ";
			a[i] = 0;
			out++;
		}
		i++;
		if(i == n)
		{
			i = 0;
		}
	}
	for(int j=0; j<n; j++)
	{
		if(a[j] != 0)
		{
			cout<<a[j]<<endl;
		}
	}
}

int main()
{
	int a[10] = {0};
	circle(a, 10, 10);
}
