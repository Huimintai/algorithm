#include<iostream>

using namespace std;

int binary_search(int* a, int len, int key)
{
	int low = 0;
	int high = len - 1;
	while(low <= high)
	{
		int middle = (low + high) / 2;
//		int middle = low + (high - low)*(key - a[low])/(a[high]-a[low]);
		if(key < a[middle])
		{
			high = middle - 1;
		}
		else if(key > a[middle])
		{
			low = middle + 1;
		}
		else
		{
			return middle;
		}
	}
	return 0;
}

int main()
{
	int a[7] = {1,2,3,4,5,6,7};
	cout<<binary_search(a, 7, 5)<<endl;
}
	
