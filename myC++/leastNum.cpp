#include<iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int partition(int*a, int low, int high)
{
	int i = low - 1;
	for(int j=low; j<high; j++)
	{
		if(a[j] < a[high])
		{
			swap(a[j], a[++i]);
		}
	}
	swap(a[++i], a[high]);
	return i;
}
	

void theLeastNum(int*a, int len, int* b, int k)
{
	if(a == NULL || len < 0 || k < 0 || k > len)
	{
		return;
	}
	int index = partition(a, 0, len-1);
	while(index != k-1)
	{
		if(index > k -1)
		{
			index = partition(a, 0, index-1);
		}
		else
		{
			index = partition(a, index+1, len-1);
		}
	}
	
	for(int i=0; i<k; i++)
	{
		b[i] = a[i];
	}
}

int main()
{
	int a[] = {1, 9, 5, 3, 6, 7, 8};
	int b[4];
	theLeastNum(a, 7, b, 4);
	for(int i=0; i<4; i++)
	{
		cout<<b[i]<<endl;
	}
}
