#include <iostream>

using namespace std;

int moreThanHalfNum(int* a, int len)
{
	int value = a[0];
	int count = 1;
	for(int i=1; i<len; i++)
	{
		if(a[i] == value)
		{
			count ++;
		}
		else
		{
			count --;
		}
		if(count < 0)
		{
			value = a[i];
		}
	}
	return value;
}

int main()
{
	int a[] = {1, 2, 3, 2, 2, 2, 5, 4, 2};
	cout<<moreThanHalfNum(a, 9)<<endl;
}
