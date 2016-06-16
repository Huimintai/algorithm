#include<iostream>

using namespace std;

void isNTime(int* a, int len)
{
	for(int i=0; i<len; i++)
	{
		if((a[i]&(a[i]-1)) == 0)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}

int main()
{
	int a[5] = {1,2,3,4,8};
	isNTime(a, 5);
}
