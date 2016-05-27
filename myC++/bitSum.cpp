#include<iostream>

using  namespace std;

int sum(int num)
{
	int sum = 0;
	while(num != 0)
	{
		sum = sum + num % 10;
		num /= 10;
	}
	return sum;
}

void bitSum(int* a, int len)
{
	for(int i=0; i<len-1; i++)
	{
		for(int j=len-1; j>i; j--)
		{
			if(sum(a[j]) < sum(a[j-1]))
			{
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
			else if(sum(a[j] == sum(a[j-1])))
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
}

int main()
{
	int a[10] = {11,3,2,4,5,9,8,7,10,6};
	bitSum(a, 10);
	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
