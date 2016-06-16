#include<iostream>

using namespace std;

void bubbleSort(int* a, int len)
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=len-1; j>i; j--)
		{
			if(a[j] < a[j-1])
			{
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}

void scort(int* input, int n, int* output)
{
	bubbleSort(input, n);
	int i = n / 2;
	output[i] = input[n-1];
	n--;
	i--;
	while(i >=0)
	{
		output[i] = input[n-2];
		i--;
		n -= 2;
	}
	while(i < n)
	{
		output[i] = input[n+2];
		i++;
		n +=2;
	}
}

int main()
{
	int input[5] = {3,6,1,9,7};
	int output[5] = {0};
	scort(input, 5, output);
	for(int i=0; i<5; i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<endl;
}
		
