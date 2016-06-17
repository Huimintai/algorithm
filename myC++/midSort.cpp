#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a ,int b)
{
	return a > b;
}

void scort(int* input, int n, int* output)
{
	sort(input, input+n, compare);
	for(int i=0; i<n; i++)
	{
		cout<<input[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		if(i%2 == 0)
		{
			output[n/2 + i/2] = input[i];
		}
		else
		{
			output[n/2 - i/2 - 1] = input[i];
		}
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
		
