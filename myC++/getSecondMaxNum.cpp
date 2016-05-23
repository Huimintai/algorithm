#include<iostream>

using namespace std;

void getSecondMaxNum(int* a, int len)
{
	int max = a[0];
	int second = 0x80000000;
	for(int i=1; i<len; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			second = max;
		}
		else
		{
			if(a[i] > second)
			{
				second = a[i];
			}
		}	
	}
	cout<<"max: "<<max<<endl;
	cout<<"second max: "<<second<<endl;
}

int main()
{
	int a[5] = {1,2,6,8,0};
	getSecondMaxNum(a, 5);
}

